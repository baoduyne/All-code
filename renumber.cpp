#include<iostream>

using namespace std;

void run(int *PTR, int N){
    int capacity_1 = *PTR ;
    for(int i = 0 ; i < N ; i++){
        for(int j = i+1 ; j< N ;j++){
             if(*(PTR + j) > *(PTR + i)) {
                int cap = *(PTR +i);
                *(PTR + i ) = *(PTR + j);
                *(PTR + j ) = cap ;
             }
        }
        
    }
}

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i =0 ;i<n ; i++){
        cin>>a[i];
    }

    run(a,n);

    for(int i = 0 ; i<n ; i++){
        cout<<a[i];
    }

    system("pause");

}