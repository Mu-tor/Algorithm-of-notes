#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

const int MAX = 20+1;
int nums[MAX][MAX],n;
int maxSum(int i,int j){
	if(i==n){
		return nums[i][j];
	}else{
		return max(maxSum(i+1,j),maxSum(i+1,j+1))+nums[i][j];
	}
}
int main(){
	int num;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){//ÊäÈë 
		for(int j=1;j<=i;j++){
			scanf("%d",&num);
			nums[i][j] = num;
		}
	}
	printf("%d",maxSum(1,1));
	return 0;
}

