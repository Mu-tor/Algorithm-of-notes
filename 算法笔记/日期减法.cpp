#include<cstdio>
int isRun(int &y){
	if(!(y%400)||!(y%4)&&y%100)
		return 1;
	else return 0;
} 
int month[13][2]{{0,0},{31,31},{28,29},{31,31},{30,30},{31,31},{30,30},
	{31,31},{31,31},{30,30},{31,31},{30,30},{31,31}};
int main(){
	int Y,M,D,d;
	scanf("%d-%d-%d",&Y,&M,&D);
	scanf("%d",&d);
	while(d--){
		--D;
		if(D==0){
			--M;
			if(M==0){
				--Y;
				M=12;
			}
			D = month[M][isRun(Y)];
		}
	}
	printf("%d-%02d-%02d",Y,M,D);
	return 0;
}

