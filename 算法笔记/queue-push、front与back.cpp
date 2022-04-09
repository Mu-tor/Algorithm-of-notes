#include<iostream>
#include<cstdio>
#include<queue>
using namespace std;
int main(){
	queue<int> q;
	int n,num;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&num);
		q.push(num);
	}
	cout<<q.front()<<" "<<q.back();
	return 0;
}

