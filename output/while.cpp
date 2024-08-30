#include<iostream>
using namespace std;
void menu(){
    cout << "1. add" << endl;
    cout << "2. subtract" << endl;
    cout << "3. multiply" << endl;
    cout << "0. Exit" << endl;
    
}
float add(float x, float y){

    return x + y;
}
float dele(float x, float y){
    
    return x - y;
}
float mol(float x, float y){
    return x * y;
}
int main(){
    menu();
    int op;
    cout<<"enter option";cin >> op;
    
    while (true){
    if(op ==0){
        break;
    }
    if(op>=1&&op<=3){
        cout << "Enter x: ";
            cin >> x;
            cout << "Enter y: ";
            cin >> y;
    
    switch (op)
    {
    case 1:
        add();
        break;
    case 2:
        dele();
        break;
    case 3:
        mol();
        break;
    default:
    cout<<"Invalid option";
        break;
    }

    }
    
    
    }

}