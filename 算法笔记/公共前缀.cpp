#include<iostream>
#include<cstring>
const int MAXL = 50;

int minLen = 51,T;
int count(char (*ans)[MAXL]){
	int num = 0;
	char c;
	for(int i=0;i<minLen;i++){	//�ӵ�һ���ַ���ʼ������ַ����Ա� 
		c = ans[0][i];
		for(int j=1;j<T;j++){	//�ӵڶ����ַ�����ʼ������ַ����Ա�
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

