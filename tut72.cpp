#include<iostream>
#include<list>
using namespace std;
void display(list<int> &lst){
    list<int>:: iterator it;
    for (it  = lst.begin(); it!= lst.end(); it++)
    {
       cout<<*it<<" ";
    }
    cout<<endl;
}
int main(){
list<int> list1;

list1.push_back(5);
list1.push_back(3);
list1.push_back(12);
list1.push_back(1);
list1.push_back(45);
// list1.push_front(36);
// list1.pop_back();
// list1.pop_front();
// list1.remove(12);



list<int> list2(3);
list<int> ::iterator iter;
iter=list2.begin();//Pointing in the begining of list2

*iter=445;
cout<<*iter<<" ";
iter++;

*iter=167;
cout<<*iter<<" ";
iter++;

*iter=234;
cout<<*iter<<" ";
iter++;
cout<<endl;

list2.emplace_back(3);//two 3's in output bcoz size of list2is increased!
display(list2);


list1.sort();
list2.sort();

// list1.merge(list2);


display(list1);

cout<<list1.size()<<endl;
cout<<list2.size()<<endl;

return 0;
}