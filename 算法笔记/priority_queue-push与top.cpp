#include<iostream>
#include<queue>
using namespace std;
int main(){
	priority_queue<int> q;
	int n,num;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>num;
		q.push(num);
	}
	if(!q.empty())
		cout<<q.top();
	return 0;
}

