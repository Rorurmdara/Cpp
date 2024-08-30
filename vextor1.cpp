#include<iostream>
#include<vector>
using namespace std;
int main (){
   vector<string>name={"dara", "ba", "ca", "da", "ea"};
   cout<<"original"<<endl;
   for(int i=0; i<name.size();i++){
   cout << name[i] << endl;
   }

   // name.push_back("daro");//add last
   // name.insert(name.begin(),"kab");//add to first
    name.pop_back();  //delete from last
    cout<<"after"<<endl;
    //name.clear();
    

    for(int i=0; i<name.size();i++){
        cout<<name[i]<<endl;
    }
}