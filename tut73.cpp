#include <iostream>
#include <map>
#include <string>
using namespace std;
int main()
{
    map<string, int> marksMap;
    marksMap["marry"] = 98;
    marksMap["varry"] = 8;
    marksMap["harry"] = 9;
    map<string,int>::iterator itr;
    // map<string, int>::reverse_iterator itr;
    // map<string,int>::const_reverse_iterator itr;
    marksMap.insert({{"Arry", 78}, {"Karry", 67}});
    marksMap.erase("Arry");

    for (itr  = marksMap.begin(); itr !=marksMap.end(); itr++)
    {
      cout<<(*itr).first<<" "<<(*itr).second<<endl;
    }
    // for (itr = marksMap.rbegin(); itr != marksMap.rend(); itr++)
    // {
    //     cout << (*itr).first << " " << (*itr).second << endl;
    // }
    // for (itr = marksMap.crbegin(); itr != marksMap.crend(); itr++)
    // {
    //     cout << (*itr).first << " " << (*itr).second << endl;
    // }
    cout << marksMap.size() << endl;
    cout << marksMap.max_size() << endl;
    cout << marksMap.empty() << endl;
    return 0;
}