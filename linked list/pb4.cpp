#include <iostream>
#include<forward_list>
#include<iterator>
using namespace std;
int main(){
    forward_list<int> fl{13, 11, 9 ,7, 5, 3 ,1};
    forward_list<int>::iterator itr;
    fl.emplace_front(12);//insert element in front of list
    cout<<"The list contains the data entered:";
    for(int x:fl)
    cout<<x<<" ";
    cout<<endl;
    return 0;
}
