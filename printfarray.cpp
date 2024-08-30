#include<iostream>
using namespace std;
int main (){
    int  name[]={1,3,4,5,6,7,9,8,6,5,4,3,3,32};
    int n;
    n=sizeof(name)/sizeof(name[0]);
    for(int i=0; i<n; i++){
        cout << name[i] <<" ";
    }
    for(int i=0; i<n; i++){
        for( int j=0;j<n-1;j++){
            if (name[j]>name[j+1]){
                int tem=name[j];
                name[j]=name[j+1];
                name[j+1]=tem;
                
            }

        }


    }
    cout<<"\nSorted Array: ";
    for(int i=0; i<n; i++){
        cout << name[i] <<" ";
    
}
}
