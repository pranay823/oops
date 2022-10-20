#include<iostream>
using namespace std;

class base{
     public :
           void display(){
          cout<<"hello bro "<<endl;
   }};
class derived : public base{
     public:
      void display(){
       cout<<"bye bro "<<endl;
   }};

int main(){
derived obj;
base *ptr;
ptr=&obj;
obj.display();
ptr-> display();
}

