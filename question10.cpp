#include <iostream>
#include <list>
using namespace std;

int main()
{
    list<int> l{2, 34, 5, 4, 4, 3, 3};
    l.push_back(43);
    l.push_front(34);

    list<int> l2;
    l2.assign(5, 100);
    list<int>::iterator it;
    cout<<"list 1:"<<endl;
    for (it = l.begin(); it != l.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;

    cout<<"\nlist 2:"<<endl;
    for (it = l2.begin(); it != l2.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;

    l.merge(l2);
    cout << "\nAfter merge" << endl;
    for (it = l.begin(); it != l.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;

}