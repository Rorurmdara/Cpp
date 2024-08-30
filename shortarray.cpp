#include<iostream>
using namespace std;
int main (){
    int array[]={1,2,3,4,5,6,7,4,5,76,5,23,3,4,6,6};
    cout<<"Array before sorting: ";
    for(int i=0; i<16; i++){
        cout<<array[i]<<" ";
    }
    int n= sizeof(array)/sizeof(array[0]);
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(array[j]>array[j+1]){
                int tem=array[j];
                array[j]=array[j+1];
                array[j+1]=tem;
            }
    }
    
}
    cout<<"Array after sorting: ";
    for(int i=0; i<n; i++){
        cout<<array[i]<<" ";
    
}
}