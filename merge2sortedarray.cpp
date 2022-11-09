#include<iostream>
 #include<vector>
 using namespace std;

 int arr1[5]={1,2,3,4,5};
 int arr2[4]={6,7,8,9};
 int arr3[9]={0};

 void merge(){
 int i=0,j=0,m=5,n=4,k=0;

 while(i<m && j<n){
    if(arr1[i]<arr2[j]){
      arr3[k]=arr1[i];
      i++;
      k++;
    }
    if(arr2[j]<arr1[i]){
       arr3[k]=arr2[j];
       j++;
       k++;
    }
 }

 while(i<m){
  arr3[k]=arr2[i];
  i++;
  k++;
 }
 while(j<n){
  arr3[k]=arr2[j];
  j++;
  k++;
 }

 cout<<"the array is :"<<endl;
 for(int l=0;l<9;l++){
  cout<<" "<<arr3[l];
 }      
 }
 
 int main(){
  merge();
 }