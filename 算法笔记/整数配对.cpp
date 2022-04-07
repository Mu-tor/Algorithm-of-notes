#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

const int MAX = 100000;
int S[MAX],T[MAX];
int main(){
	int s,t,num,count = 0;
	scanf("%d%d",&s,&t);
	for(int i=0;i<s;i++){
		scanf("%d",&num);
		S[i] = num;
	}
	sort(S,S+s);
	for(int i=0;i<t;i++){
		scanf("%d",&num);
		T[i] = num;
	}
	sort(T,T+t);
	int i=0,j =0;
	while(i<t&&j<s){
		if(T[i]>S[j]){
			j++;
			count++;
		}
		i++;
	}
	printf("%d",count);
	return 0;
}

