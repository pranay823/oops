#include<iostream>
using namespace std;

template<class T>

class Sample{
       T a;
       T b;
       
       public : 
              Sample(T x , T y){
              a=x;
              b=y;
              }
              
              T add(){
              return a+b;
              }
              T sub(){
              return a-b;
              }
            
            T mul(){
              return a*b;
              }
            
            T div(){
              return a/b;
              }
            
           };
           
           int main(){
           Sample<int> ob(10,20);
           
        cout<<"the sum is  :"<<ob.add()<<endl;
          cout<<"the substraction is  :"<< ob.sub()<<endl;
          cout<<"the multiply  is  :"<< ob.mul()<<endl;
          cout<<"the division  is  :"<< ob.div()<<endl;
           
           Sample<char> ob1('A','B');
            cout<<"the sum is  :"<<ob1.add()<<endl;
          cout<<"the substraction is  :"<< ob1.sub()<<endl;
          cout<<"the multiply  is  :"<< ob1.mul()<<endl;
          cout<<"the division  is  :"<< ob1.div()<<endl;
           
           }
           
