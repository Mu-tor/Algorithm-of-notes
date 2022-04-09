#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int n,k,num,ans[100];
	cin>>n>>k;
	for(int i=0;i<n;i++){
		cin>>num;
		ans[i] = num;
	}
	cout<<lower_bound(ans,ans+n,k)-ans+1;
	return 0;
}

