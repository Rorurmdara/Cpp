#include<iostream>
using namespace std;
    class util{
         private:
            float number;
         public:
         float t;

          int x ,y ;
          int change;
          int n;
            void sum(float number){
                this->number = number;
                cout << "Sum of number and x and y is: " <<  x + y << endl;
            }
            void square(float number){
                this->number = number;
                t=x*x;
                cout << "Square of number is: " << t<< endl;
            }
            void echange(float number){
                this->number = number;
                n=change/4000;  }
            void input(float number){
                this->number = number;
                cout << "Enter x and y: ";cin>>x,cin>>y;
                cout<<"reil:";cin>>change;
                
            }
            void output(float number){
                this->number = number;
                cout<<" sum :"<<x+y<<endl;
                cout<<" square :" <<t<<endl;
                
            }
            void display (float number){
                this->number = number;
                cout<<" EXCHANGE :"<<n<<endl;
            }


    };
int main (){
    util u;
    u.input(1000);
    u.square(1000);
    u.sum(1000);
    u.output(1000);
    u.echange(1000);
    u.display(1000);
   
    
    return 0;

}