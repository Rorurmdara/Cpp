#include<iostream>
#include"Bankservice.h"
#include"Bankingserviceio.h"
using namespace std;
int main  (){
  Bankingservice *bank = new BankingserviceImpl;
  bank->deposit(500);
  bank->withdraw(200);
  bank->getbank();
  bank->withdraw(100);
  bank->getbank();
  return 0;
}