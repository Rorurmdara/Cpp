#include<iostream>
using namespace std;
int main (){
    int numberlist;
    cout << "Enter the number of students in the list: ";
    cin >> numberlist;
    float avglist[numberlist];
    string namelist[numberlist];
    for (int i = 0; i < numberlist; i++){
        cout << "Enter name  of student " << i+1 << ": ";
        cin >> namelist[i];
        cout<<"Enter avg score of student " << i+1 <<":";
        cin >> avglist[i];
    }
    system("cls");
    for (int i = 0; i < numberlist; i++){
        cout << "Name: " << namelist[i] << 
        endl;
        cout<<" Average Score: " << avglist[i] << endl;
        cout<<"_______________________________________"<<endl;
    }
}
