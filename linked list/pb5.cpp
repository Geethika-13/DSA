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
    itr = fl.begin();
    int pos = distance(fl.begin(),fl.end())-1;
    advance(itr,pos);
    fl.insert_after(itr,0);
    for(int x:fl)
    cout<< x <<" ";

    return 0;
}
