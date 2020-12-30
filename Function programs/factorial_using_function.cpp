#include<iostream>
#include<math.h>
using namespace std;

int factorial(int n)
{
    int temp=1;
    for(int i=1; i<=n; i++){
        temp*=i;
    }
    return temp;
}

int main(){
int n;
cout<<"enter any number for the factorial = ";
cin>>n;
cout<<"factoril of the no is = ";
    cout<<factorial(n);
return 0;
}