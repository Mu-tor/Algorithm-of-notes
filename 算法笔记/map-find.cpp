#include<iostream>
#include<cstdio>
#include<map>
using namespace std;
int main(){
	int n,val;
	char key,k;
	scanf("%d",&n);
	map<char, int> mp;
	for(int i=0;i<n;i++){
		getchar();
		scanf("%c%d",&key,&val);
		mp[key] = val;
	}
	cin>>k;
	auto it = mp.find(k);
	int l =it!=mp.end()?it->second:-1;
	cout<<l;
	return 0;
}

