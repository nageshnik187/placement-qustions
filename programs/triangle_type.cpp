#include<iostream>
using namespace std;

int main(){
    int side1, side2, side3;
    cout<<"enter the triangle side"<<endl;
    cin>>side1>>side2>>side3;

    if(side1==side2 && side1==side3){
        cout<<"triangle is equileteral triangle"<<endl;
    }else if(side1==side2 || side1==side3 || side2==side3){
        cout<<"triangle is isoscale triangle"<<endl;
    }else{
        cout<<"triangle is scalene triangle"<<endl;
    }
    return 0;
}