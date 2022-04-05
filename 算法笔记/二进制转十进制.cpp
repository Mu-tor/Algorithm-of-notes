#include<cstdio>
int main(){
	int num,dec=0,product=1,P=2;
	scanf("%d",&num);
	while(num){
		dec+=num%10*product;
		num/=10;
		product*=2;
	}
	printf("%d",dec);
	return 0;
}

