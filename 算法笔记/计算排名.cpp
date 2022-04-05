#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

const int MAXL = 100;
int stu[MAXL];
bool cmp(int &a,int &b){
	return a>b;
}
int main() {
	int T;
	scanf("%d",&T);
	for(int i=0; i<T; i++) {
		scanf("%d",&stu[i]);
	}
	int top = 1;
	sort(stu,stu+T,cmp);
	if(T)	printf("%d %d\n",stu[0],top);
	for(int i=1; i<T; i++) {
		if(stu[i]!=stu[i-1]) {
			top = i+1;
		}
		printf("%d %d\n",stu[i],top);
	}
	return 0;
}

