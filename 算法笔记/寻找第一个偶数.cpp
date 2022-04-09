#include<iostream>
#include<algorithm>
using namespace std;

const int MAX = 100000;
int ans[MAX];
bool f(int x){
	return x%2==0;
}
int binarySerch(int left,int right){
	int mid,n = right;
	while(left<right){
		mid = left+(right-left)/2;
		if(f(ans[mid])){
			right = mid;
		}else{
			left = mid + 1;
		}
	}
	if(left<n&&f(ans[left])) return left;
	else return -1;
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


