#include<iostream>
#include<cstdio>
#include<queue>
using namespace std;
int main(){
	queue<int> q;
	int n,m,num;
	scanf("%d%d",&n,&m);
	for(int i=0;i<n;i++){
		scanf("%d",&num);
		q.push(num);
	}
	for(int i=0;i<m;i++){
		q.pop();
	}
	cout<<q.size();
	return 0;
}

