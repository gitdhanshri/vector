#include<iostream>
#include<vector>
using namespace std;
/*vector <int>fun2(){
	for(int i=0;i<v.size();i++){
		cout<<v[i]<<"  ";
	}			
	cout<<"  \n";
	return v;	
}*/
void fun1(vector<int>v){
	//v.push_back(11);
	//v.push_back(101);
	cout<<"\nInside fun1-->\n";
	for(int i=0;i<v.size();i++){
		cout<<v[i]<<"  ";
	}			
	cout<<"  \n";	
}
int main(){
	vector<int>v{1,2,3,4,5,6,7,8};
	for(int i=0;i<v.size();i++){
		cout<<v[i]<<"  ";
	}	
	cout<<"  \n";	
	fun1(v);
	
	cout<<"  \n";	
	return 0;
}
