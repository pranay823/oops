#include<iostream>
using namespace std;
class example{
           int a,b,c;
            int total;
           public:
                 example(int x ,int y ,int z){
                  a=x;
                  b=y;
                  c=z;
                }
             int add(){
              total =a+b+c;
             return total;
            }
};
  int main(){
             int a,b,c; 
             cout<<"enter the value of a ,b ,c";
             cin>>a>>b>>c;
            example e(a,b,c);
           int value = e.add();
           cout<<"the total is "<<value;
}
        
                         
