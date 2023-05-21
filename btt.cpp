#include <iostream>
#include <fstream>

using namespace std;

int main()
{
  fstream file;
  file.open("tex.txt" , ios::in|ios::out);
  string a;


  file.seekg(0,ios::beg);
  file>>a;
  fstream in("tex.txt");
  cout<<a;
  
  

return 0;







}



