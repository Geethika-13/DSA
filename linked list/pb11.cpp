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
    int count = distance(fl.begin(),fl.end());
    int midpos = count / 2;
    auto itr = fl.begin();
    for(int i = 0; i<midpos;i++){
        itr++;
    }
    fl.remove(*itr);//used to remove the element specified
    cout<<"After removing:"<<endl;
    for(int x:fl)
    cout<<x<<" ";
    return 0;
}

