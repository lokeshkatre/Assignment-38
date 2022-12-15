#include <iostream>
#include <list>
using namespace std;

int main()
{
    list<int> l{2, 34,5, 4, 64, 3};
    l.push_back(43);
    l.push_front(34);

    l.remove(34);
    list<int>::iterator it;
    for (it = l.begin(); it != l.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;

     it= l.begin();
    it++;it++;
    l.erase(it);
    for (it = l.begin(); it != l.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}