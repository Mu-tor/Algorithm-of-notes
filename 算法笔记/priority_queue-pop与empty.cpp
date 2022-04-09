#include<iostream>
#include<queue>
using namespace std;
int main(){
	priority_queue<int> q;
	int n,k,num;
	cin>>n>>k;
	for(int i=0;i<n;i++){
		cin>>num;
		q.push(num);
	}
	for(int i=0;i<k;i++){
		q.pop();
	}
	if(!q.empty()){
		cout<<q.top();
	}else cout<<"empty priority queue";
	return 0;
}

