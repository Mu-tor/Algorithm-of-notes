#include<cstdio>
int isRun(int &y){
	if(!(y%400)||!(y%4)&&y%100)
		return 1;
	else return 0;
}
int month[13][2]={{0,0},{31,31},{28,29},{31,31},{30,30},{31,31},{30,30}
	,{31,31},{31,31},{30,30},{31,31},{30,30},{31,31}};
int greatDay(int &y,int &m,int &d,int flag){//大于今天几天 
	int Y=2022,M=4,D=5,count=0;
	if(flag){//对调 
		Y=y;y=2022;M=m;m=4;
		D=d;d=5;
	}
	while(Y!=y||M!=m||D!=d){
		++count;
		++D;
		if(D==month[M][isRun(Y)]+1){
			++M;
			D=1;
		}
		if(M==13){
			++Y;
			M=1;
		}
	}
	return count;
}
int week[8]={0,1,2,3,4,5,6,0};
int main(){
	int y,m,d,count,flag;
	scanf("%d-%d-%d",&y,&m,&d);
	flag = y*10000+m*100+d<20220405?1:0;
	count=greatDay(y,m,d,flag);
	if(flag){
		count=(2+(7-(count%7)))%7;
	}else count=(2+count)%7;
	printf("%d",week[count]);
	return 0;
}
