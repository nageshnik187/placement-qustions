#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter the row = ";
    cin>>n;
    
    int space = (n*2-1)/2;
    for(int i=1; i<=n; i++){       
      for(int j=1; j<=space; j++){
          cout<<" ";
      }
        for(int j=1; j<=i*2-1; j++){
            if(j==1 || j==i*2-1){
            cout<<"* ";
            }else{
                cout<<"  ";
            }
        }
       cout<<endl;
       space-=2;
       n--;
    }

    space=n;
    for(int i=n; i>=1; i--){       
      for(int j=1; j<=space; j++){
          cout<<" ";
      }
        for(int j=1; j<=i*2-1; j++){
            if(j==1 || j==i*2-1){
            cout<<"* ";
            }else{
                cout<<"  ";
            }
        }
       cout<<endl;
       space+=2;
       
    }


    return 0;
}