#include<iostream>
#include<string>
#include<cmath>
#include<algorithm>
using namespace std;

void Func(int n,char start,char mid,char end){
	if(n==1){
		printf("%c->%c\n",start,end);
	}else{
		Func(n-1,start,end,mid);
		printf("%c->%c\n",start,end);
		Func(n-1,mid,start,end);
	}
}
int main(){
	int T;
	scanf("%d",&T);
	printf("%d\n",(int)pow(2.0,(double)T)-1);
	Func(T,'A','B','C');
	return 0;
}

