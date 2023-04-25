#include<iostream>
using namespace std;
class shop{
    int item_id[50];
    int item_price[50];
    int counter;
    public:
    void initcounter(){counter=0;}
    void getprice();
    void displayprice();
};
void shop::getprice(void){
cout<<"Enter item id "<<counter+1<<endl;
cin>>item_id[counter];
cout<<"Enter item price "<<endl;
cin>>item_price[counter];
counter ++;
}
void shop::displayprice(void){
    for (int i = 0; i < counter; i++)
    {
      cout<<"The price of "<<item_id[i]<<" is "<<item_price[i]<<endl;
    }
    
}
int main(){
shop dukan;
dukan.initcounter();
dukan.getprice();
dukan.getprice();
dukan.getprice();
dukan.displayprice();



return 0;
}