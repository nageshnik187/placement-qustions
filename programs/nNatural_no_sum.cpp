#include<iostream>
using namespace std;

int main(){
    int n,sum=0;
    cout<<"enter any no."<<endl;
    cin>>n;

    for(int i=1; i<=n; i++){
    sum+=i;
    }
    cout<<"sum of n natural no. is = "<<sum;
    return 0;
}