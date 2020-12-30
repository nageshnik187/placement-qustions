// formula sum of n natural no, n(n+1)/2

#include<iostream>
using namespace std;

int sum(int n){
    int sum=n+1;
    sum=sum*n;
    sum=sum/2;
    return sum;
}

int main(){
    int n; 
    cout<<"enter any no = ";
    cin>>n;
    cout<<"sum of the o is = "<<sum(n);
    return 0;
}
