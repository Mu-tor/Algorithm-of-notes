#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;

const int n = 3,m = 5;
int main(){
	int a[n][m],k;
	cin>>k;
	fill(a[0],a[0]+n*m,k);
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			printf("%d",a[i][j]);
			if(j!=m-1)    printf(" ");
			else printf("\n");
		}
	}
	return 0;
}

