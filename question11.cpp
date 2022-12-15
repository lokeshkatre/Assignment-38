#include<iostream>
#include<list>
using namespace std;

int main()
{
    list<int> l{2,345,4,64,3};
    l.push_back(43);
    l.push_front(34);
    
    list<int> l2;
    l2.assign(l.begin(),l.end());
    list<int>::iterator it ;
    for(it = l.begin(); it!= l.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
}