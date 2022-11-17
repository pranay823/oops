#include<iostream>
using namespace std;

class test{
      int real;
      int imag;
      
      public :
           void get_data(){
             cout<<"enter the real and imag number   :";
             cin>>real>>imag;
             }
             
           void display(){
            cout<<" "<<real<<"+"<<"i"<<imag<<endl;
             }
           void operator =(test c1){
           real = c1.real;
           imag = c1.imag;
           }
        };
      
      int main(){
         test c1,c2;
         c2.get_data();
         c1=c2;
         c1.display();
         }
         


















