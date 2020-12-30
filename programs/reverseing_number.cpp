#include<iostream>
using namespace std;

int main(){
int n;
cout<<"enter any no = ";
cin>>n;
int sum=0;
while(n>0){
int rem = n%10;
sum=sum*10+rem;
n=n/10;
}
cout<<"reverse no = "<<sum;
return 0;
}