// formula  a*a = b*b+c*c

#include<iostream>
#include<math.h>
using namespace std;

int maximum(int a, int b, int c)
{
    if(a>b && a>c){
            return a;
        }
    else if(b>c){
       return b;
    }else{
    return c;
    }   
}

int main(){
   int a,b,c;
   cout<<"enter the triangle ages = ";
   cin>>a>>b>>c;

   a=maximum(a,b,c);
   int left=pow(a,2);
   int right=pow(b,2)+pow(c,2);
   if(left==right)
   {
       cout<<"this ages are pythagorian tripletes";
   }else{
       cout<<"not the pythagorian tripletes";
   }

    return 0;
}