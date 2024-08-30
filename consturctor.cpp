#include<iostream>
#include<string>
using namespace std;
    class util{
        private:
           string name,email;
           int id;
        public:
         //  constructor initializes
        // util(string name, string email, int id) : name(name), email(email), id(id){
             this->name = name;
             this->email = email;
             this->id = id;
         
         void input(){
            cout<<"Enter name : ";
            cin>>name;
            cout<<"Enter email : ";
            cin>>email;
            cout<<"Enter id : ";
            cin>>id;
         }
         void print(){
            cout<<"name : "<<name<<endl;
            cout<<"email : "<<email<<endl;
            cout<<"id : "<<id<<endl;
         }

    };

int main (){
    teacher teachers;
    teachers.input();
    teachers.print();
    return 0;
}
