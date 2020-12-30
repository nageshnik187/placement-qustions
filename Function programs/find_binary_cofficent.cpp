// binary cofficent nCr=n!/r!*(n-r)!

#include<iostream>
#include<math.h>
using namespace std;

int factorial(int n)
{
    int temp=1;
    for(int i=2; i<=n; i++){
        temp*=i;
    }
    return temp;
}

int main(){
int n,r;
cout<<"enter the value of n = ";
cin>>n;
cout<<"enter the value of r = ";
cin>>r;
cout<<"binary cofficent of the no is = ";
    int sum=factorial(n)/factorial(r)*factorial(n-r);
    cout<<sum;
return 0;
}