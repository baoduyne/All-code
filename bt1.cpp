#include<iostream>

using namespace std;

void find(int *ptr,int a[]){
int SLN;

for(int i = 0 ; i<3 ;i++){     
        if(a[i+1]>a[i]) SLN = a[i+1];
        else SLN = a[i];
    } 


(*ptr)=SLN;
}

int main(){
int sln = 0 ;
int A[3];

for(int i = 0 ; i<3 ; i++){
    cin>>A[i];
}

find(&sln,A);

cout<<sln;
}