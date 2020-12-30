#include<iostream>
using namespace std;

int main(){
int binary,decimal=0;
cout<<"enter any binary no = ";
cin>>binary;
int base=1;
while(binary>0){
int rem = binary%10;
decimal = decimal + rem*base;
binary=binary/10;
base=base*2;
}
cout<<decimal;
return 0;
}