#include<cstdio>
#include<vector>
using namespace std;
int main(){
	vector<int> v;
	int n,num;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&num);
		v.push_back(num);
	}
	for(int i=0;i<(int)v.size();i++){
		printf("%d", v[i]);
        if (i < (int)v.size() - 1) {
            printf(" ");
        }
	}
	return 0;
}

