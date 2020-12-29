#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n, counter=2;
    cout<<"enter the no."<<endl;
    cin>>n;
    bool count=true;

    if(n<2){
        cout<<"this no is not applicable"<<endl;
        return 0;
    }
    while(counter<n){
        if(n%counter==0){
            cout<<"no is not prime"<<endl;
            count=false;
            break;
        }else{
            counter+=1;
        }
    }
   
   if(count){
    cout<<"no is prime"<<endl;
   }
    return 0;
}