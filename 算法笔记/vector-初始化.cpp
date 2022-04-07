#include<cstdio>
#include<vector>
using namespace std;
int main(){
	int n,k;
	scanf("%d%d",&n,&k);
	vector<int> v(n,k);
	for(int i=0;i<(int)v.size();i++){
		printf("%d",v[i]);
		if(i<(int)v.size()-1)
			printf(" ");
	}
	return 0;
}

