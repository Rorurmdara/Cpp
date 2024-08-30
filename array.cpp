#include<iostream>
using namespace std;
int main (){
    //declare variables
    float mark[5];
    mark[0] =10;
    mark[1] =20;
    mark[2] =30;
    mark[3] =40;
    mark[4] =50;
    // initialize
    string name[5]={
        "John",
        "Alice",
        "Bob",
        "Charlie",
        "David"
    };


  
 for (int i=0; i<5; i++){
    cout<<" studen:" <<name[i]<<endl;
    cout<<"score :"<<mark[i]<<endl;
    cout<<"-------------------"<<endl;
 }
}