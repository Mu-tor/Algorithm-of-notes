#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
	string s;
	vector<string> v;
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>s;
		v.push_back(s);
	}
	sort(v.begin(),v.end());
	for(int i=0;i<n;i++){
		cout<<v[i]<<endl;
	}
	return 0;
}

