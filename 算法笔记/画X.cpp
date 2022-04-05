#include<cstdio>
int main(){
	int T;
	scanf("%d",&T);
	for(int i=0;i<T/2;i++){//上半部分 
		for(int j=0;j<i;j++){//最前面的空格 
			printf(" ");
		}
		printf("*");
		for(int j=0;j<T-2*(i+1);j++){//中间的空格 
			printf(" ");
		}
		printf("*\n");
	}
	for(int i=0;i<T/2;i++){
		printf(" ");
	}
	printf("*\n");//最中心的*号 
	for(int i=0;i<T/2;i++){//下半部分 
		for(int j=0;j<T/2-1-i;j++){//最前面的空格 
			printf(" ");
		}
		printf("*");
		for(int j=0;j<i*2+1;j++){//中间的空格 
			printf(" ");
		}
		printf("*");
		if(i<T/2-1){
			printf("\n");
		}
	}
	return 0;
}

