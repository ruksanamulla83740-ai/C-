#include<iostream>
using namespace std;
int main(){
    int a = 7;
    int *p = &a; // pointer p holds the address of variable a
    cout<<"Value of a: "<<a<<endl; // Output: 3
    cout<<"Address of a: "<<&a<<endl; // Output: address of a
    cout<<"Value of p (address of a): "<<p<<endl; // Output: address of a
    cout<<"Value pointed to by p: "<<*p<<endl; // Output: 3
    return 0;
}