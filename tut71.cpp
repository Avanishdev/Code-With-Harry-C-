#include <iostream>
#include <vector>
using namespace std;
void display(vector<int> v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v.at(i) << " ";
        // cout << v[i] << " ";
    }
}

int main()
{

    vector<int> vec;
    int count, element;

    cout << "Enter the size of a vector: " << endl;
    cin >> count;

    for (int i = 0; i < count; i++)
    {
        cout << "Enter the element to add in the vector: ";
        cin >> element;

        vec.push_back(element);
    }
    display(vec);
    // vec.pop_back();//display(vec);

    cout << endl;

    vector<int>::iterator iter = vec.begin();
    vec.insert(iter + 1, 66);
    // display(vec);

    vector<int>::iterator iter1 = vec.begin();
    vector<int>::iterator iter2 = vec.end();
    vec.erase(iter1, iter2);
    // display(vec);

    vector<int> vec1;       // zero length integer vector
    vector<int> vec2(4);    // 4-element  int vector
    vector<int> vec3(vec2); // 4-element int vector from vec2
    vector<int> vec4(6, 3); // 6-element vector of 3s

    /*     vector<int> vec1;      //zero length integer vector
     vector<char> vec2(4);  //4-element character vector
     vector<char> vec3(vec2);//4-element character vector from vec2
     vector<int> vec4(6,3); //6-element vector of 3s
*/
    display(vec4);
    return 0;
}