#include<iostream>
using namespace std;

void bubble_sort(int arr[], int n){
int counter=0;
 while(counter<=n-1){
     for(int i=0; i<n-counter-1; i++){
         if(arr[i]>arr[i+1]){
             int temp = arr[i];
             arr[i] = arr[i+1];
             arr[i+1] = temp;
         }
     }
     counter++;
 }
}

int main(){
    int n;
    cout<<"enter the no pf items in the list = ";
    cin>>n;
    int arr[n];
for(int i=0; i<n; i++){
       cin>>arr[i];
   }

 bubble_sort(arr,n);
 
 cout<<"sorted elements list = ";
   for(int i=0; i<n; i++){
       cout<<arr[i]<<" ";
   }
   return 0;
}