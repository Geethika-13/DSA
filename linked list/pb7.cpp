#include <iostream>
#include<forward_list>
#include<iterator>
using namespace std;
int main(){
    forward_list<int> fl{13, 11, 9 ,7, 5, 3 ,1};

    fl.emplace_front(12);//insert element in front of list
    cout<<"The list contains the data entered:";
    for(int x:fl)
    cout<<x<<" ";
    cout<<endl;
    auto itr = fl.begin();
    advance(itr,4);
    fl.insert_after(itr,6);
    cout<<"After middle position insertion:";
    for(int x:fl)
    cout<< x <<" ";

    return 0;
}
