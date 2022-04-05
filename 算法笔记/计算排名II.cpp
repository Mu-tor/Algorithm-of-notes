#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

const int MAXL = 1000;
int stu[MAXL];
bool cmp(int &a,int &b){
	return a>b;
}
int main(){
	int T;
	scanf("%d",&T);
	for(int i=0;i<T;i++){
		scanf("%d",&stu[i]);
	}
	sort(stu,stu+T,cmp);
	int top = 1;
	int num=1;
	for(int i=1;i<T;i++){
		if(stu[i]!=stu[i-1]){
			for(int j=0;j<num;j++){
				printf("%d %d\n",stu[i-1],top);
			}
			num = 0;
		}
		++num;
		++top;
	}
	for(int j=0;j<num;j++){
		printf("%d %d\n",stu[T-1],top);
	}
	return 0;
}

