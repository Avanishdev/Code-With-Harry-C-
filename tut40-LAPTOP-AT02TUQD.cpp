#include<iostream>
using namespace std;
class student{
 protected:
 int roll_number;
 public:
 void set_rollnum(int);
 void get_rollnum();
};
void student::set_rollnum(int x){
roll_number=x;
}
void student::get_rollnum(){
  cout << "The roll number is " << roll_number << endl;

}
class exam:public student{
protected:
float maths;
float physics;
public:
void set_marks(float,float);
void get_marks();
};
void exam::set_marks(float m1,float m2){
maths=m1;
physics=m2;
}
void exam::get_marks(){
  cout << "The marks obtained in maths are: " << maths << endl;
    cout << "The marks obtained in physics are: " << physics << endl;
}
class result:public exam{
protected:
float result_marks;
public:

void display(){
get_rollnum();
get_marks();
   cout << "Your result is " << (maths + physics) / 2 << "%" << endl;
}
};
int main(){
result r1;
r1.set_rollnum(1001);
r1.set_marks(92.0,94.0);
r1.display();

return 0;
}