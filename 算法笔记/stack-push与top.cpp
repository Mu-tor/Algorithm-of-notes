#include<iostream>
#include<stack>
using namespace std;
int main(){
	stack<int> s;
	int n,num;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>num;
		s.push(num);
	}
	cout<<s.top();
	return 0;
}
