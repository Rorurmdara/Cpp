#include <iostream>
using namespace std;
int main(){
    int array [] = {1,3,4,5,5,6,67,7,8,7,6,5,54,4,5,6,6};
    int n = sizeof(array)/sizeof(array[0]);
    for(int i = 0; i < n;i++){
        cout << array[i] <<",";
        
    }
    int e;
    cout<<"\nEnter element that you want to delete:";cin >> e;
    for(int i = 0; i < n; i++){
        if(array[i] == e){
            for(int j = i; j < n-1; j++){
                array[j] = array[j+1];
            }
            n--;
            i--;
        }
    }
    cout<<"\nArray after deleting element: "<<e<<": ";
    for(int i = 0; i < n; i++){
        cout<<array[i]<<",";
}

}