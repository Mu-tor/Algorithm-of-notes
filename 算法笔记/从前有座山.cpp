#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
void print(int n){
	if(n==0){
		printf("�����õĹ��°������ȥ˯��������\n");
		return;
	}
	printf("��ǰ����ɽ��ɽ��������\n������һ���Ϻ��к�һ��С����\n˯ǰ�Ϻ��и�С���н����£�\n");
	print(n-1);
	printf("Ȼ���Ϻ��к�С���о�˯����\n");
}
int main(){
	int n;
	scanf("%d",&n);
	print(n);
	return 0;
}

