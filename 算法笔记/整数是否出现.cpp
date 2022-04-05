#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

const int MAX = 10010;
bool hashT[1001];
int main(){
	int n,m,num;
	int nums[MAX];
	scanf("%d%d",&n,&m);
	for(int i=0;i<n;i++){
		scanf("%d",&num);
		hashT[num] = true;
	}
	for(int i=0;i<m;i++){
		scanf("%d",&num);
		nums[i] = num;
	}
	for(int i=0;i<m;i++){
		printf(hashT[nums[i]]?"1":"0");
		if(i<m-1){
			printf(" ");
		}
	}
	return 0;
}

