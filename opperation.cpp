#include<iostream>
using namespace std;
#include<string.h>
int main(){
    //note this 
    //int y=10;
    //int b =5;
    //b=y++;
    //if b=y++ b will still 10 course note plus one yet
    //if b=++y b will be 11 cours it plas 1 to 10 
    //cout<<"y="<<y<<endl;
    //cout<<"b="<<b<<endl;
//   int age ;
//   int nv;
 // cout<<"Enter your age :";cin>>age;
//   bool result =age >=18;
//   nv=18-age;
//   if (result){
//     cout<<"you can vote";
//   } else{
//     cout<<"you can not vote!!! you have to wait  "<<nv;
//   }
// }
// int op;
// cout<<"-------------| menu|-------------"<<endl;
// cout<<"1.add product "<<endl;
// cout<<"2. remove product "<<endl;
// cout<<"3. view product"<<endl;
// cout<<"0.exoit"<<endl;
// cout<<"_________________________________"<<endl;
// cout <<" Enter option ";cin>>op;

// if (op!=0){
//     cout<<" system continue working ......."<<endl;

// } else {
//     cout<<"system exit"<<endl;
// }}
int age , nv;
string ny;
cout<<"Enter age :";cin>>age ;
cout<<"Enter nationality :";cin>>ny;
cout<<"_____________________________"<<endl;
bool con1 =(age >=18);
bool con2 = !(ny==" cambo "||ny=="CAMBO"||ny=="Cambo");
nv=18-age;
if(con1&&con2){
    cout<<"you can drive "<<endl;
        if (age<18){
            cout<<"you can not drive you need to wait"<<nv<<endl;
        }
    
}  else {
    cout<<"you can not drive you need to wait "<<nv<<"years more"<<endl;
}
}