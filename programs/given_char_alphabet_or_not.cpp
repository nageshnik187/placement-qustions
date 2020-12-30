#include<iostream>
#include<math.h>
using namespace std;

int main(){
char n;
cout<<"enter any character to check is alphabet  = ";
cin>>n;
if(('a'<=n && 'z'>=n) || ('A'<=n && 'Z'>=n)){
    cout<<"given character is alphabet";
}else{
    cout<<"not a alphabet";
}
return 0;
}