//Ikjot's Lab 1 Program 2 code

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    cout<<"Please input the array size below"<<endl;
    int n;
    cin>>n;
    int arr[n];
    cout<<"Please input the array elements below"<<endl;
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    int *pointer = arr;
    int minimum = INT_MAX;
    while(n--){
        if(minimum>*(arr+n)){
            minimum = *(arr+n);
        }
        else{
            continue;
        }
    }
    cout<<"The minimum element of the array is : ";
    cout<<minimum<<endl;
}