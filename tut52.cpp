#include<iostream>
using namespace std;
class shopItem{
int id;
float price;
char favChar;
public: 
void setData(int a,float b,char c){
id=a;
price=b;
favChar=c;
}
void getData(){
    cout<<"The item id is "<<id
    <<" , price of item "<<price
    <<" and fav char for item access is "<<favChar<<endl;
}
};
int main(){
    int a;
    float b;
    char c;
    int size=3;
shopItem *ptr=new shopItem [size];
    shopItem *ptrTemp=ptr;
for (int  i = 0; i < size; i++)
{
    cout<<"Enter the id, price and fav char for the item "<<i+1<<endl;
    cin>>a>>b>>c;
      // (*ptr).setData(p, q);
    ptr->setData(a,b,c);
    ptr++;
}
for ( int i = 0; i < size; i++)
{
    cout<<"Item number "<<i+1<<endl;
   ptrTemp->getData();
   ptrTemp++;
}



return 0;
}