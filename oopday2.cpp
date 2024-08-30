#include<iostream>
using namespace std;
class  person{
         private:
            int age;
            string name;
            string email;
         
         public:
         void setdata(int age ,string name ,string email){
            this->age=age;
            this->name=name;
            this->email=email;
            
         }
         void display(){
            cout<<"Name: "<<name<<endl;
            cout<<"Age: "<<age<<endl;
            cout<<"Email: "<<email<<endl;
         }
         void enter(){
      
            cout<<"Enter name: ";
            cin>>name;
            cout<<"Enter age: ";
            cin>>age;
            cout<<"Enter email: ";
            cin>>email;
            
         }
     
    };
int main (){
   person p[100];
   int size;
         cout<<"Enter the size of array: ";
         cin>>size;
         for(int i = 0 ;i <size;i++ ){
            cout<<" information  person : "<<i+1<<endl;
            p[i].enter();
            cout<<"--------------------------"<<endl;
            p[i].display();
         
         }
      }
    

   

   
   
   
 

