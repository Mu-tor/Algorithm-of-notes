#include<cstdio>
int bin[20];
int main(){
	int num,i=0;
	scanf("%d",&num);
	do{
		bin[i++] = num%2;
		num/=2;
	}while(num);
	while(i--){
		printf("%d",bin[i]); 
	}
	return 0;
}

