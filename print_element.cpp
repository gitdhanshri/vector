#include<iostream>
#include<vector>
using namespace std;
int main(){
//vector <int> v;
// v.push_back(10);
// v.push_back(15);
// v.push_back(20);
// for(int i=0;i<v.size();i++){
// cout<<v.at(i)<<" ";
// }
// cout<<"\n";
// for(int i=0;i<v.size();i++){
// cout<<v[i]<<" ";
// }
// vector<int>v10,15,10,25];
// for(int x: v){
// cout<<x<<"  ";
// }
//m-3
// cout<<"\n";
// int n=5,x=10;
// vector<int> v(n,x);
// for(auto it=v.begin();it!=v.end();it++){
//     cout<<(*it)<<" ";
// }
//m-4
int arr[]={10,5,20};
int n=sizeof(arr)/sizeof(arr[0]);
vector<int> v(arr,arr+n);
for(auto it=v.begin();it!=v.end();it++){
    cout<<(*it)<<" ";
}
cout<<"\n";
return 0;
}