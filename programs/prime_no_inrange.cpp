#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int a,b;
    cout<<"enter two no."<<endl;
    cin>>a>>b;
    
    for(int i=a; i<=b; i++){
        bool count=true;
        for(int j=2; j<sqrt(i); j++){
            if(i%j==0){
                count=false;
                break;
            }
        }
        if(count){
            cout<<"no is prime "<<i<<endl;
        }
    }
    return 0;
}