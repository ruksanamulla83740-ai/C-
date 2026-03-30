#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int a = 8,b=56,c=899,d=1234;
    cout<<"The value of a without setw is: "<<a<<endl;
     cout<<"The value of a without setw is: "<<b<<endl;
      cout<<"The value of a without setw is: "<<c<<endl;
       cout<<"The value of a without setw is: "<<d<<endl;
        cout<<"The value of a  setw is: "<<setw(4)<<a<<endl;
         cout<<"The value of b  setw is: "<<setw(4)<<b<<endl;
          cout<<"The value of c  setw is: "<<setw(4)<<c<<endl;
           cout<<"The value of d  setw is: "<<setw(4)<<d<<endl;
    return 0;
}