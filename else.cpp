#include<iostream>

using namespace std;
int main (){
    float salary=1500;
    if(salary<500){
        cout<<" tax 0%"<<endl;
        cout<<"paid tax :$"<<salary*0<<endl;
    } else if (salary>500&&salary<1000){
        cout<<" tax 10%"<<endl;
        cout<<" paid tax :$"<<salary*0.1<<endl;
    } else {
        cout<<" tax 20%"<<endl;
        cout<<" paid tax :$"<<salary*0.2<<endl;

    }
}