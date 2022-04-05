#include<cstdio>
#include<algorithm>
#include<stdbool.h>
using namespace std;
bool cmp(int &a,int &b){
	return a<b;
}
int ans[50];
int main(){
	int T,temp,j;
	scanf("%d",&T);
	for(int i=0;i<T;i++){
		scanf("%d",&ans[i]);
	}
	sort(ans,ans+T,cmp);
	for(int i=0;i<T;i++){
		printf("%d",ans[i]);
		if(i<T-1){
			printf(" ");
		}
	}
	return 0;
}

