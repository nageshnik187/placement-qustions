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
   maxItem = max(maxItem,arr[i]);
   minItem = min(minItem, arr[i]); 
   }
cout<<maxItem<<" "<<minItem;
    return 0;
}