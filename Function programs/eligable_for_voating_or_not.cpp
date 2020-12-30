#include<iostream>
using namespace std;


int voating(int age){
    if(age>=18){
        cout<<"you are eligable for voating";
    }else{
    cout<<"you are not eligable for voating";
    }
    return 0;
}

int main(){
    int age;
    cout<<"enter your age = ";
    cin>>age;
    voating(age);
    return 0;
}
