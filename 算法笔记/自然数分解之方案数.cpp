#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int F(int n){
	if(n==1) return 0;
	return F(n-1)+n/2;
}
int main(){
	int T;
	scanf("%d",&T);
	printf("%d",F(T));
	return 0;
}

