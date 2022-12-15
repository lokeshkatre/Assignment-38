#include<iostream>
#include<list>
using namespace std;

int main()
{
    list<int> l;
    int arr[]={23,45,23,43,5,3};
    l.assign(arr,arr+6);
    list<int>::iterator it ;
    for(it = l.begin(); it!= l.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
}