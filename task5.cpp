


#include<iostream>
using namespace std;

void AscendingArray( float arr[]) ;

int main(){
int n,  cLength ;
float arr[10] ;
cout<<"Enter the weights of the 10 packages: " <<endl;
for(int x = 0 ; x < 10 ; x++){
  cin>>arr[x] ;
}

 AscendingArray( arr)  ;



}

void AscendingArray( float arr[]){
 int nextNum  ; 
  cout<<"Sorted array in ascending order: [" ;
  for(int z = 0 ; z < 10 ; z++ ){

  for(int y = 0 ; y < 9 ; y++ ){

    if(arr[y+1]<arr[y]){
       nextNum =arr[y] ;
       arr[y] = arr[y+1];
       arr[y+1] =  nextNum; 
    
    }
  }
  }
  for(int a = 0; a< 10; a++){

  cout<<arr[a];
  
  if(a < 9){
    cout<<", " ;
  }

}


cout<<"]" ;
}

