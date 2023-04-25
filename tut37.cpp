#include<iostream>
using namespace std;
class employee{
public:
int id;
int salary=34;
employee(){

}
employee(int inpid){
id=inpid;   


}

};
class programmer:public employee{
public:
int lang;
programmer(int inpid){
id=inpid;   
lang=123;
}
void display(){
    cout<<lang<<endl;
    cout<<id<<endl;
    cout<<salary<<endl;
}
};
int main(){
employee harry(1001),rohan(1002);
cout<<harry.salary<<endl;
cout<<rohan.salary<<endl;
programmer p1(10);
p1.display();
return 0;
}