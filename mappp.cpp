#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<map>
using namespace std;


int main() {
    int n ;
    cin>>n;
    string name;
    int mark;
    map<string,int> mp;
    for(int i = 0 ; i< n ; i++){
         int chose;
         cin>>chose;
         switch (chose)
         {
         case 1:
                 cin>>name;
                 cin>>mark;
                 mp[name] = mp[name] + mark;
            break;
         case 2 : 
         cin>>name;
         mp.erase(name);
         break;
         case 3 :
         cin>>name;
         cout<<mp[name]<<endl;
         break;
         default:
            break;
         }



    }
    return 0;
}