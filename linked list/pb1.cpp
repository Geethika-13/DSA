#include <iostream>
#include<forward_list>
#include<iterator>
using namespace std;
int main(){
    forward_list<int> fl;
    fl.push_front(1);
    fl.push_front(3);
    fl.push_front(5);
    fl.push_front(7);
    fl.push_front(9);
    fl.push_front(11);
    cout<<"The list contains the data entered:";
    for(int x:fl)
    cout<<x<<" ";

    return 0;
}
