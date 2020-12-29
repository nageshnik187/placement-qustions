#include<iostream>
using namespace std;

int main(){

    int n;
    int arr[10];
    cout<<"enter the size of array = ";
    cin>>n;

    cout<<"enter the no. in the array"<<endl;
    
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    
    int start=0, end=n-1;
    while(start<end){
        int temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
    }
    
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}