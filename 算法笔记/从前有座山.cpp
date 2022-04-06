#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
void print(int n){
	if(n==0){
		printf("讲你妹的故事啊！快点去睡觉！！！\n");
		return;
	}
	printf("从前有座山，山上有座庙\n庙里有一个老和尚和一个小和尚\n睡前老和尚给小和尚讲故事：\n");
	print(n-1);
	printf("然后老和尚和小和尚就睡觉啦\n");
}
int main(){
	int n;
	scanf("%d",&n);
	print(n);
	return 0;
}

