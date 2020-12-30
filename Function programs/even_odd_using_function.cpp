#include<iostream>
#include<math.h>
using namespace std;

void even_odd(int n)
{
    if(n%2==0){
      cout<<n<<" is even";  
    }else{
        cout<<n<<" is odd";
    }
}

int main(){
int n;
cout<<"enter any number = ";
cin>>n;
even_odd(n);
return 0;
}