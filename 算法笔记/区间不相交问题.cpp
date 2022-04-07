#include<iostream>
#include<string>
#include<algorithm>
using namespace std;


const int MAX = 10000;
struct sect{
	int left;
	int right;
}se[MAX];
bool cmp(sect a,sect b){
	return a.right!=b.right?a.right<b.right:a.left>b.left;
}
int main(){
	int T;
	scanf("%d",&T);
	for(int i=0;i<T;i++){
		scanf("%d%d",&se[i].left,&se[i].right);
	}
	sort(se,se+T,cmp);
	int r = se[0].right;
	int count = 1;
	for(int i=1;i<T;i++){
		if(se[i].left>=r){
			r = se[i].right;
			count++;
		}
	}
	printf("%d",count);
	return 0;
}

