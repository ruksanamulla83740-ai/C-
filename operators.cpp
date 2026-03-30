#include<iostream>
using namespace std;
int main(){
    int a = 4,b =5;
    cout<<"Operatorsin C++"<<endl;
    cout<<"Following are the types of Operators in C++"<<endl;
    //Arthimetic Operators
    cout<< "The value of a + b is "<<a + b <<endl;
      cout<< "The value of a - b is "<<a - b <<endl;
        cout<< "The value of a * b is "<<a * b <<endl;
          cout<< "The value of a / b is "<<a / b <<endl;
            cout<< "The value of a % b is "<<a % b <<endl;
              //Assignment Operators -- > Used to assigns values to variables.
              //int a = 3 ,b = 9;
              //char d ='d';
              //Comparision Operator
              cout<<"The value of a == b is " << (a==b)<<endl;   
              cout<<"The value of a != b is " << (a!=b)<<endl;  
              cout<<"The value of a >= b is " << (a>=b)<<endl;  
              cout<<"The value of a <= b is " << (a<=b)<<endl;  
              cout<<"The value of a > b is " << (a>b)<<endl;   
              cout<<"The value of a < b is " << (a<b)<<endl;
              //logical Operators
              cout<<"The value of this logical and operator ((a==b)&& (a<b)) is: "<<((a==b) && (a<b)) <<endl;       
}