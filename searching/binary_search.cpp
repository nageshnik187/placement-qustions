#include<iostream>
#include<climits>
using namespace std;

int binary(int arr[], int n, int key){
    int start=0, end=n;

    while(start<=end){
         int mid=(start+end)/2;
         if(arr[mid]==key){
             return mid;
         }else if(arr[mid]>key){
             end=mid-1;
         }else{
            start=mid+1;
         }
    }
    return -1;
}

int main(){
   int n;
   cout<<"enter the isze of the list = ";
   cin>>n;
   int arr[n];

   for(int i=0; i<n; i++){
       cin>>arr[i];
   }

   int key;
   cout<<"enter the searching element = "; 
   cin>>key;
   int element = binary(arr,n,key);
   if(element == -1){
      cout<<"element is not found";
   } else{
   cout<<"searching element index = "<<element;
   cout<<"\nvalue of the index is = "<<arr[element];
   }    
    return 0;
}