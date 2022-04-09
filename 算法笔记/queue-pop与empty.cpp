#include<iostream>
#include<cstdio>
#include<queue>
using namespace std;
int main(){
	queue<int> q;
	int n,k,num;
	scanf("%d%d",&n,&k);
	for(int i=0;i<n;i++){
		scanf("%d",&num);
		q.push(num);
	}
	for(int i=0;i<k;i++){
		q.pop();
	}
	if(q.empty()){
		cout<<"empty queue";
	}else{
		cout<<q.front()<<" "<<q.back();
	}
	return 0;
}

