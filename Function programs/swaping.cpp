#include<iostream>
using namespace std;

int swap(int a, int b)
{
    a=a+b;
    b=a-b;
    a=a-b;
    
    cout<<a<<" "<<b;
   return 0;  
}

int main(){
int a,b;
cout<<"enter any two numbers = ";
cin>>a,b;
swap(a,b);
return 0;
}