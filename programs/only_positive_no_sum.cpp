#include<iostream>
using namespace std;

int main(){
    int n,number,sum=0;
    cout<<"enter how many no. you have to add"<<endl;
    cin>>n;
cout<<"enter the numbers"<<endl;
for(int i=0; i<n; i++){
    cin>>number;
    if(number>=0){
        sum+=number;
    cout<<sum<<endl;
    }else{
        cout<<"enter the positive no. ";
        cin>>number;
        sum+=number;
        cout<<sum<<endl;
    }
}
cout<<"sum of all the numbers is = "<<sum;
    return 0;
}