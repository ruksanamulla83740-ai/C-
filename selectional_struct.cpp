#include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"Tell me your age :"<<endl;
    cin>>age;
    if (age>18){
cout<<"Your can come to party";
    }
else if(age == 18){
    cout<<"Your just kid.You will get kid entry pass";
    }
    else {
        cout<<"You cannot come to party";
    }
    return 0;
}