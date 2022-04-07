#include<cstdio>
#include<vector>
using namespace std;
int main(){
	int n,k;
	scanf("%d%d",&n,&k);
	vector<int> v(n,0);
	for(int i=0;i<k;i++){
		v.pop_back();
	}
	printf("%d",(int)v.size());
	return 0;
}

