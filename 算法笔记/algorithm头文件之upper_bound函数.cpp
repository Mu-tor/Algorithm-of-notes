#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
	vector<int> v;
	int n,k,num;
	cin>>n>>k;
	for(int i=0;i<n;i++){
		cin>>num;
		v.push_back(num);
	}
	cout<<upper_bound(v.begin(),v.end(),k)-v.begin()+1;
	return 0;
}

