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
cout<<"enter the no of rows = ";
cin>>n;
for(int i=0; i<n; i++){
    for(int j=0; j<n-i; j++){
        cout<<" ";
    }
    for(int j=0; j<i; j++){
        cout<<factorial(i)/factorial(j)*factorial(i-j)<<" ";
    }
    cout<<endl;
}
 
return 0;
}