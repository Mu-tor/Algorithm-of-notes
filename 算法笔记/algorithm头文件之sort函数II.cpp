#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool cmp(int a,int b){
	return a>b;
}
int main(){
	vector<int> v;
	int n,num;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>num;
		v.push_back(num);
	}
	sort(v.begin(),v.end(),cmp);
	for(int i=0;i<n;i++){
		cout<<v[i];
		if(i<n-1) cout<<" ";
	}
	return 0;
}

