#include<iostream>

using namespace std;

float a;






int main()
{
reback: 
 cout<<"nhap so km : "<<endl;


 cin>>a;

  if(a<=0)
  { cout<<"vui long nhap so km lon hon 0";
  goto reback;  }

    else if (a=1 )
    {
        cout<<"so tien phai tra la 5000vnd ";
    }
    else if (a>1 && a<=30 )
    {
        cout<<"so tien phai tra la "<<(a - 1)*4000<<"vnd"<<endl;
    }
    else if (a>30 )
    {
        cout<<"so tien phai tra la "<<(a-30)*3000 + 121000<<"vnd"<<endl;
    }


system("pause");
goto reback;


}
