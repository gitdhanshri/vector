#include<iostream>
#include<vector>
using namespace std;
vector <int>fun1(){
	vector<int>v1;
	v1.push_back(10);
	v1.push_back(11);
	v1.push_back(12);
	v1.push_back(13);
	v1.push_back(14);
	v1.push_back(15);
	v1.push_back(16);		
	v1.push_back(17);
	v1.push_back(18);
	v1.push_back(19);		
	v1.front()=501;	
	v1.pop_back();	
	v1.pop_back();		
	cout<<"  \n";
	return v1;	
}
int main(){
	int num1=0;
	fun1();
	vector<int>v=fun1();
	for(int i=0;i<v.size();i++){
	cout<<v[i]<<"  ";
	}
	cout<<"  \n";
	v.pop_back();
	for(int i=0;i<v.size();i++){
		cout<<v[i]<<"  ";
	}	
	//cout<<v.begin();
	cout<<"  \n";
	v.back()=401;	
	for(int i=0;i<v.size();i++){
		cout<<v[i]<<"  ";
	}
	cout<<"  \n";
	//cout<<v.begin();
	v.erase(v.begin());
	v.back()=401;	
	for(int i=0;i<v.size();i++){
		cout<<v[i]<<"  ";
	}
	v.resize(12,100);
	cout<<"  \n";		
	for(int i=0;i<v.size();i++){
		cout<<v[i]<<"  ";
	}	
	cout<<"  \n";	
	//cout<<v.begin();					
	return 0;
}
