#include<iostream>

using namespace std;


int sonn(int so[],int n)
{
    int sonn;
     for(int i = 0 ; i<= n ; i++)
     {for(int j = i + 1 ; j<=n;j++)
     {  sonn = so[i];
        if (so[j]<so[i]) sonn=so[j];
      }
     }

return sonn;

}


int main()
{
int N;
cin>>N;
int SO[N];
int SONN;

 for(int i = 0 ; i<= N ; i++){cin>>SO[i];}

 SONN = sonn(SO,N);

 cout<<SONN;



}