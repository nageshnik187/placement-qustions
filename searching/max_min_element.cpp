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
   int maxItem=INT_MIN;
   int minItem=INT_MAX;
   for(int i=0; i<n; i++){
       if(maxItem<arr[i]){
           maxItem=arr[i];
       }
       if(minItem>arr[i]){
           minItem=arr[i];
       }
   }
cout<<maxItem<<" "<<minItem;
    return 0;
}