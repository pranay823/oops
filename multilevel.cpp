#include<iostream>
using namespace std;

class grandparent{
protected : 
          
             char name[30];
             int birth;
       public :
             void get_input(){
             cout<<"enter the  grandparent name and the birth year ";
             cin>>name>>birth;
          }
   };
class parent : public grandparent{
 protected :
 char name1[30];
 int birth1;
   public :void get_input1(){
             cout<<"enter the parent name and the birth year ";
             cin>>name1>>birth1;
          }
          };
class child :public parent{
  protected :
            char name2[30];
            int birth2;
  public :
         void get_input2(){
             cout<<"enter the child  name and the birth year ";
             cin>>name2>>birth2;
          }      
        void difference(){
        cout<<"the age difference between grandparent and parent"<<birth-birth1<<endl;
         cout<<"the age difference between parent and child"<<birth1-birth2<<endl;
           cout<<"the age difference between grandparent and child"<<birth-birth2<<endl;
    }
};
 

int main(){
  child c;
  c.get_input();
  c.get_input1();
  c.get_input2();
  c.difference();
}

