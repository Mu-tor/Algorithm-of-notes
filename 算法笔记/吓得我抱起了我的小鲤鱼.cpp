#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

void print(int n){
	if(n==0){
		printf("�ҵ�С����");
		return;	
	}else{
		printf("����");
		print(n-1);
		printf("����");
	}
}
int main(){
	int n;
	scanf("%d",&n);
	printf("�ŵ��ұ�����");
	print(n);
	return 0;
}

