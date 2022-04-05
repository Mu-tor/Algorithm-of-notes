#include<cstdio>
int nums[20]; 
int main(){
	int T,a,num = 0;
	scanf("%d",&T);
	for(int i=0;i<T;i++){
		scanf("%d",nums+i);
	}
	scanf("%d",&a);
	for(int i=0;i<T-1;i++){
		for(int j=i+1;j<T;j++){
			if(nums[i]+nums[j]==a)
				++num;
		}
	}
	printf("%d",num);
	return 0;
}

