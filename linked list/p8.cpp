#include <iostream>
#include<forward_list>
using namespace std;
int main() {
    forward_list<int>fl{1,2,3,4};
    int pos = 1;
    cout<<" The list:"<<" ";
    for(int x:fl)
    cout<<x<<endl;
    for(auto itr=fl.begin(); itr != fl.end();
    ++itr,++pos){
        cout << "Position: " << pos << " Value: " << *itr <<endl;

    }
    return 0;
}
