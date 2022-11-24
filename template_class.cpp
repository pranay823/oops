#include<iostream>
using namespace std;

template<class t1, class t2>

class sample{
       t1 a;
       t2 b;
       
       public : 
              sample(t1 x , t2 y){
              a=x;
              b=y;
              }
              
              t2 add(){
              return a+b;
              }
            
           
           };
           
           int main(){
           sample<int,int> ob(10,20);
           sample<int,float> ob2(10,20.2f);
           
        cout<<"the sum is  :"<<ob.add();
          cout<<"the sum is  :"<< ob2.add();
           
           
           }
