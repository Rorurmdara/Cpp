#include<iostream>
using namespace std;
struct student{
    int age ;
    string name ;

     string grade;

    void printf(){
        cout<<" student name: "<<name<<endl;
        cout<<" student age: "<<age<<endl;
        cout<<" student grade: "<<grade<<endl;
    }
};
int main(){
    student student1;
    cout<<"student name: ";cin>>student1.name;
    cout<<" student grade: ";cin>>student1.grade;
    cout<<"student age: ";cin>>student1.age;
    student1.printf();
    student student2;
    cout<<"student name: ";cin>>student2.name;
    cout<<" student grade: ";cin>>student2.grade;
    cout<<"student age: ";cin>>student2.age;
    
    student2.printf();
    
    
    
 
}