#include<iostream>
#include<vector>

using namespace std;

void ham()
{
   int a ;
   vector<int> my = { 1 , 2 ,3 , 4 };
  for(int i = 0 ; i<3 ; i++)
{ 
   cin>>a;
   my.push_back(a); 
}

   for( int i = 0 ; i<my.size() ; i++)
   { cout<<my[i];}

}

int main()
{
   
   ham();

   return 0;



}