#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

const int MAX = 10000;
struct node {
	int left;
	int right;
} no[MAX];
bool cmp(node a,node b) {
	return a.right!=b.right?a.right<b.right:a.left>b.left;
}
int main() {
	int T;
	scanf("%d",&T);
	for(int i=0; i<T; i++) {
		scanf("%d%d",&no[i].left,&no[i].right);
	}
	sort(no,no+T,cmp);
	int r = no[0].right;
	int count = 1;
	for(int i=1; i<T; i++) {
		if(no[i].left>r) {
			count++;
			r = no[i].right;
		}
	}
	printf("%d",count);
	return 0;
}

