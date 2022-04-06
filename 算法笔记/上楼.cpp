#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int F(int n){
	if(n<=1)  return 1;
	return F(n-2)+F(n-1);
}
int main(){
	int T;
	scanf("%d",&T);
	printf("%d",F(T));
	return 0;
}
