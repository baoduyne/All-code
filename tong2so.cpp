#include<iostream>

using namespace std;

int main ()
{
     
     int a,b;
    cout<<"nhap 2 so a va b"<<endl;
    cout<<"a=";
    cin>>a;
    cout<<"b=";
    cin>>b;
    if( a < 0 )
    {
     cout<<"a phai la so nguyen duong";
     return 0;
    }
    int tong = (a + b );
    cout<<"tong hai so a va b ="<<tong<<endl;

    system("pause");
    return 0;

}