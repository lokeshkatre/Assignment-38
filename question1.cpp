#include<iostream>
#include<list>
using namespace std;

void displayList(list<int> l)
{
    list<int>::iterator it ;
    for(it = l.begin(); it!= l.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
}
int main()
{
    list<int> l;

    if(l.empty())
    {
        cout<<"List is empty"<<endl;
    }
    else 
    cout<<"List is not empty"<<endl;

    l.push_front(3);
    l.push_front(4);
    l.push_front(5);
    l.push_front(6);
    l.push_back(67);
    displayList(l);

    list<int>::iterator it;
    it= l.begin();
    l.insert(it,23);
    l.insert(it,34);
    l.insert(it,35);
    l.insert(it,36);
    displayList(l);

    cout<<"Size of list is "<<l.size()<<endl;

    l.reverse();
    cout<<"\nreverse list is:"<<endl;
    displayList(l);

    l.remove(35);
    displayList(l);

    cout<<"\nFront element:"<<l.front()<<endl;
    cout<<"\nBack element:"<<l.back()<<endl;

    l.pop_back();
    l.pop_front();
    displayList(l);

    list<int> list2;
    list2.assign(5,100);
    cout<<"\nlist element after assign"<<endl;
    displayList(list2);

    l.merge(list2);
    cout<<"\nAfter merge"<<endl;
    displayList(l);

    l.unique();
    cout<<"\nAfter  unique"<<endl;
    displayList(l);
    cout<<endl;

    it= l.begin();
    l.erase(it);
    displayList(l);

    
}