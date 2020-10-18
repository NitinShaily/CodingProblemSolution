#include <iostream>
#include<stdio.h>
using namespace std;

class Student{
    int roll_no;
    string name;
    int marks[5];
public:
    void store(){
        cout<<"Name of the student: ";
        getline(cin,name);
        cout<<"\nRoll no of the student:";
        cin>>roll_no;
        cout<<"\nMarks of the the student: ";
        for(int i=0; i<5; i++)
            cin>>marks[i];
    }
    
    void display(){
        cout<<"Name: "<<name<<endl;
        cout<<"roll_no: "<<roll_no<<endl;
        cout<<"Marks :";
         for(int i=0; i<5; i++)
            cout<<marks[i]<<" ";
    }
};

int main()
{
    Student obj;
    obj.store();
    obj.display();

    return 0;
}
