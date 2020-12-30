#include<iostream>
using namespace std;

int main(){
int n;
cout<<"enter any no = ";
cin>>n;
cout<<"positive digit all no from right to left"<<endl;
while(n>0){
int rem = n%10;
cout<<rem<<endl;
n=n/10;
}
return 0;
}