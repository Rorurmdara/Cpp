#include<iostream>
using namespace std;
class Utils{
    private:
    
        public:
        double a;
        void sum(int x,int y){
          a = x + y;
          cout << "Sum: " << a << endl;
    

    }
    void dok(int x,int y){
        a=x-y;
        cout<<"dok: "<<a<<endl;}
        void kon(int x,int y){
            a=x*y;
            cout<<"kon: "<<a<<endl;}
        void kraj(int x,int y){
            a=x/y;
            cout<<"jek: "<<a<<endl;}

};
int main(){
    Utils obj;
    obj.sum(5, 10);
    Utils obj2;
    obj2.sum(4, 10);
    Utils obj3;
    obj3.dok(4,5);
    // directly initialize
    Utils obj4;
    obj4.kon(4,5);

// dynamic initialization
     //Utils* ptr = new Utils;
   // ptr->sum(10, 20);
    return 0;
}

    