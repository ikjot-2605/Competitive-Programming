//Ikjot's Lab 2 Program 1
//Writing a menu driven program to allow sorting techniques of array of structures using merge/quick sort
//To show the usage, I will be sorting on the basis of marks scored by students.
#include <algorithm>
#include <vector>
#include <set>
#include <map>
#include <unordered_map>
#include <unordered_set>
#include <string>
#include <cmath>
#include <iostream>
#include <stack>
#include <queue>
#include <climits>
#include <iomanip>
#include <iterator>
#define all(x) x.begin(), x.end()
#define MOD 998244353
const unsigned int M = 1000000007;
const long double PI = 3.141592653589793236L;
 
typedef long long int ll;
typedef long double ld;
#define MAX 50
using namespace std;

typedef struct 
{
    std::string roll;
    int marks;
}student;

//global student array of structs
student studentArray[1000];

//currentListLength
int currStudentListLength = 0;


//welcome greeting message
void welcome(){
    cout<<"\nWelcome to student management portal.\n";
}


//to take input of students
void takeInputOfStudents(){
    cout<<"Hello, please input student information below:\n";
    cout<<"Roll No  :  \n";
    string roll;
    cin>>roll;
    cout<<"Marks  :  \n";
    int marks;
    cin>>marks;
    student currStudent;
    currStudent.marks = marks;
    currStudent.roll = roll;
    studentArray[currStudentListLength++] = currStudent;
    cout<<"Thank you, student information recorded!\n";
}


//exit from the app
void exit(){
    cout<<"\nThank you for using the student management portal.\n\n";
}


//to display records right now
void displayRecords(){
    cout<<"Here is the current list of students.\n\n";
    for(int i = 0; i < currStudentListLength ;i++){
        cout<<"Details of Student "<<i+1<<".\n";
        cout<<"Roll Number : "<<studentArray[i].roll<<endl;
        cout<<"Marks : "<<studentArray[i].marks<<endl;    
        cout<<endl;
    }
}


//util function of merge for mergesort
void merge(int low, int m, int high)
{
    int a1=m-low+1;
    int a2 = high - m;
 
    student left[a1], right[a2];
 
    for (int i = 0; i < a1; i++)
        left[i] = studentArray[low + i];
    for (int j = 0; j < a2; j++)
        right[j] = studentArray[m + 1 + j];

    int i = 0;
 
    int j = 0;
 
    int k = low;
 
    while (i < a1 && j < a2) {
        if (left[i].marks <= right[j].marks) {
            studentArray[k] = left[i];
            i++;
        }
        else {
            studentArray[k] = right[j];
            j++;
        }
        k++;
    }
 
    while (i < a1) {
        studentArray[k] = left[i];
        i++;
        k++;
    }
    while (j < a2) {
        studentArray[k] = right[j];
        j++;
        k++;
    }
}


//utility for qsort
void swap(student* a, student* b)  
{  
    student x = *a;  
    *a = *b;  
    *b = x;  
} 


//main function for mergesort
void mergeSort(int low,int high){
    if(low>=high){
        return;
    }
    int m = (low+high-1)/2;
    mergeSort(low,m);
    mergeSort(m+1,high);
    merge(low,m,high);
}


//util function for quicksort partition
int partition(int low,int high)  
{  
    int pivot = studentArray[high].marks;  
    
    int i = low-1;  
  
    for (int j=low;j<=high-1;j++)  
    {  
        if (studentArray[j].marks<pivot){  
            i++;  
            swap(&studentArray[i], &studentArray[j]);  
        }  
    }  
    swap(&studentArray[i + 1], &studentArray[high]);  
    return i + 1;  
} 


//main quicksort function
void quickSort(int low, int high)  
{  
    if (low < high)  
    {  
        int pi = partition(low, high);  
        quickSort(low, pi - 1);  
        quickSort(pi + 1, high);  
    }  
} 


//main insertion sort function
void insertionSort()  
{  
    int i, j;
    student key;  
    for (i = 1; i < currStudentListLength; i++) 
    {  
        key = studentArray[i];  
        j = i - 1;  

        while (j >= 0 && studentArray[j].marks > key.marks) 
        {  
            studentArray[j + 1] = studentArray[j];  
            j = j - 1;  
        }  
        studentArray[j + 1] = key;  
    }  
} 


//view the details of the menu
void viewDetails(){
    cout<<"To input student details, enter 1. \nTo exit, enter 0.\nTo Sort with QuickSort, enter 2\nTo sort with MergeSort, enter 3\nTo Sort with Insertion Sort, enter 4\nTo display array of structures, enter 5\n"; 
    cout<<"-------------------------------------------------------------"<<endl;
}


int main(){
    welcome();
    viewDetails();
    while(true){
        cout<<"Kindly enter your choice. To view options, enter 6\n";
        int choose;
        cin>>choose;
        if(choose==1){
            takeInputOfStudents();
        }
        else if(choose==2){
            //sort by quicksort
            quickSort(0,currStudentListLength-1);
            cout<<"Your List has been sorted by the use of quickSort!\n\n";
        }
        else if(choose==3){
            //sort by mergesort
            mergeSort(0,currStudentListLength-1);
            cout<<"Your List has been sorted by the use of mergeSort!\n\n";
        }
        else if(choose == 4){
            //sort by insertion sort
            insertionSort();
            cout<<"Your List has been sorted by the use of insertionSort!\n\n";
        }
        else if(choose==5){
            //display array of structures
            displayRecords();
        }
        else if(choose == 6){
            viewDetails();
        }
        else if(choose==0){
            exit();
            break;
        }
        else{
            cout<<"Kindly enter valid choice\n";
        }
        cout<<"-------------------------------------------------------------"<<endl;
    }
}