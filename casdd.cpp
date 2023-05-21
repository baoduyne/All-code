#include<iostream>

using namespace std;

int main(){

int a[3];

int *ptr = a;
int sln;
for(int i = 0 ; i<3 ; i++){
    cin>>*(ptr+i);
}

for(int i = 0 ; i<3 ; i++){
    for(int j = i+1 ; j<3 ; j++){
        sln = *(ptr+i);
        if(*(ptr+j)>*(ptr+i)) {sln=*(ptr+j);}
    }
    
}
cout<<sln;



}