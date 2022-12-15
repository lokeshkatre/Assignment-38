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
    l.assign(2,20);
    displayList(l);

    list<int> l2;
    l2.push_back(2);
    l2.push_back(5);
    l2.push_back(23);

    displayList(l2);

    int arr[]={3,4,53,2,3};
    list<int> l3;
    l3.assign(arr,arr+5);
    displayList(l3);
    
}