#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int generateP(int n){
	if(n==0)	return 1;
	return n*generateP(n-1);
}
int main(){
	int n;
	scanf("%d",&n);
	printf("%d",generateP(n));
	return 0;
}

