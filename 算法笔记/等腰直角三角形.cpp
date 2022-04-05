#include<cstdio>
int main(){
	int T;
	scanf("%d",&T);
	for(int i=1;i<=T;i++){
		for(int j=0;j<i;j++){
			printf("*");
		}
		if(i<T){
			printf("\n");
		}
	}
	return 0;
}

