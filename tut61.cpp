#include<iostream>
#include<fstream>
using namespace std;
int main(){
    string str="This is sample file for tut 60 in our c++ tutorial";
ofstream out("sample.txt");
out<<str;
out.close();
ifstream in("sample.txt");
// in>>str;
getline(in,str);
cout<<str;

return 0;
}