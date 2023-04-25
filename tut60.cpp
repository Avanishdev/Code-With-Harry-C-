#include<iostream>
#include<fstream>
using namespace std;
int main(){
    /*
    Useful classes
    fstreambase
    ifstream-cin=reading a file
    ofstream-cout=writing a file
    Using Constructors with creating their objs
Opening a file-->ifstream obj_name("file_name")=obj_name>>var_nme;
Opening a file-->ofstream obj_name("file_name")=obj_name<<var_nme;
    // Opening files using constructor and reading it
    string str;
    ifstream in("sample.txt");//open() a file
    // in>>str;
    getline(in,str);// To get text present in the sample file in form of whole line
    cout<<str;
    */
       // Opening files using constructor and writing it
       string str="Selmon Bhoi";
       ofstream out("sample.txt");//o in ofstream stands for writing a file. // opening a file
       out<<str;


return 0;
}