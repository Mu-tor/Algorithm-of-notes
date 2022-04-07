#include<cstdio>
#include<set>
#include<algorithm>
using namespace std;
int main(){
	set<int> s;
	int n,m,num;
	scanf("%d%d",&n,&m);
	for(int i=0;i<n;i++){
		scanf("%d",&num);
		s.insert(num);
	}
	set<int>::iterator it =s.find(m);
	if(it!=s.end())
		s.erase(it);
	for(it=s.begin();it!=s.end();it++){
		if(it!=s.begin())   printf(" ");
		printf("%d",*it);
	}
	return 0;
}

