#include<iostream>

using namespace std;

int xuly(char *A){

int sln;

for(int i = 0 ; i<= sizeof(A) ; i++){
  for(int j = 0 ; j<=sizeof(A); j ++){
   sln = *(A+i);
   if(*(A+j)>*(A+i)){ sln = *(A+j);  }

return sln;
  }
}

}

int main(){

    int n ; 
cin>> n ; 
char a[n];

for(int i = 0 ; i <=n ; i ++){  cin>>a[i];  }

cout<<a;
char *ptr;
ptr = a ;

int SLN = xuly(ptr);

cout<<SLN;
}