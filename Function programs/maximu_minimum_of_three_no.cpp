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

int minimum(int a, int b, int c){
    if(a<b && a<c){
        return a;
    }
    else if(b<c){
        return b;
    }else{
        return c;
    }
}

int main(){
int a,b,c;
cout<<"enter three no's = ";
cin>>a>>b>>c;
    cout<<"maximum no is = "<<maximum(a,b,c);
    cout<<endl<<"minimum no is = "<<minimum(a,b,c);
return 0;
}