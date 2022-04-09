#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
	vector<int> v;
	int n,num;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>num;
		v.push_back(num);
	}
	reverse(v.begin(),v.end());
	for(int i=0;i<(int)v.size();i++){
		if(i!=0)    cout<<" ";
		cout<<v[i];
	}
	return 0;
}

