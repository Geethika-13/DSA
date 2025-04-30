#include <iostream>
#include<forward_list>
using namespace std;
int main() {
    forward_list<int>fl{1,2,3,4};
    fl.emplace_front(5);
    cout<<"The list:"<<endl;
     for(int x:fl)
     cout<<x<<" ";
     cout<<endl;
    int count = 0;
    for(int x:fl) count++;
    int mid = count / 2;
    int v = 1;
    int target = mid - v;
    auto itr = fl.begin(); 
    for (int i = 0; i < target; i++) ++itr;
    cout << "Value: " << *itr << endl; // Print the value at the target position
    return 0;
}
