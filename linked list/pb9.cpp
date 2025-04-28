#include <iostream>
#include<forward_list>
using namespace std;
int main() {
    forward_list<int>fl{1,2,3,4};
    auto itr= fl.begin();
    advance(itr,2);
    fl.insert_after(itr,6);
    cout<<"After inserting:"<<endl;
    for(int x:fl)
    cout<<x<<" ";
    
    
    return 0;
}
