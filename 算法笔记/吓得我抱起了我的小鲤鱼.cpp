#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

void print(int n){
	if(n==0){
		printf("我的小鲤鱼");
		return;	
	}else{
		printf("抱着");
		print(n-1);
		printf("的我");
	}
}
int main(){
	int n;
	scanf("%d",&n);
	printf("吓得我抱起了");
	print(n);
	return 0;
}

