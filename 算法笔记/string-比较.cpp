#include<iostream>
#include<string>
using namespace std;
int main(){
	string s1,s2;
	cin>>s1>>s2;
	if(s1>s2){
		cout<<1;
	}else if(s1==s2){
		cout<<0;
	}else cout<<-1;
	return 0;
}

