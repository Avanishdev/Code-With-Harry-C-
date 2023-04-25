#include<iostream>
using namespace std;
class base1{
public: 
void greet(){
    cout<<"Hello world!";

}
};
class base2{
void greet(){
    cout<<"Hello world! How are you?";
    }

};
class derieved:public base1,public base2{
public:
void greet(){
    base1::greet();//ambiguity resolution
}
};
int main(){
derieved d;
d.greet();

return 0;
}