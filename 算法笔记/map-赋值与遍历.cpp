#include<iostream>
#include<cstdio>
#include<map>
using namespace std;
int main(){
	int n,key,val;
	scanf("%d",&n);
	map<char, int> mp;
	for(int i=0;i<n;i++){
		getchar();
		scanf("%c %d",&key,&val);
		mp[key]=val;
	}
	for(map<char, int>::iterator it= mp.begin();it!=mp.end();it++){
		printf("%c %d\n",it->first,it->second);
	}
	return 0;
}

