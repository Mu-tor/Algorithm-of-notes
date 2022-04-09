#include<iostream>
#include<algorithm>
using namespace std;

const int MAX = 100000;
int ans[MAX];
int n,x;
bool f(int a){
	return (x>=ans[0]&&(ans[a]>=x||ans[a]<ans[0])||x<ans[0]&&(ans[a]>=x&&ans[a]<ans[0]));
}
int binarySerch(int left,int right){
	int mid;
	while(left<right){
		mid = left+(right-left)/2;
		if(ans[mid]==x)return mid;
		else if(f(mid)){
			right = mid;
		}else{
			left = mid+1;
		}
	}
    return -1;
}
int main(){
	int num;
	scanf("%d%d",&n,&x);
	for(int i=0;i<n;i++){
		scanf("%d",&num);
		ans[i] = num;
	}
	printf("%d",binarySerch(0,n));
	return 0;
}
