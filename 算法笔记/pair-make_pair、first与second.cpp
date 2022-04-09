#include<iostream>
#include<string>
#include<utility>
using namespace std;
int main(){
	pair<string ,int> p;
	string str;
	int n;
	cin>>str>>n;
	p = make_pair(str,n);
	cout<<p.first<<" "<<p.second;
	return 0;
}

