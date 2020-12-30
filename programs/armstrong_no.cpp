#include<iostream>
using namespace std;

int main(){
int n,armstrong=0;
cout<<"enter any no = ";
cin>>n;
int temp=n;
while(n>0){
int rem = n%10;
armstrong = armstrong + rem*rem*rem;
n=n/10;
}
if(temp==armstrong){
cout<<armstrong<<" is armstrong";
}else{
cout<<armstrong<<" is not armstrong";
}
return 0;
}