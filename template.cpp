#include<iostream>

using namespace std;

template<typename T> void gtln(T arr[], int n){
  for(int i = 0 ; i < n ; i++){
    for(int j = i+1 ; j<n ; j++){
        if(arr[i]<arr[j]) arr[i] = arr[j];
    }
      
  }
  
  cout<<arr[0];
}

int main(){
  int arr1[5] = {1,2,1,7,9}; char arr2[5] = {'p' , 'a' , 'r' , 's' , 'd'};
  gtln(arr1,5) ; gtln(arr2,5);
  system("pause");
}