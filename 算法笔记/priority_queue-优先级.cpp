#include<iostream>
#include<queue>
using namespace std;
int main(){
	priority_queue<int, vector<int>, greater<int> > q;
	int n,num;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>num;
		q.push(num);
	}
	cout<<q.top();
	return 0;
}

