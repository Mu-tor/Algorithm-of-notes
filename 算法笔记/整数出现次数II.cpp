#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

const int MAX = 10010;
int hashT[1001];
int main(){
	int n,m,num;
	int nums[MAX];
	scanf("%d%d",&n,&m);
	for(int i=0;i<n;i++){
		scanf("%d",&num);
		hashT[num]++;
	}
	for(int i=0;i<m;i++){
		scanf("%d",&num);
		nums[i] = num;
	}
	for(int i=0;i<m;i++){
		printf("%d",hashT[nums[i]]?hashT[nums[i]]:0);
		if(i<m-1){
			printf(" ");
		}
	}
	return 0;
}

