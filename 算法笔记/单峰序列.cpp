#include<iostream>
#include<algorithm>
using namespace std;

const int MAX = 100000;
int ans[MAX];
bool f(int x){
	return ans[x]>ans[x+1];
}
int binarySerch(int left,int right){
	int mid;
	while(left<right){
		mid = left+(right-left)/2;
		if(f(mid)){
			right = mid;
		}else{
			left = mid+1;
		}
	}
	return left;
}
int main(){
	int n,num;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&num);
		ans[i] = num;
	}
	printf("%d",binarySerch(0,n));
	return 0;
}


