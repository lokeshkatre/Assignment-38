#include<iostream>
#include<list>
using namespace std;

int main()
{
    list<int> l;
    l.assign(5,20);
   
     list<int>::iterator it=l.end();
    for(it=l.end();it!=l.begin();it--)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
}