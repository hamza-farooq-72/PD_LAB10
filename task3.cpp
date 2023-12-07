#include<iostream>
using namespace std;

bool IsRepeatinfCycle(int n, int arr[], int cLength) ;

int main(){
int n, arr[100] ,cLength ;
cout<<"Enter the length of the array: " ;
cin>> n ;
cout<<"Enter the elements of the array: " <<endl;
for(int x = 0 ; x < n ; x++){
  cin>>arr[x] ;
}
cout<<"Enter the length of the cycle: ";
cin >> cLength ;

bool res =IsRepeatinfCycle(n, arr, cLength)  ;
cout<<"Output: " << res ;

}
bool IsRepeatinfCycle(int n, int arr[], int cLength){
  bool alpha = true ;
  int idx = 0 ;
  for(int y = cLength ; y < n ; y++ ){

    if(cLength > n){
      return alpha ;
      break;
    }
    else if(arr[y] == arr[idx]){
      idx++ ;
    }
    else{
      return false ;
      break ;
    }
  }
  return alpha ;
}
