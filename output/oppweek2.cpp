#include<iostream>
using namespace std;
class student{
    private:
    int id ;
    string name ;
    public:
    void print(){
        cout<< id << " " << name;

    }
    void setID(int id){
        if (id >0){

            this->id = id;
           } else {
                cout<< "error"<< endl;
           }
            } 
    int getID(){
        return id;
    }
};
int main(){
    student stu;
    int id;
    again:
    cout<<"enter id:";cin>>id;
    stu.setID(id);
    if (stu.getID() == 0){
        cout<< "try again"<< endl;
           goto again;

    }
        cout<< stu.getID()<<endl;
}