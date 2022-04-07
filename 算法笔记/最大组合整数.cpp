#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int nums[10];
int main() {
	int num,M = 0;
	for(int i=0; i<10; i++) {
		scanf("%d",&num);
		nums[i] = num;
		if(num) {
			M = i;
		}
	}
	if(M==0) {
		printf("0");
	} else {
		for(int i=M; i>=0; i--) {
			while(nums[i]--) {
				printf("%d",i);
			}
		}
	}

	return 0;
}

