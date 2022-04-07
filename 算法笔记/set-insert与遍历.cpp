#include<cstdio>
#include<set>
using namespace std;
int main(){
	int n,num;
	set<int> s;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&num);
		s.insert(num);
	}
	set<int>::iterator it = s.begin();
	for(;it!=s.end();it++){
		if(it!=s.begin()){
			printf(" ");
		}
		printf("%d",*it);
	}
	return 0;
}

