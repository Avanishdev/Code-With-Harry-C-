#include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"Enter Your Age:"<<endl;
    cin>>age;
    // if((age<18)&&(age>0))
    // {
    //     cout<<"Hello Kid! Go and finish your milk first."<<endl;
    // }
    // else if(age==18){
    //     cout<<"Better LUck next time dude!"<<endl;
    // }
    // else if(age>1){
    //     cout<<"Get born buddy!"<<endl;
    // }
    // else{
    //     cout<<"You can come to the party"<<endl;
    // }
    switch (age)
    {
    case 18:
        cout<<"Badhai Ho!"<<endl;
        break;
    
    case 23:
        cout<<"Badhai Ho! 23yaa"<<endl;
        break;
    
    case 88:
        cout<<"Badhai Ho! Lucky 88."<<endl;
        break;
    
    default:
    cout<<"Nothing Especial"<<endl;
        break;
    }
    return 0;
}