#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v{10,5,20,15};
    v.resize(3);
    cout<<"\nfirst method\n";
    for(int x:v)
    cout<<x<<"  ";
    cout<<endl;
    v.resize(5);
    cout<<"\nsecond method\n";
    for(int x:v)
    cout<<x<<"  ";
    cout<<endl;
    v.resize(8,100);
    cout<<"\nthird method\n";
    for(int x:v)
    cout<<x<<"  ";
    cout<<endl;
     return 0;
}