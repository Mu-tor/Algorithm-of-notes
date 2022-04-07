#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

const int MAX = 100000;
int nums[MAX];
int main(){
	int n,cap,num,count = 0,sum = 0;
	scanf("%d%d",&n,&cap);
	for(int i=0;i<n;i++){
		scanf("%d",&num);
		nums[i] = num;
	}
	sort(nums,nums+n);
	for(int i=0;i<n;i++){
		if(sum+nums[i]<=cap){
			sum+=nums[i];
			count++;
		}else{
			break;
		}
	}
	printf("%d %d",count,sum);
	return 0;
}

