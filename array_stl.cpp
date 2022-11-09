#include<iostream>
#include<array>
using namespace std;
int main(){

array<int,5>a;  //create stl array //
int size=a.size();                               //size of array //
cout<<"size is -->"<<size<<endl; 
for(int i=0;i<size;i++){               //for accessing elements //
    cout<<" "<<a[i];
}
cout<<endl;

cout<<"front element -->"<<a.front()<<endl;    // for accessing back and front elements //
cout<<"back element -->"<<a.back()<<endl;

cout<<"empty or not -->"<<a.empty()<<endl;

}

 