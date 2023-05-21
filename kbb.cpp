#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

int getrandom( int min , int max)
{
min +(int)(rand()*(max-min+1.0)/(1.0+RAND_MAX));
}

int main()

{
    srand((unsigned int)time(NULL));
    int n ;


    cout<<"1.KEO 2.BUA 3.BAO "<<endl;
    cin>>n;

    if(n == getrandom (1,3) )
    { 
        cout<<"WIN!!!"<<endl;
    }
    else
    {
        cout<<"LOSE!!!"<<endl;
    }




    system("pause");
    return main();
}