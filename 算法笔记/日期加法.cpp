#include<cstdio>
int isRun(int &y){//�ж����� 
	if(!(y%400)||!(y%4)&&y%100)
		return 0;
	else return 1;
}
int month[13][2]={{0,0},{31,31},{29,28},{31,31},{30,30},{31,31},
		{30,30},{31,31},{31,31},{30,30},{31,31},{30,30},{31,31}};
int main(){
	int Y,M,D,d;
	scanf("%d-%d-%d",&Y,&M,&D);//��ȡ��ʼ����
	scanf("%d",&d);//Ҫ���ӵ�����
	while(d--){
		++D;
		if(D==month[M][isRun(Y)]+1){
			++M;
			D = 1;
		}
		if(M==13){
			++Y;
			M = 1;
		}
	} 
	printf("%d-%02d-%02d",Y,M,D);
	return 0;
}

