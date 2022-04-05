#include<iostream>
#include<cstring>
const int MAXL = 50;

int minLen = 51,T;
int count(char (*ans)[MAXL]){
	int num = 0;
	char c;
	for(int i=0;i<minLen;i++){	//从第一个字符开始，逐个字符串对比 
		c = ans[0][i];
		for(int j=1;j<T;j++){	//从第二个字符串开始，逐个字符串对比
			if(ans[j][i]!=c)
				return num;
		}
		printf("%c",c);
	}
	return num;
}
int main(){
	int num=0,len;
	char ans[20][MAXL];
	scanf("%d",&T);
	for(int i=0;i<T;i++){
		scanf("%s",ans[i]);
		len=strlen(ans[i]);
		minLen = minLen<len?minLen:len;
	}
	num = count(ans);
	return 0;
}

