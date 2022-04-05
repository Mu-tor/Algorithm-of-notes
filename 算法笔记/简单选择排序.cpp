#include<cstdio>
int ans[50];
int main(){
	int T,k,temp;
	scanf("%d",&T);
	for(int i=0;i<T;i++){
		scanf("%d",&ans[i]);
	}
	for(int i=0;i<T;i++){
		k = i;
		for(int j=i;j<T;j++){
			if(ans[j]<ans[k]){
				k = j;
			}
		}
		temp = ans[i];
		ans[i] = ans[k];
		ans[k] = temp;
	}
	for(int i=0;i<T;i++){
		printf("%d",ans[i]);
		if(i<T-1){
			printf(" ");
		}
	}
	return 0;
}

