#include <iostream>
#include<forward_list>
using namespace std;
int main() {
    forward_list<int>fl{1,2,3};
    fl.emplace_front(6);
    cout<<"The list:"<<endl;
    for(int y:fl)
    cout<<y<<" ";
    cout<<endl;
    fl.pop_front();//used to remove first element
    cout<<"After removing:"<<endl;
    for(int x:fl)
    cout<<x<<" ";
    return 0;
}
