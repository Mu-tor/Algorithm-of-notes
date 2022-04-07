#include<iostream>
#include<string>
using namespace std;
int main(){
	string s1,s2;
	int k,len;
	cin>>s1>>k>>len>>s2;
	cout<<s1.replace(k,len,s2);
	return 0;
}

