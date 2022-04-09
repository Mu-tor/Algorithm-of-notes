#include<cstdio>
#include<algorithm>
using namespace std;

const int MAX = 100000;
int ans[MAX];
int binarySerch(int left,int right,int x){
	int mid;
	while(left<=right){
		mid = left+(right-left)/2;
		if(ans[mid]==x){
			return mid;
		}else if(ans[mid]>x){
			right = mid-1;
		}else{
			left = mid+1;
		}
	}
	return -1;
}
int main(){
	int n,x,num;
	scanf("%d%d",&n,&x);
	for(int i=0;i<n;i++){
		scanf("%d",&num);
		ans[i] = num;
	}
	printf("%d",binarySerch(0,n,x));
	return 0;
}

