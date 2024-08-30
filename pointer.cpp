#include <iostream>
using namespace std;
int main(){
   // int i ;
   // i=10;
   // int *p=&i;
   // cout<<*p<<endl;//value
   // cout<<i<<endl;//value
    //cout<<p<<endl;//address i
    //<<&i<<endl;//addres i
//cout<<&p<<endl;//address of pointer
   //  *p=100;
   //// cout<<*p<<endl;//value 100
    int num[]={12,3,4,45,5,6,6,6};
    int *p=&num;
    for(int i=0;i<5;i++){
    cout<<*(p+i)<<endl;
    }
    return 0;
    
}