#include<iostream>

using namespace std;

void dao(int *ptr,int n){
    for(int i = n ; i>0 ; i++){
        for(int j = 0 ; j<n ;j++){
            int reback;
            reback = *(ptr+i);
            *(ptr+i) = *(ptr+j);
            *(ptr+j) = reback;
        }
    }
}

int main(){
    int N;
    cin>>N;
    int a[N];
  
    for(int i=0 ; i<N;i++){
        cin>>a[i];
    }
    for(int i = 0 ; i<N;i++){
        cout<<a[i];
    }

    dao(a,N);
    for(int i = 0 ; i<N;i++){
        cout<<a[i];
    }
}