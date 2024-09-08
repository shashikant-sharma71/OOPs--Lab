#include<iostream>
using  namespace std;
class employee{
    int id;
    char name[20];
    char department[5];
    int salary;
  
    public:
void getvalue();
  void display();
};
void employee::getvalue(){
    cout<<"Enter your Id:";
    cin>>id;
    cout<<"Enter your Name:";
    cin>>name;
    cout<<"Enter your Department:";
    cin>>department;
    cout<<"Enter your Salary";
    cin>>salary;

}

void employee::display(){
    cout<<endl;
    cout<<"Hello,"<<name<<","<<endl;
    cout<<"Your Emp id is ="<<id<<endl<<"Your Name is= "<<name<<endl<<"Your Department is= "<<department<<endl<<"Your Salary is= "<<salary;
}
int main(){
    employee emp[30];
    int n,i;
    cout<<"Enter the number of employees";
    cin>>n;
    for( i=0;i<n;i++)
        emp[i].getvalue();
        cout<<"Employee data-"<<endl;
        for(i=0;i<n;i++)
            emp[i].display();
        
    

}