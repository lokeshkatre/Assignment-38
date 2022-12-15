#include<iostream>
#include<list>
using namespace std;

int main()
{
    list<int> l{2,34,5,4,4,3,3};
    l.push_back(43);
    l.push_front(34);
    
    list<int>::iterator it ;
    for(it = l.begin(); it!= l.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;

    l.unique();  //delete consicutive same element
    for(it = l.begin(); it!= l.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
}