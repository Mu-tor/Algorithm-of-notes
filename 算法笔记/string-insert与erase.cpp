#include<iostream>
#include<string>
using namespace std;
int main(){
	string s;
	cin>>s;
	int k1,k2;
	char c;
	cin>>k1>>c>>k2;
	s.insert(s.begin()+k1,c);
	s.erase(s.begin()+k2);
	cout<<s;
	return 0;
}

