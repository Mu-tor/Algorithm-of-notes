#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;

int F(int n){
	if(n==1) return 1;
	int M = 1;
	for(int i=1;i<n;i++){
		M=max(M,i*max(F(n-i),n-i));
	}
	return M;
}
int main(){
	int T;
	scanf("%d",&T);
	printf("%d",F(T));
	return 0;
}

