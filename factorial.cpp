#include <iostream>
using namespace std;

int main() {
    int n;
    int fact=1;
   cout<<"Enter an integer:";
   cin>>n;
   for(int i=1;i<=n;++i){
   fact*=i;

   }
       cout<<"Factorial of "<<n<<"= "<<fact;
    return 0;
}
