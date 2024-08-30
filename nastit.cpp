#include<iostream>
using namespace std;
int main (){
    bool issecurityallow = true;
    bool isgetTicket=true;
    bool isGetTurn = false;
    if (issecurityallow){
        cout<<"you can enter the bank"<<endl;
        if(isgetTicket){
            cout<<" you can wait for your turn"<<endl;
            if(isGetTurn){            
                cout<<" can meet casheir"<<endl;
            } else{
            
                cout<<"wait for your turn"<<endl;
            }
        
        }  else {
            cout<<"get tiket first!"<<endl;

    
        } 
       
    

        
    } else {
        cout<<" you can not enter the bank"<<endl;
    }
}