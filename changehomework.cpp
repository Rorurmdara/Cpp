#include<iostream>
using namespace std;
#include<vector>
// encapsulation 
 class print{
    private:
       int id;
       string name;
       int age;
    public:
        void setId(int id){
        this->id = id;
    }
         void getId(){
            cout<<"ID: "<<id<<endl;
         }
         void setName(string name){
            this->name = name;
         }
         void getName(){
            cout<<"Name: "<<name<<endl;
         }
         void setAge(int age){
            this->age = age;
         }
         void getAge(){
            cout<<"Age: "<<age<<endl;
         }
     
       
 };
     class order{
        private:
            int id;
            string name;
            string remark;
        public:
            void getid(int id){
                this->id = id;
            }
            void getName(string name){
                this->name = name;
            }
            void getRemark(string remark){
                this->remark = remark;
            }
            void setRemark(string remark){
                this->remark = remark;
            }
     };
int main(){
    print p;
    order orders1;
    p.setId(3);
    p.getId();
    p.setName("John Doe");
    p.getName();
    orders1.setRemark("good");
    orders1.getRemark();
    return 0;

}
 