#include<cstdio>
#include<cstring>
const int MAXL = 101;
int main(){
	char ans[MAXL],c;
	int len,num=0;
	scanf("%s",ans);
	len = strlen(ans);
	if(len){
		c = ans[0];
		num++;
	}
	for(int i=1;i<len;i++){
		if(c!=ans[i]&&num){
			printf("%c %d",c,num);
			c = ans[i];
			num = 1;
			printf("\n");
		}else{
			num++;
		}
	}
	if(num){
		printf("%c %d",c,num);
	}
	return 0;
}
