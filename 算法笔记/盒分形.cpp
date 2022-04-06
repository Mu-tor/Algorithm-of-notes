#include<iostream>
#include<cstring>
#include<algorithm>
#include<cmath>
using namespace std;

const int MAX = 3*3*3*3*3*3;
char ans[MAX][MAX];
void Box(int n,int x,int y){
	if(n==1){
		ans[x][y] = 'X';
	}else{
		int s = (int)pow(3.0,1.0*(n-2))*2;
		Box(n-1,x+s,y+s);//右下
		Box(n-1,x+s,y);//左下
		Box(n-1,x,y+s);//右上
		Box(n-1,x+(s/2),y+(s/2));//中间
		Box(n-1,x,y);//左上
	}
}
int main(){
	int n,num;
	scanf("%d",&n);
	num = (int)pow(3.0,1.0*(n-1));
	memset(ans,' ',sizeof(ans));
	Box(n,0,0);
	for(int i=0;i<num;i++){
		for(int j=0;j<num;j++){
			printf("%c",ans[i][j]);
		}
		printf("\n");
	}
	return 0;
}

