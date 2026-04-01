#include<iostream>
using namespace std;
int main(){
     int marks[5] = {90,85,78,92,88};
//     int mathmarks[4] = {95,80,85,90};
//     cout<<"Marks in Math: "<<endl;
//     cout<<mathmarks[0]<<endl;
//     cout<<mathmarks[1]<<endl;
//     cout<<mathmarks[2]<<endl;
//     cout<<mathmarks[3]<<endl;
//     cout<<mathmarks[4]<<endl;
// cout<<"Marks:"<<endl;
//     cout<<marks[0]<<endl;
//     cout<<marks[1]<<endl;
//     marks [2] = 36; // updating the value at index 2
//     cout<<marks[2]<<endl;
//     cout<<marks[3]<<endl;
//     cout<<marks[4]<<endl;
for(int i=0;i<5;i++){
    cout<<"The value of the marks: "<<i<<endl;
}
int*p = marks;
cout<<*(p++)<<endl;
cout<<*p<<endl;
cout<<*(p++)<<endl;


return 0;
}