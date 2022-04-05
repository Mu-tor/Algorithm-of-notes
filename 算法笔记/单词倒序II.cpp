#include<cstdio>
#include<cstring>
int main(){
	int nums[1001][1],num=0;//存放每个单词字数
	char ans[1001][11];
	while(scanf("%s",ans[num])!=EOF){
		nums[num][0] = strlen(ans[num]);
		num++;
	}
	for(int i =0;i<num;i++){
		for(int j=nums[i][0]-1;j>=0;j--){
			printf("%c",ans[i][j]);
		}
		if(i<num-1)	printf(" ");
	}
	return 0;
}
