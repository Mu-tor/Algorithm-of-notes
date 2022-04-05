#include<cstdio>
#include<cstring>
int main(){
	char str[1001][11];
	int num=0;
	while(scanf("%s",str[num])!=EOF){
		num++;
	}
	while(num--){
		printf("%s",str[num]);
		if(num){
			printf(" ");
		} 
	}
	return 0;
}
