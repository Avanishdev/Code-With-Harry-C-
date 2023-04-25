#include<iostream>
using namespace std;
class student{
    protected:
int roll_num;
public:
void set_roll_num(int a){
roll_num=a;
}
void display(){
    cout<<"Your roll no is: "<<roll_num<<endl;
}
};
class exam:virtual public student{
    protected:
float maths;
float physics;
public:
void set_marks(float x,float y){
maths=x;
physics=y;
}
void display(){
    cout<<"Your marks are: "<<endl
    <<"For maths: "<<maths<<endl
    <<"For physics: "<<physics<<endl;
}
};
class sports:public virtual student{
    protected:
int score;
public:
void set_score(int a){
score=a;
}
void display(){
    cout<<"Your score in sports is: "<<score<<endl;
} 
};
class result:public exam,public sports{
float total;
public: 

void display(){
     total=maths+physics+score;
  student::display();//ambiguity resolution
  exam::display();
  sports::display();
    cout<<"Your result is: "<<total<<endl;
}
};

int main(){
result harry;
harry.set_roll_num(1001);
harry.set_marks(78.0,72.34);
harry.set_score(9);
harry.display();

return 0;
}