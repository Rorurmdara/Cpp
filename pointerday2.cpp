#include <iostream>
using namespace std;
void test(int a ,int b){
  int sum=a+b;
  cout<<sum<<endl;
}
void test(double x ,double y){
    double dok =x-y;
    cout<<dok<<endl;
}
void mul(double x ,double y){
    double mul=x*y;
    cout<<mul<<endl;
}
void mul(int  x ,int y){
    int mul =x*y;
  cout<<mul<<endl;
}
void jek(int x ,int y){
    int jek =x/y;
    cout<<jek<<endl;}
    void jek(double x ,double y){
        double jek =x/y;
        cout<<jek<<endl;
    }
int main (){
    test(1,1);
    test(1.1,2.2);
    mul(2.3,2.4);
    mul(2,4);
    jek(4,2);
    jek(4.5,2.5);
}