#include<cstdio>
int isRun(int &y){
	if(!(y%400)||!(y%4)&&y%100)
		return 1;
	else return 0;
}
int month[13][2]{{0,0},{31,31},{28,29},{31,31},{30,30},{31,31},{30,30}
	,{31,31},{31,31},{30,30},{31,31},{30,30},{31,31}};
int main(){
	int Y,M,D,m=1,d=1,count=1;
	scanf("%d-%d-%d",&Y,&M,&D);
	while(m!=M||d!=D){
		++d;
		++count;
		if(d==month[m][isRun(Y)]+1){
			++m;
			d = 1;
		}
	}
	printf("%d",count);
	return 0;
}

