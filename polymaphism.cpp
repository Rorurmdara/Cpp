#include<iostream>
using namespace std;
#include<string >
class person{
     public:
        virtual void talk(string name){
            cout<<"Hello, I am a person."<<endl;
        }
        void talk (int age ){
            cout<<"Hello, I am a person. I am "<<age<<" years old."<<endl;
        }
};
// overide
class student:public person{
    public:
       void talk(string person) override{
        cout<<"Hello, I am a student"<<endl;

       }

};
int main(){
 student students;
 students.talk("John");
}