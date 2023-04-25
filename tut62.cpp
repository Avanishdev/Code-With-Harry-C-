#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main(){
    string name;
//     cout<<"Enter your name: "<<endl;
//     cin>>name;
// ofstream out;//writing a file
// out.open("sample.txt");
// out<<name;
// out.close();
ifstream in;//reading a file
in.open("sample.txt");
// in>>name;
// cout<<name<<endl;
while(in.eof()==0){
            // using getline to fill the whole line in name
// in>>name;
getline(in,name);
cout<<name<<endl;
}in.close();

return 0;
}