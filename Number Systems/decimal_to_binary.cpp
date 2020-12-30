#include<iostream>
using namespace std;

int main(){
int binary=0,decimal;
cout<<"enter any decimal no = ";
cin>>decimal;
int base=1;
while(decimal>0){
int rem = decimal%2;
binary = binary + rem*base;
decimal=decimal/2;
base=base*10;
}
cout<<binary;
return 0;
}