#include<cstdio>
int ans[50];
int main(){
	int T,temp,j;
	scanf("%d",&T);
	for(int i=0;i<T;i++){
		scanf("%d",&ans[i]);
	}
	for(int i=1;i<T;i++){
		temp = ans[i];
		j = i;
		while(j>0&&ans[j-1]>temp){//ÍùÇ°±éÀú 
			ans[j]=ans[j-1];
			j--;
		}
		ans[j] = temp;
	}
	for(int i=0;i<T;i++){
		printf("%d",ans[i]);
		if(i<T-1){
			printf(" ");
		}
	}
	return 0;
}

