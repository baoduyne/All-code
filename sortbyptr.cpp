#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

struct num{
int n ;
vector<int> vt;
int operator < (num& n_){
   return n_ < n_ ;
}
};

num* set(int N){
    num* ptr = new num;
    for (int i = 0 ; i< N ; i++ ){
        cin>>ptr->n;
        ptr->vt.push_back(ptr->n);
    }
    return ptr;
}

void run(num* n_){
    sort(n_->vt.begin() , n_->vt.end());
    for(int i = 0 ; i < n_->vt.size() ; i++){
        cout<<n_->vt[i];
    }
    cout<<""<<endl;
    cout<<n_->vt[n_->vt.size()-1]<<endl;
    cout<<n_->vt[0]<<endl;
}

int main() {
    num *n_;
int nu;
cin>>nu;
n_ = set(nu);
run(n_);
system("pause");
return 0;

}
