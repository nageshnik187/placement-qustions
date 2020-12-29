#include<iostream>
using namespace std;

int main(){
    int n,fact=1;
    cout<<"enter the no."<<endl;
    cin>>n;
    for(int i=n; i>=1; i--){
        fact*=i;
    }
    cout<<"factorial of the no is = "<<fact;
    return 0;
}