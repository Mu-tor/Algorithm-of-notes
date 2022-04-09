#include<iostream>
#include<cstdio>
#include<map>
using namespace std;
int main(){
	map<char, int> mp;
	int n,val;
	char key;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		getchar();
		scanf("%c %d",&key,&val);
		mp[key] = val;
	}
	getchar();
	char k;
	scanf("%c",&k);
	mp.erase(k);
	for(map<char ,int>::iterator it = mp.begin();it!=mp.end();it++){
		printf("%c %d\n",it->first,it->second);
	}
	return 0;
}

