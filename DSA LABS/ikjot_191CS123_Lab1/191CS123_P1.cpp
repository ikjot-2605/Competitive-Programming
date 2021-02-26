//Ikjot's Lab 1 Program 1 code

#include<iostream>
using namespace std;
int main(){
    cout<<"Please input the string below :"<<endl;
    //dynamically initialize a new char array
    char *arr = new char();
    //make a pointer variable and assign the head of the array to it
    char *pointer = arr;
    //take string input 
    scanf("%s",arr);
    //traverse through array by incrementing pointer by 2
    //end traversal when null character encountered
    cout<<"The alternate elements are as follows"<<endl;
    while(*pointer!=0){
        cout<<*(pointer)<<" ";
        pointer+=2;
    }
    cout<<endl;
}