#include<iostream>
#include<climits>
using namespace std;

int main(){
   int n;
   cout<<"enter the isze of the list = ";
   cin>>n;
   int arr[n];

for(int i=0; i<n; i++){
    cin>>arr[i];
}

int key;
cin>>key;

for(int i=0; i<n; i++){
    if(key==arr[i]){
        cout<<"index of key is = "<<i<<"\n"<<"value of the index = "<<arr[i];
        break;
    }
}

    return 0;
}