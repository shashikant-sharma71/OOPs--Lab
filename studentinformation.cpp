#include<iostream>
using namespace std;
class student{
    int roll;
    char name[20];
    char sec[3];
    float CGPA;
public:
void getvalue(){
    cout<<"Enter Your Roll no: ";
    cin>>roll;
    cout<<"Enter Your Name: ";
    cin>>name;
    cout<<"Enter Your Section: ";
    cin>>sec;
    cout<<"Enter Your CGPA: ";
    cin>>CGPA;
}
void display(){
    cout<<endl;
    cout<<"Hello,"<<name<<","<<endl;
    cout<<"Your Roll no ="<<roll<<endl<<"Your Name is= "<<name<<endl<<"Your Section is= "<<sec<<endl<<"Your CGPA is= "<<CGPA;
}

};
int main(){
  student s;
  s.getvalue();
  s.display();
  return 0;
}