#include<iostream>
#include<list>
using namespace std;

int main()
{
    list<int> l;
    l.push_front(3);
    l.push_front(4);
    l.push_front(5);
    l.push_front(6);

    cout<<"last element is "<<l.back()<<endl;
    cout<<"front element is "<<l.front()<<endl;

}