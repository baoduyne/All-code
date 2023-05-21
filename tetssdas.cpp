#include<iostream>

using namespace std;

int main()
{
    int soln;
    int sonn;
    int vitrisln,vitrisnn;
    
    int a;
    cin>>a;
    int so[a];
    
   
    
    for(int i = 0 ; i<=a; i++)
    {cin>>so[i];}
    
    for(int i = 0 ; i<=a ; i++)
    {
      for(int j = i + 1 ; j<=a ; j++)
      { soln=so[i]; vitrisln = i;
       sonn=so[j]; vitrisnn = j ; 
      if(so[j]>so[i]) soln=so[j];sonn = so[i]; vitrisln = j ; vitrisnn = i;
      
      }
        
    }
    cout<<soln<<" "<<vitrisln<<endl;
    cout<<sonn<<" "<<vitrisnn<<endl;
}