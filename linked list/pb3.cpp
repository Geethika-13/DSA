#include <iostream>
#include<forward_list>
#include<iterator>
using namespace std;
int main(){
    forward_list<int> fl;
    forward_list<int>::iterator itr;
    fl.push_front(1);
    fl.push_front(3);
    fl.push_front(5);
    fl.push_front(7);
    fl.push_front(9);
    fl.push_front(11);
    cout<<"The list contains the data entered:";
    for(int x:fl)
    cout<<x<<" ";
    cout<<endl;
    int count = distance(fl.begin(), fl.end());
    cout << "Number of nodes: " << count <<endl;

    return 0;
}
