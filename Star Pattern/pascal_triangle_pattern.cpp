#include<iostream>
using namespace std;

int main(){
    int n, coef=1;
    cout<<"enter the row = ";
    cin>>n;
    
    for(int i=0; i<n; i++){
        for(int j=0; j<n-i; j++){
            cout<<" ";
        }
        for(int j=0; j<=i; j++){
            if(i==0 || j==0){
                int coef=1;
            }else{
                coef = coef*(i-j+1)/j; 
            }
            cout<<coef<<" ";
        }
       cout<<endl;
    }

    return 0;
}