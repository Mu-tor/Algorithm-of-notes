#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

const int MAX = 10001;
int hashT[MAX];
int main(){
	int n,m,num,mi=MAX,M=-1;
	scanf("%d%d",&n,&m);
	for(int i=0;i<n;i++){//输入整数，并在hash表上位置=1 
		scanf("%d",&num);
		hashT[num]++;
		mi = min(mi,num);
		M = max(M,num);
	}
	for(int i=0;i<m;i++){//输入整数，并在hash表上所在位置-1 
		scanf("%d",&num);
		hashT[num]--;
	}
	bool flag = false;
	for(int i=mi;i<=M;i++){
		if(hashT[i]>0){
			for(int j=0;j<hashT[i];j++){//hash表存储差集中每个元素的个数 
				if(!flag){
					printf("%d",i);
					flag = true;
				}else printf(" %d",i);
			}
		}
	} 
	return 0;
}

