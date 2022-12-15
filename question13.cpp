#include<iostream>
#include<list>
using namespace std;

int main()
{
    list<char> l;
    l.push_back('d');
    l.push_back('e');
    l.push_back('f');

    
    list<char>::const_iterator it ;
    //*t= 'a'; cannot do this as const_iterator is read only
    for(it = l.begin(); it!= l.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
}