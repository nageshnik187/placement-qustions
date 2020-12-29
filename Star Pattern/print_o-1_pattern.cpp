#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter the row = ";
    cin>>n;
    
    int number=1;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            if((i+j)%2==0){
            cout<<number<<" ";
            }else{
                cout<<0<<" ";
            }
        }
       cout<<endl;
    }

    return 0;
}