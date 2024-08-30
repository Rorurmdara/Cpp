#pragma one
#include <iostream>
#include "bankservice.h"
using namespace std;
double globalccase=0;

class BankingserviceImpl : public Bankingservice {
    public:
      void deposit(double cases)override {
        if(cases<=0){
        cout<<"Invalid amount to deposit."<<endl;
        } else{
        globalccase+=cases;
        cout<<"Deposit successful. New balance: "<<globalccase<<endl;
        }
    }
        
      void withdraw(double cases)  {
        if(cases>globalccase){
            cout<<"Insufficient funds."<<endl;
         } else {
            globalccase-=cases;
            cout<<"Withdrawal successful. New balance: "<<globalccase<<endl;
         }
        }      
    void getbank() {
            cout<<"Current balance: "<<globalccase<<endl;
            // return globalccase;
        }
};