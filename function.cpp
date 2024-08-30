#include<iostream>
using namespace std;
void prinnttital();
void printend();
// to analy the score
float pass (float math,float khmer,float english){
return avg(math,khmer,english);
      if(avg>=90){
        cout<<" you got A"<<endl;
      } if (avg>=80){
          cout<<" you got B"<<endl;
      } if (avg>=70){
        cout<<"you got C"<<endl;
      } else {
        cout<<" you fall"<<endl;
      }

}
//avg
float avg(float math,float khmer ,float english);

//sum 
float total(float math ,float khmer,float english);
//print information

void information(float math ,float khmer ,float english){
cout<<"________________|| student score||___________________"<<endl;
cout<<" math :"<<math<<endl;
cout<<" khmer :"<<khmer <<endl;
cout<<" english :"<<english<<endl;
cout<<" ____________________________________________________"<<endl;
float totalscore= total( math ,khmer, english);
float avgend=avg(math,khmer ,english);
cout<<" your total is  :"<<totalscore<<endl;
cout<<"your avg :" <<avgend<<endl;

}
     
int main (){
    float math;
    float khmer;
    float english;
    string name;
    prinnttital();
    cout<<" Enter your name :";getline(cin,name);
    cout<<"Enter your math score:";cin>>math;
    cout<<"enter your khmer score:";cin>>khmer ;
    cout<<"enter your english score:";cin>>english;
    information( math , khmer , english);
     pass ( math, khmer, english);

}


float total(float math,float khmer ,float english){
    return math+khmer+english;
   }
void prinnttital(){
    cout<<"____________________||student information||_______________________"<<endl;
}
void printend(){
    cout<<"__________________________________________________________________"<<endl;
}
float avg( float math, float khmer ,float english){
    return total(math,khmer,english)/3;
}
 float pass (float math,float khmer,float english){
      return avg(math,khmer,english);
      if(>=90){
        cout<<" you got A"<<endl;
      } if (>=80){
          cout<<" you got B"<<endl;
      } if (>=70){
        cout<<"you got C"<<endl;
      } else {
        cout<<" you fall"<<endl;
      }
}