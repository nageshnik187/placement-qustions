#include<iostream>
using namespace std;

int main(){
    int n,sum=0;
    cout<<"enter the no."<<endl;
    cin>>n;
    for(int i=1; i<=n; i++){
        sum+=i;
    }
    cout<<"natural no sum is = "<<sum;
    return 0;
}