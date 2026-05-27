#include<iostream>
using namespace std;
void print2(){
    for (int i=0; i<6; i++){
        for(int j=0; j<i; j++){
            cout <<  1+j;
        }
        cout << endl;
    }
}
int main (){
    print2();
}