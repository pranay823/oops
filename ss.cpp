// write a c++ program to implement runtime polymorphism to caluclate are of area of rect and square //

#include<iostream>
using namespace std;

class base{

protected : int a ,b;

public :  
        base(){
         a=4;
        b=5;
}
          virtual void area(){
          cout<<"the area of square \n"<<a*a;
   }
};

class derived : public base{
 
 public:
       void area(){
         cout<<"the area of rectangle \n"<<a*b;
      }
};
 

int main(){
base *ptr;
derived d;
ptr=&d;
d.area();
}
