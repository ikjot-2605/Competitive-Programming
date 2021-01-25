#include<iostream>
#include<string.h>
using namespace std;

struct Student
{
    char name[50];
    int rollno;
    int marks;
};
int main()  {
    Student s1;
    strcpy(s1.name,"Robin");
    s1.rollno = 11;
    s1.marks = 86;
    // Don't change the below code
    cout<<s1.name<<endl;
    cout<<s1.rollno<<endl;
    cout<<s1.marks<<endl;
    return 0;
}