#include<iostream>

using namespace std;


int main(){
int a[5] = {3,1,7,6,9 };

for(int i = 0; i<5 ; ++i){
    int max = i;
    for(int j = i+1 ; j<5 ; ++j){
         if(a[max]<a[j]) max = j ;
    }
    if( max != i ){
        int moc = a[i];
        a[i] = a[max];
        a[max] = moc;
    }
}

for(int i =0 ; i<5 ; ++i) cout<<a[i];
    system("pause");
    return 0;
}