#include<iostream>
using namespace std;
class example{
              int id;
              int marks;
              public:
                     example(){
                         cout<<"enter the id :";  
                         cin>>id;
                         cout<<"enter the marks :";
                         cin>>marks;
                       }
                    void display(){
                      cout<<"the id is "<<id<<endl;
                      cout<<"the marks is "<<marks<<endl;
                   }


};
     int main(){
           example e;
          e.display();
       }
