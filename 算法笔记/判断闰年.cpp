#include<cstdio>
#include<stdbool.h>
bool isRun(int y){
	if(!(y%400)||!(y%4)&&y%100){
		return true;
	}else	return false;
}
int main(){
	int Y;
	scanf("%d",&Y);
	printf(isRun(Y)?"YES":"NO");
	return 0;
}

