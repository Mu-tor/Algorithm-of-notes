#include<cstdio>
char nums[]={'0','1','2','3','4','5','6','7','8'
		,'9','A','B','C','D','E','F'};
int de[20];
int main(){
	int num,d,i=0;
	scanf("%d%d",&num,&d);
	do{
		de[i++] = num%d;
		num/=d;
	}while(num);
	while(i--){
		printf("%c",nums[de[i]]);
	}
	return 0;
}

