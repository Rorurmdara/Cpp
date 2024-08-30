#include<iostream>
using namespace std;
int main (){
    int n[5][2]={{1,2},{3,5},{6,4},{1,3},{2,4}};
    for(int i =0;i<sizeof(n)/sizeof(n[0]);i++){
        for(int j=0;j<sizeof(n[0])/sizeof(n[0][0]);j++){
            cout<<n[i][j];
        }
        cout<<""<<endl;
    }

}