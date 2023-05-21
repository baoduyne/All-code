#include<iostream>

using namespace std;

void change(char a[] , int n)
{
  for(int i = 0 ; i <= n ; i++)
  
  { a[i] = a[i] - 32 ;  }

}

int main(){

int N ;
cin>>N;
char A[N];

cin>>A;

change(A,N);

cout<<A;




}