#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
const int MAX = 1000001;

bool hashT[MAX];
int main(){
	int n,k,num,count = 0,min = 0;
	scanf("%d%d",&n,&k);
	for(int i=0;i<n;i++){
		scanf("%d",&num);
		min = num<min?num:min;
		hashT[num] = true;
	}
	for(int i=min;i<k/2;i++){
		if(hashT[i]&&hashT[k-i]){
			count++;
		}
	}
	printf("%d",count);
	return 0;
}

