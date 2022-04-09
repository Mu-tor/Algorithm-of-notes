#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
int main(){
	int n,k,a[100];
	cin>>n>>k;
	fill(a,a+n,k);
	for(int i=0;i<n;i++){
		cout<<a[i];
		if(i!=n-1)
   			printf(" ");
	}
	return 0;
}

