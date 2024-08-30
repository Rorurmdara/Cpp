#include<iostream>
using namespace std;
class Pet{
    private:
      int id;
      string type;
      string name;
      string color;
    public:
    //constructor
      Pet(int id,string type, string name, string color){
        this->id=id;
        this->type=type;
        this->name=name;
        this->color=color;
      }
      void getPetDetail(){
        cout<<"ID: "<<id<<", Type: "<<type<<", Name: "<<name<<", Color: "<<color<<endl;
      }
      Pet(){

      }
      

};
int main (){
    Pet myPet(1,"dog","Buddy","Brown");
    myPet.getPetDetail();
    return 0;

}