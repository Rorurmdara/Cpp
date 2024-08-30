#include<iostream>
#include<Windows.h>
using namespace std;
int main (){
    int age;
    string name ;
     cout<<"enter you age ";cin>>age;cin.ignore();
    cout<<"Enter name : " ;getline(cin ,name);
    cout<<"you name "<<name<<endl;
    cout<<"your age is "<<age<<endl;

    
}