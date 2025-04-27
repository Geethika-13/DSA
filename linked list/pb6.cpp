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
    int count = distance(fl.begin(),fl.end());
    int midpos = count / 2;
    auto itr = fl.begin();
    for (int i = 0; i < midpos; i++) {
        itr++;
    }
    cout<<"The middle position:"<< *itr <<" ";

    return 0;
}
