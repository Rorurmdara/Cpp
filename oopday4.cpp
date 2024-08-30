#include<iostream>
using namespace std;
// constuter
class Animal{
        private:
           string name;
        public:
           Animal(){
            cout<<"hello animal"<<endl;
         }
          Animal(string name){
            this->name=name;
            cout<<"hello "<<name<<endl;
 
        }
        //deconstructor
        ~Animal(){	

            cout<<"goodbye "<<name<<endl;
        };

};
int main (){
    Animal animal2("dog");  
    Animal animal1;
    
 return 0;
}