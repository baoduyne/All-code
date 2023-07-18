#include<iostream>
#include<fstream>

using namespace std;
int main(){
fstream file;
file.open("test.txt",ios::app);
       file<<"test";
file.close();


}