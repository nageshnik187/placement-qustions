#include<iostream>
using namespace std;

int main(){
int octal,decimal=0;
cout<<"enter any octal no = ";
cin>>octal;
int base=1;
while(octal>0){
int rem = octal%10;
decimal = decimal + rem*base;
octal=octal/10;
base=base*8;
}
cout<<"decimal no = "<<decimal;
return 0;
}