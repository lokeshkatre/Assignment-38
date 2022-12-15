#include<iostream>
#include<list>
using namespace std;

int main()
{
    list<int> l;
    l.assign(2,20);
   
     list<int>::iterator it ;
    for(it = l.begin(); it!= l.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
}