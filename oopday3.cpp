#include<iostream>
using namespace std;
class product{
    private:
        int id;
       string name;
       double price;
       int quantity;
    public:
       void setdata(int id, string name, double price, int quantity){
        this->id = id;
        this->name = name;
        this->price = price;
        this->quantity = quantity;
       }
       void print(){
        cout<<"Product ID : "<< this->id<<endl;
        cout<<"Product Name : "<<this->name<<endl;
        cout<<"Product Price : "<<this->price<<endl;
        cout<<"Product Quantity : "<<this->quantity<<endl;
       }
       void input(){
       
        cout<<"[+] Enter Product ID : ";cin>>this->id;
        cout<<"[+] Enter Product Name : ";cin>>this->name;
        cout<<"[+] Enter Product Price : ";cin>>this->price;
        cout<<"[+] Enter Product Quantity : ";cin>>this->quantity;
       }


};
int main (){
    product p;
    int i;
    cout<<" Enter number of products:";cin >> i;

    for(int j=0; j<i; j++){
        cout<<" Product:"<<i<<endl;
        p.input();
        cout<<"------------------------------"<<endl;
        p.print();

    }

    return 0;
}