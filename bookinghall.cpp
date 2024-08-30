#include <iostream>
#include<sstream>
using namespace std;
void show(){
    cout<<"======|screen|======="<<endl;
    cout<<"1.make hall"<<endl;
    cout<<"2.list of hall"<<endl;
    cout<<"3.booking "<<endl;
    cout<<"0.exit"<<endl;
}
// 1 make  hall 
int row,col;
void setUpHall(const int r, const int c){
    row = r;
    col = c;
    string ha[r][c];
    char k = 'A';
    for(int i=0; i<r; i++){
        stringstream z;   z<<(i+1);
        string sub = "-";
        for(int j=0; j<c; j++,k++){
            ha[i][j] = k + sub + z.str() + ": AV";
        }
    }
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            cout<<" | "<<ha[i][j]<<" ";
        }
        cout<<" | \n";
    }
}

void choice(){
    cout<<"1/ Set up hall\n";
    cout<<"2/ List all hall\n";
    cout<<"3/ Start Booking\n";
    cout<<"0/ exit\n";
}
void ui(){
    cout<<"=================================\n";
    cout<<"           Hall Booking          \n";
    cout<<"=================================\n";
    choice();
    // 
    int ch;
    cout<<"[+] Insert option: ";cin>>ch;
    switch(ch){
        case 1:{
            int r, c;
            cout<<"Insert row: ";cin>>r;
            cout<<"Insert column: ";cin>>c;
            cout<<"Setup Hall"<<endl;
            setUpHall(r,c);
            break;
        }
        case 2:{
            cout<<"List all hall"<<endl;
            setUpHall(row, col);
            break;
        }
        default:{
            cout<<"Invalid option!"<<endl;
            break;
        }
    }
}


    

    
int main (){
   do{
     ui();
   }while(ch!=0)
    }


