#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

const int MAX = 26;
int nums[MAX][MAX];
int n,num=1;
//·½Ïò
int dir[4][2]={{0,1},{1,0},{0,-1},{-1,0}};
int d=0;
void F(int x,int y){
	if(nums[x][y]||x>n||y>n||y<1){
		return;
	}else{
		nums[x][y] = num++;
		while(num<=n*n){
			F(x+dir[d%4][0],y+dir[d%4][1]);
			d++;
		}
	}
}
int main(){
	scanf("%d",&n);
	F(1,1);
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			printf("%d",nums[i][j]);
			if(j<n) printf(" ");
		}
		printf("\n");
	}
	return 0;
}
