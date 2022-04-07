#include<cstdio>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
	vector<int> v1,v2;
	int n,m,num;
	scanf("%d%d",&n,&m);
	for(int i=0;i<n;i++){
		scanf("%d",&num);
		v1.push_back(num);
	}
	for(int i=0;i<m;i++){
		scanf("%d",&num);
		v2.push_back(num);
	}
	int mi = min((int)v1.size(),(int)v2.size());
	bool flag = true;
	for(int i=0;i<mi;i++){
		if(v1[i]>v2[i]){
			flag = false;
			break;
		}
	}
	printf(flag?"Yes":"No");
	return 0;
}

