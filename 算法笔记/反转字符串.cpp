#include<cstdio>
#include<cstring>

const int MAX=100+1;
char str[MAX];
void reprint(int n){
	if(n==0){
		return;
	}else{
		printf("%c",str[n-1]);
		reprint(n-1);
	}
}
int main(){
	scanf("%s",str);
	reprint(strlen(str));
	return 0;
}

