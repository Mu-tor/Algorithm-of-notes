#include<cstdio>
#include<cstring>
int main(){
	char ans[1001][11];
	int num=0,len;
	while(scanf("%s",ans[num])!=EOF){
		num++;
	}
	for(int i=0;i<num;i++){
		printf("%c",ans[i][0]-'a'+'A');
		len = strlen(ans[i]);
		for(int j = 1;j<len;j++){
			printf("%c",ans[i][j]);
		}
		printf(i<num-1?" ":"");
	}
	return 0;
}
