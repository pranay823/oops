#include<iostream>
using namespace std;

class student{
protected : 
             int id;
             char name[30];
         };

class marks : public student{
  protected :
            float oops,de,se;
     public:  
           void get_input(){
                cout<<"enter the id and name ";
                cin>>id>>name;
                cout<<"enter the marks of opps , se and de :"<<endl;
                cin>>oops>>de>>se;
              }
          void total_avg(){
               cout<<"the total marks is "<<oops+de+se;
               cout<<"the avg is "<<(oops+de+se)/3.0;
           }
};

int main(){
  marks m;
  m.get_input();
  m.total_avg();
}
