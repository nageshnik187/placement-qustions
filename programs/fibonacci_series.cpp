#include<iostream>
using namespace std;

int main(){
int a=0, b=1, n;
cout<<"enter any for the series = ";
cin>>n;

cout<<a<<" "<<b<<" ";

for(int i=3; i<=n; i++){
int temp=a+b;
cout<<temp<<" ";
a=b;
b=temp;
}
return 0;
}