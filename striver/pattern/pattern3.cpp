#include<iostream>
using namespace std;
int n;
void print3(){
    for (int i=0; i<n; i++){
        for(int j=0; j<i; j++){
            cout << j;
        }
        cout <<endl;
    }
}
int main(){
    cin>> n;
    print3();
}