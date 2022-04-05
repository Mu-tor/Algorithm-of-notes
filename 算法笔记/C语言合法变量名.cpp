#include<cstdio>
#include<cstring>
#include<stdbool.h>
bool isVar(char c){
	if(c>='a'&&c<='z'||c>='A'&&c<='Z'||c>='0'&&c<='9'||c=='_'){
		return true;
	}else return false;
} 
bool isHead(char c){
	if(c>='a'&&c<='z'||c>='A'&&c<='Z'||c=='_'){
		return true;
	}else return false;
}
int main(){
	char str[21];
	int len;
	bool flag = false;
	scanf("%s",str);
	len = strlen(str);
	flag = isHead(str[0]);
	for(int i=1;i<len;i++){
		if(!isVar(str[i])){
			flag = false;
			break;
		}
	}
	printf("%s",flag?"YES":"NO");
	return 0;
}

