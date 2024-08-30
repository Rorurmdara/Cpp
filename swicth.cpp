#include<iostream>
using namespace std;
void menu(){
    cout<<"_________|manu|__________"<<endl;
    cout <<"1.buy pizza"<<endl;
    cout<<" 2.buy drink"<<endl;
    cout<<" 3.buy pizza and drink"<<endl;
    cout<<" 4.exit"<<endl;
}
int main (){
    int op;
    system("cls");
    menu();
    cout<<" Enter your option :";cin>>op;
    cout<<"_____________________"<<endl;
    switch (op)
    {
    case 1:
        cout<<"you bought a pizza"<<endl;
        break;
    case 2:
    cout<<" you bought a drink" <<endl;   
        break;
    case 3:
    cout <<"you bought both"<<endl;
    case 4:
     cout<<" have a good day !"<<endl;
    default:
        cout<<"I have  only 3  option "<<endl;
        break;
    }
}