#include<iostream>
#include<stack>
using namespace std;
int main(){
	stack<int> s;
	int n,k,num;
	cin>>n>>k;
	for(int i=0;i<n;i++){
		cin>>num;
		s.push(num);
	}
 	while(k--)  s.pop();
 	if(!s.empty())
		cout<<s.top();
	else cout<<"empty stack";
	return 0;
}

