#include<iostream>
using namespace std;

int main(){
    int upperChar=0,lowerChar=0;
    char character;
    cout<<"enter any character"<<endl;
    cin>>character;
    
    lowerChar = (character=='a' || character=='e' || character=='i' || character=='o' || character=='u');
    upperChar = (character=='A' || character=='E' || character=='I' || character=='O' || character=='U');
    
    if(lowerChar || upperChar){
    cout<<character<<" character is vovel"<<endl;
    }else{
        cout<<character<<" character is consonent"<<endl;
    }
    return 0;
}