#include<iostream>
#include<cmath>

using namespace std;

int main ()
{
   int a,b;
   string n[a][b];
   cin>>a>>b;

   for(int i = 0 ; i<a ; i++ )
    { cin>>n[i][b];}

    for(int i = 0 ; i<b ; i++)
    {cin>>n[a][i];}

  int sum = 0 ;
   for(int i = 0 ; i<a ; i++ )
   {for (int j = 0 ; j<b ; j++) 
   {  sum = sum + n[i][j];   }
   }
   cout<<sum;




}