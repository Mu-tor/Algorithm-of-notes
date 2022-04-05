#include<cstdio>
int main(){
	int T;
	scanf("%d",&T);
	printf("*\n");
	for(int i=1;i<T;i++){
		printf("*");
		for(int j=0;j<i-1;j++){
			if(i==T-1)
				printf("*");
			else
				printf(" ");
		}
		printf("*");
		if(i<T-1){
			printf("\n");
		}
	}
	return 0;
}

