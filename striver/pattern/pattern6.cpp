#include<iostream>
using namespace std;
int n;
void print5(){
    for (int i=1; i<n; i++){
        for(int j=0; j<n-i; j++){
            cout << j+1;
        }
        cout <<endl;
    }
}
int main(){
    cin>> n;
    print5();
}