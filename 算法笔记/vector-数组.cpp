#include<cstdio>
#include<vector>
using namespace std;
int main(){
	vector<int> vs[10];
	int n,m,num;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&m);
		for(int j=0;j<m;j++){
			scanf("%d",&num);
			vs[i].push_back(num);
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<(int)vs[i].size();j++){
			printf("%d",vs[i][j]);
			if(j<(int)vs[i].size()-1)
				printf(" ");
		}
		printf("\n");
	}
	return 0;
}

