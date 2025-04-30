#include <iostream>
#include<forward_list>
using namespace std;
int main() {
    forward_list<int>fl{1,2,3,4};
    forward_list<int>::iterator itr;
    fl.emplace_front(5);
    cout<<"The list:"<<endl;
     for(int x:fl)
     cout<<x<<" ";
     cout<<endl;
    itr = fl.begin();
    int pos = distance(fl.begin(),fl.end())-1;//to find the last element in the list
    advance(itr,pos);
    fl.remove(*itr);//used to remove the element
    cout<<"After removing:"<<endl;
    for(int x:fl)
    cout<<x<<" ";
    return 0;
}
