#include<iostream>
#include<string>
using namespace std;
int main(){
	string s;
	int k,len;
	cin>>s>>k>>len;
	cout<<s.substr(k,len);
	return 0;
}

