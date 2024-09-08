#include<iostream>
using namespace std;

class employee{
    int id;
    char name[30];
    char department[10];
    int salary;

public:
void getvalue(){
    cout<<"Enter Your emp id:";
    cin>>id;
    cout<<"Enter Your Name:";
    cin>>name;
    cout<<"Enter Your Department:";
    cin>>department;
    cout<<"Enter Your Salary:";
    cin>>salary;
  
}
void display(){
    cout<<endl;
    cout<<"Hello,"<<name<<","<<endl;
    cout<<"Your Emp id is ="<<id<<endl<<"Your Name is= "<<name<<endl<<"Your Department is= "<<department<<endl<<"Your Salary is= "<<salary;
}
};
int main(){
   employee s;
    s.getvalue();
    s.display();
    return 0;
}