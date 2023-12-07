
#include<iostream>
using namespace std;

float CalculateVolune(int n, float arr[], int Totdimensions) ;

int main(){
int n,  cLength ;
float arr[100] ;
cout<<"Enter the number of boxes: " ;
cin>> n ;
cout<<"Enter the dimensions of the boxes (length, width, height): " <<endl;
int Totdimensions = n*3 ;
for(int x = 0 ; x < Totdimensions ; x++){
  cin>>arr[x] ;
}
float res =CalculateVolune(n, arr, Totdimensions)  ;
cout<<"Total volume of all boxes: "<< res;



}
float CalculateVolune(int n, float arr[], int Totdimensions){

  float product = 0.0 ;
  for(int y = 0 ; y < Totdimensions ; y= y+3 ){

    product = product + (arr[y]*arr[y+1]*arr[y+2]) ;
  
  }
  return product;
}
