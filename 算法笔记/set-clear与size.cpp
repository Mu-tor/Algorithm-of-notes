#include<cstdio>
#include<set>
#include<algorithm>
using namespace std;
int main(){
	set<int> s;
	int n,num;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&num);
		s.insert(num);
	}
	s.clear();
	printf("%d",(int)s.size());
	return 0;
}

