#include<cstdio>
int main(){
	int T;
	scanf("%d",&T);
	for(int i=0;i<T/2;i++){//�ϰ벿�� 
		for(int j=0;j<i;j++){//��ǰ��Ŀո� 
			printf(" ");
		}
		printf("*");
		for(int j=0;j<T-2*(i+1);j++){//�м�Ŀո� 
			printf(" ");
		}
		printf("*\n");
	}
	for(int i=0;i<T/2;i++){
		printf(" ");
	}
	printf("*\n");//�����ĵ�*�� 
	for(int i=0;i<T/2;i++){//�°벿�� 
		for(int j=0;j<T/2-1-i;j++){//��ǰ��Ŀո� 
			printf(" ");
		}
		printf("*");
		for(int j=0;j<i*2+1;j++){//�м�Ŀո� 
			printf(" ");
		}
		printf("*");
		if(i<T/2-1){
			printf("\n");
		}
	}
	return 0;
}

