#include<stdio.h>
int main(){
	int h;
	scanf("%d",&h);
	for(;h>0;h--){
		int m,k;
		scanf("%d%d",&m,&k);
		int a[m];
		for(int i=0;i<m;i++){
			scanf("%d",&a[i]);
		}
		for(int i=0;i<m;i++){
			for(int j=i+1;j<m;j++){
				if(a[i]<a[j]){
					int zhong=a[i];
					a[i]=a[j];
					a[j]=zhong;
				}
			}
		}
		if(k<0){
			printf("error\n");
		}
		else if(k==1){
			printf("%d\n",a[0]);
		}
		else{
			for(int i=1;i<m;i++){
				if(a[i]<a[i-1]){
					k--;
				}
				if(k==1){
					printf("%d\n",a[i]);
					break;
				}
				if(k!=1&&i==m-1){
					printf("error\n");
					break;
				}
			}
	}
}
	return 0;
}
