#include<iostream>

using namespace std;

int sln(int *ptr){
int sln;
  for(int i = 0 ; i<= 2 ; i++){
   sln = *(ptr + i);
   if(*(ptr + i)<*(ptr + i + 1)  ) sln = *(ptr + i + 1 );
   return sln;
  }



}

int main(){
int a[2];
int *PTR = a ;

int SLN;
for(int i = 0 ; i<=2 ; i++){
  cin>>a[i];
}

SLN = sln(PTR);

cout<<SLN;



}