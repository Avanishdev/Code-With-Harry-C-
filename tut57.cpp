#include<iostream>
using namespace std;
class CWH{
    protected:
    string title;
float ratings;
public:
CWH(string s,float r){
ratings=r;
title=s;
}
 virtual void display(){}
};
class CWHVideo:public CWH{
float videolen;
public:
CWHVideo(string s,float r, float vl):CWH(s,r){
    videolen=vl;
}
void display(){
    cout<<"The title of the video is "<<title<<endl;
    cout<<"The ratings for the video is "<<ratings<<" out of 5"<<endl;
    cout<<"The videolength for the video is "<<videolen<<" minutes"<<endl;

}
};
class CWHText:public CWH{
int words;
public:
CWHText(string s,float r, int w):CWH(s,r){
    words=w;
}
void display(){
     cout<<"This is an amazing text tutorial with title "<<title<<endl;
      cout<<"Ratings of this text tutorial: "<<ratings<<" out of 5 stars"<<endl;
      cout<<"No of words in this text tutorial is: "<<words<<" words"<<endl;

}
};


int main(){
    // CWH obj("Web dev",4.5);
    // CWHVideo obj1("Web dev",4.5,4.26);
    // CWHText obj2("Web dev",4.5,344);
    int words;
    float ratings,videoLen;
    string title;
     // for Code With Harry Video
    title="Web Dev Bootcamp";
    ratings=4.9;
    videoLen=4.26;
    CWHVideo obj1(title,ratings,videoLen);
    // obj1.display();
     // for Code With Harry Text 
    title="Web Dev Bootcamp Text";
    ratings=4.3;
    words=426;
    CWHText obj2(title,ratings,words);
    // obj2.display();

CWH *ptr[2];//using pointers
ptr[0]=&obj1;
ptr[1]=&obj2;
ptr[0]->display();
ptr[1]->display();

return 0;
}