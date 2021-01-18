#include<iostream>
using namespace std;

 void selection_sort(int arr[], int n){
       for(int i=0; i<n-1; i++){
       for(int j=i+1; j<n; j++){
           if(arr[i]>arr[j]){
               int temp=arr[i];
               arr[i]=arr[j];
               arr[j]=temp;
           }
       }
   }
 }

int main(){
   int n;
   cout<<"enter the isze of the list = ";
   cin>>n;
   int arr[n];

   for(int i=0; i<n; i++){
       cin>>arr[i];
   }
 
   selection_sort(arr, n);
   
   cout<<"sorted elements list = ";
   for(int i=0; i<n; i++){
       cout<<arr[i]<<" ";
   }

    return 0;
}