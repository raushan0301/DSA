#include <iostream>
#include <vector>
#include <cstddef>
using namespace std;
using namespace std;
class Node
{
public:
    int data;
    Node* next;
    Node* back;

    Node(int data1, Node* next1, Node* back1 )
    {
        data = data1;
        next = next1;
        back = back1;
    }

    public:
    Node(int data1)
    {
        data = data1;
        next = nullptr;
        back = nullptr;
    }

};
    Node* convertarr2Dll(vector<int> &arr){
        Node* head = new Node(arr[0]);
        Node* prev = head;
        for(int i=1; i<arr.size(); i++){
            Node* temp = new Node(arr[i],nullptr,prev);
            prev->next = temp;
            prev = temp;
        }
        return head;
    }

void print(Node* head){
        while(head!= NULL){
            cout<<head->data<<" ";
            head = head->next;
        }
    }

Node* deleteHead(Node* head){
    if(head == NULL || head->next == NULL){
        return NULL;
    }
    Node* prev = head;
    head = head ->next;
    head -> back = nullptr;
    delete prev;
    return head;
}

 Node * deleteTail(Node* head){
    if(head == NULL || head->next == NULL){
        return NULL;
    }
    Node* tail = head;
    while(tail->next != NULL){
        tail = tail->next;
    }
     Node* newTail = tail->back;  
    newTail->next = nullptr;
    delete tail;
    return head;

 }

    Node* deleteKthElement(Node* head,int k){
        if (head == NULL){
            return NULL;
        }
        int cnt = 0;
        Node* KNode = head;
         while(KNode != NULL ){
            cnt ++;
            if (cnt == k){
                break;
            }
            KNode = KNode->next; 
         } 
          Node* prev = KNode->back;
          Node* front = KNode->next; 
          

        if (prev == NULL && front == NULL){
            return NULL;
        }else if(prev == NULL){ 
           return deleteHead(head);
            
        }
        else if (front == NULL){
            return deleteTail(head);       
         }
         prev->next = front;
         front->back = prev;
         KNode->next = NULL;
         KNode -> back = NULL;
         delete KNode;
         return head;
          }
        



    int main (){
        vector<int> arr = {1,2,3,4,5};
        Node* head = convertarr2Dll(arr);
        head =deleteKthElement(head,4);
        print(head);
        return 0;
    }
