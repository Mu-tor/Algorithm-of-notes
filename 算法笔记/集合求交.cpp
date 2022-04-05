#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

const int MAX = 10001;
bool hashT[MAX];
int nums[MAX];
int main(){
	int n,m,num,count = 0;
	scanf("%d%d",&n,&m);
	for(int i=0;i<n;i++){
		scanf("%d",&num);
		hashT[num] = true;
	}
	for(int i=0;i<m;i++){
		scanf("%d",&num);
		if(hashT[num]){
			nums[count++] = num;
		}
	}
	for(int i=0;i<count;i++){
		printf("%d",nums[i]);
		if(i<count-1)
			printf(" ");
	}
	return 0;
}
