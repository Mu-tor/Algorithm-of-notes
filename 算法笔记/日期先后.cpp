#include<cstdio>
int main(){
	int y1,m1,d1,y2,m2,d2;
	scanf("%d-%d-%d",&y1,&m1,&d1);
	scanf("%d-%d-%d",&y2,&m2,&d2);
	if(y1*10000+m1*100+d1<y2*10000+m2*100+d2)
		printf("YES");
	else printf("NO");
	return 0;
}

