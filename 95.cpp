#include<iostream>

using namespace std;


int tong(int so[],int n)
{
    int tong;
  for(int i = 0 ; i<= n ; i++){tong = tong + so[i];}



return tong;

}

int main()
{
int N,TONG;
int SO[N];
cin>>N;
for(int i = 0 ; i <= N;i++){cin>>SO[i];}
TONG = tong(SO,N);



}