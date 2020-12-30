#include<iostream>
#include<math.h>
using namespace std;

int fibonacci(int n){
    int a=0,b=1;
    cout<<a<<" "<<b<<" ";
    for(int i=3; i<=n; i++){
         int temp=a+b;
         cout<<temp<<" ";
         a=b;
         b=temp;
        
    }
    return 0;
}

int main(){
int n;
cout<<"enter any number for the series = ";
cin>>n;
cout<<"fibonacci series in the given range = ";
    fibonacci(n);
return 0;
}