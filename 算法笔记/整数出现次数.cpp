#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

const int MAX = 101;
int hashTable[MAX];
int main(){
	int T,num;
	scanf("%d",&T);
	for(int i=0;i<T;i++){
		scanf("%d",&num);
		hashTable[num]++;
	}
	for(int i=1;i<MAX;i++){
		if(hashTable[i]){
			printf("%d %d\n",i,hashTable[i]);
		}
	}
	return 0;
}

