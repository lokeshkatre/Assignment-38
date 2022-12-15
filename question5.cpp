#include <iostream>
#include <list>
using namespace std;

int main()
{
    list<int> list1;
    int n;
    cout << "Enter 0 to stop" << endl;
    cout << "Enter element : " << endl;
    cin >> n;
    while (n)
    {
        list1.push_back(n);
        cout << "Enter 0 to stop" << endl;
        cout << "Enter element : " << endl;
        cin>>n;
    }

    int sum=0;
    for(auto i= list1.begin(); i!=list1.end(); i++)
    {
        sum = sum + (*i);
    }
    cout<<"\n Sum of elements are "<<sum;
}