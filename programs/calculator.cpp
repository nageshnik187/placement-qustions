#include<iostream>
using namespace std;

int main(){
    int a,b;
    char oprend;
    cout<<"enter two no. for the calculation"<<endl;
    cin>>a>>b;
    cout<<"+ - * / %"<<endl<<"choose the opreand for the operation "<<endl;
    cin>>oprend;

    switch(oprend){
        case '+':
        cout<<"sum of the numbers is = "<<a+b;
        break;

        case '-':
        cout<<"substration of the numbers is = "<<a-b;
        break;

        case '*':
        cout<<"multiplication of the numbers is = "<<a*b;
        break;

        case '/':
        cout<<"division of the numbers is = "<<a/b;
        break;

        case '%':
        cout<<"reminder of the numbers is = "<<a%b;
        break;

        dafault:
        cout<<"enter any valid operand";
        
    }

    return 0;
}