#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<deque>
using namespace std;


int main() {
    int n;
    cin>>n;
    vector<int> dq;

    for(int o=0 ;o<n; o++){
         int a;
        cin>>a;
        int rage;
        cin>>rage;
        for(int m = 0 ; m<a ; m++){
            int k;
            cin>>k;
            dq.push_back(k);
        }
            for(int j = (rage-1) ; j<a ; j++){
                int i = (j-rage);
                
                int max = dq[i];
                
                for(int m = 0 ; m< rage ;m++){
                    
                    if(dq[m+1]>max) max = dq[m+1];
                    
                    
                }
                cout<<max;  
            }
            cout<<""<<endl;
            dq.clear();
        
    }  
    return 0;
}
