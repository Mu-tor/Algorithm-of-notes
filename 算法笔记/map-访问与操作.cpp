#include<iostream>
#include<cstdio>
#include<map>
using namespace std;
int main(){
	map<string, int> mp;
	string key;
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		cin>>key;
		mp[key] = mp.find(key)!=mp.end()?mp[key]+1:1;
	}
	for(auto it = mp.begin();it!=mp.end();it++){
		cout<<it->first<<" "<<it->second<<endl;
	}
	return 0;
}

