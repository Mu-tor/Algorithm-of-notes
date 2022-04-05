#include<cstdio>
int getNum(char &c){
	if(c>='0'&&c<='9'){
		return c-'0';
	}else{
		return c-'A'+10;
	}
}
int getLength(char *str){
	int length=0;
	while(*(str+length++)!='\0');
	return length-1;
}
char nums[8];
int main(){
	int de,length,pro = 1,num=0;
	scanf("%s %d",nums,&de);
	length = getLength(nums);
	for(int i=length-1;i>=0;i--){
		num+=getNum(nums[i])*pro;
		pro*=de;
	}
	printf("%d",num);
	return 0;
}

