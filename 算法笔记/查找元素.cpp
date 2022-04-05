#include<cstdio>
int nums[20];
int main(){
    int T,a;
    scanf("%d",&T);
    for(int i=0;i<T;i++){
        scanf("%d",&nums[i]);
    }
    scanf("%d",&a);
    for(int i=0;i<T;i++){
        if(a==nums[i]){
            printf("%d",i+1);
            return 0;
        }
    }
    printf("NO");
    return 0;
}
