#include<iostream>
#include<stdlib.h>
using namespace std;

class student{
 protected :
            int id;
            char name[30];
           int atnd;
public:
       void get_input(){
           cout<<"enter the id /t name /t attendance marks \n";
          cin>>id>>name>>atnd;
      }
};
class test1 : virtual public student{
 
 protected :
          int obj,sub;
 public :
         void get_input1(){
         cout<<"enter the obj and sub marks \n"<<endl;
         cin>>obj>>sub;
        }
};
class test2 : virtual public student{
 
 protected :
          int obj1,sub1;
 public :
         void get_input2(){
         cout<<"enter the obj and sub marks \n"<<endl;
         cin>>obj1>>sub1;
        }
};


class result : public test1 , public test2{
 private:
        int total;
        int max1 , max2;
 public:
       void total1(){
       max1=max(obj1,obj);
       max2=max(sub,sub1);
      total=max1+max2+atnd;
      cout<<"the total marks is \n"<<total;
}
};
int main(){
   result r;
   r.get_input();
   r.get_input1();
   r.get_input2();
   r.total1();
}
      

  
       
           

 
