#include<iostream>
#include<cstdio>
#include<map>
using namespace std;
int main(){
	map<char,int> mp;
	char key;
	int n,val;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		getchar();
		scanf("%c%d",&key,&val);
		mp[key] = val;
	}
	printf("%d ",(int)mp.size());
	mp.clear();
	printf("%d",(int)mp.size());
	return 0;
}

