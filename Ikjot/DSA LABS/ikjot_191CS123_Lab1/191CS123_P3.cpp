//Ikjot's Lab 1 Program 1 code
#include<string>
#include<iostream>
int currlen = 0;
typedef struct 
{
    std::string name;
    int roll;
    float percentage;
}student;

using namespace std;
void insertNewRecord(student *arr){
    student student_temp;
    cout<<"Kindly enter name of student : "<<endl;
    cin>>student_temp.name;
    cout<<"Kindly enter roll of student : "<<endl;
    cin>>student_temp.roll;
    cout<<"Kindly enter percentage of student : "<<endl;
    cin>>student_temp.percentage;
    arr[currlen] = student_temp;
}
void deleteRecord(student *arr){
    cout<<"Kindly mention the student roll number to delete: "<<endl;
    int roll_to_delete;
    cin>>roll_to_delete;
    int index_found = -1;
    for(int i =0;i<currlen;i++){
        if(arr[i].roll==roll_to_delete){
            index_found=i;
            break;
        }
    }
    if(index_found==-1){
        cout<<"No record found with roll number provided."<<endl;
    }
    else{
        for(int i =index_found;i<currlen-1;i++){
            arr[i]=arr[i+1];
        }
        currlen--;
    }
}
void displayRecords(student *arr){
    for(int i = 0;i<currlen;i++){
        cout<<"Student "<<i<<endl;
        cout<<"Name "<<(arr[i].name)<<endl;
        cout<<"Roll Number "<<arr[i].roll<<endl;
        cout<<"Percentage "<<arr[i].percentage<<endl;
        cout<<endl;
    }
}
int main(){
    student arr[100];
    //press 0 to end
    //press 1 to insert
    //press 2 to delete
    while(true){
        cout<<endl<<endl<<endl<<"----------------------------------"<<endl<<endl;
        cout<<"For inserting new record, press 1"<<endl;
        cout<<"For deleting record, press 2"<<endl;
        cout<<"For viewing records, press 3"<<endl;
        cout<<"For exiting the application, press 0"<<endl;
        int query_type;
        cin>>query_type;
        if(query_type==0){
            cout<<"Thank you for using my application, goodbye!"<<endl;
            break;
        }
        else if(query_type == 1){
            insertNewRecord(arr);
            currlen++;
            cout<<endl<<endl<<endl<<"----------------------------------"<<endl<<endl;
            continue;
        }
        else if(query_type==2){
            deleteRecord(arr);
            cout<<endl<<endl<<endl<<"----------------------------------"<<endl<<endl;
            continue;
        }
        else if(query_type==3){
            displayRecords(arr);
            cout<<endl<<endl<<endl<<"----------------------------------"<<endl<<endl;
            continue;
        }
        else{
            cout<<"Kindly enter valid query type : "<<endl;;
            continue;
        }
    }    
}
