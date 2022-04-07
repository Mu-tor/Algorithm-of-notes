#include<cstdio>
#include<set>
#include<algorithm>
using namespace std;
int main(){
	int n,m,num;
	set<int> s;
	scanf("%d%d",&n,&m);
	for(int i=0;i<n;i++){
		scanf("%d",&num);
		s.insert(num);
	}
	s.erase(m);
	for(auto it = s.begin();it!=s.end();it++){
		if(it!=s.begin())   printf(" ");
		printf("%d",*it);
	}
	return 0;
}

