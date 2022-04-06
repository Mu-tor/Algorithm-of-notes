#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
const int MAX = 100+1;
int nums[MAX];
int findMax(int n){
	if(n==1)	return nums[1];
	else return max(findMax(n-1),nums[n]);
}
int main(){
	int n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		scanf("%d",&nums[i]);
	}
	printf("%d",findMax(n));
	return 0;
}

