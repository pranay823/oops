#include<iostream>
using namespace std;
class sample{
   int a,b;
   public:
         sample(){
          a=0;
         b=0;       
 }
         sample(int x,int y){
         a=x;
         b=y;
       }
        sample(sample &s){
         a=s.a;
         b=s.b;
        }
       void display(){
       cout<<"the value of a"<<a<<endl<<"the value of b"<<b<<endl;
}
 };
int main(){
       int a,b;
        cout<<"enter the value of a ,b ";
        cin>>a>>b;
       sample e1;
       e1.display();
       sample e2(a,b);
       e2.display();
       sample e3(e2);
       e3.display();
      }
       
