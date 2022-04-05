#include<cstdio>
#include<stdbool.h>
#include<cstring>
bool isReturn(char *str){
	int len = strlen(str);
	for(int i=0;i<=len/2;i++){
		if(str[i]!=str[len-i-1])
			return false;
	}
	return true;
}
int main(){
	char ans[51];
	scanf("%s",ans);
	printf(isReturn(ans)?"YES":"NO");
	return 0;
}
