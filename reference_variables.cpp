#include<iostream>
using namespace std;
int main(){
    float x = 355;
    float &y = x;
    cout<<"The value of x is: "<<x<<endl;
      cout<<"The value of y is: "<<y<<endl;
    return 0;
}