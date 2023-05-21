#include<iostream>

using namespace std;

void sln(int *PTR,int N){
int SLN;
for(int i = 0 ; i<N;i++){
   for(int j = i+1 ; j<N;j++){
    SLN = *(PTR +i);
    if(*(PTR +j)>*(PTR +i)){ SLN = *(PTR+j);   }
   }
    (*PTR)=SLN;
}
}
int main(){
int n;
int a[n];
int *ptr =a;
int SLN;

for(int i = 0;i<n ; i++){
cin>>a[i];
}

sln(ptr,n);

cout<<*ptr;


}