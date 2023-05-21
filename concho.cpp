#include<iostream>

using namespace std;

void sln(int *PTR){

int SLN;


for(int i = 0 ; i<= 0 ; i++){
    SLN = *(PTR+i);
    if(*(PTR+i+1)>*(PTR+i)) SLN = *(PTR+i+1);
}
 *PTR = SLN;
}


int main(){
int n;
int a[n];
cout<<"so luong";
cin>>n;
int solon;

int *ptr = a;
for(int i = 0 ; i<=n ; i++){
  cin>>*(ptr +i);
}
solon = sln(ptr);
cout<<solon;
}