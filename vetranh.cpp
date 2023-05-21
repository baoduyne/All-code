#include<iostream>

using namespace std;


void voi()
{
   for(int i = 0 ; i<=10 ;i++)
   {cout<<"   " ;}

}

void chunhat(int chieudai , int chieurong)
{
  int chuvi = (chieudai + chieurong)*2;
  int dientich = chieudai*chieurong;


  cout<<"chu vi hinh chu nhat chieu dai "<<chieudai<<" chieu rong "<<chieurong<<" la : " ;
  cout<<chuvi<<endl;
  cout<<"dien tich hinh chu nhat chieu dai "<<chieudai<<" chieu rong "<<chieurong<<" la : ";
  cout<<dientich<<endl;
  cout<<" "<<endl;
  cout<<" "<<endl;

for (int i = 0 ; i<=10+(chieudai/2) ; i++)
{ cout<<"   " ;}
cout<<"[ Hinh minh hoa ]"<<endl;

voi();
for(int i = 0 ; i<=chieudai ; i++)
{ cout<<" * * ";  }
cout<<" "<<endl;

for(int i = 0 ; i<=chieurong ; i++)
{ voi();

cout<<"*";
for(int j = 0 ; j<=chieudai ; j++)
{ cout<<"     "; }
cout<<"*"<<endl;
}

voi();
for(int i = 0 ; i<=chieudai ; i++)
{ cout<<" * * ";  }
cout<<" "<<endl;




}

int main()
{
    int A,B;
  cout<<"A"<<endl;
  cin>>A;
  cout<<"B"<<endl;
  cin>>B;
  chunhat(A,B);


}