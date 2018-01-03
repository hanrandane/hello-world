#include<stdio.h>
int main(){
	int m;
	scanf("%d",&m);
    int a[m];
	for(int n=0;n<m;n=n+1){
           scanf("%d",&a[n]);
		}
		int h=0;
	for(;h<m-1;h=h+1){
		int b=h+1;
		for(;b<m;b=b+1){
			if(a[b]<a[h]){
				int d=a[h];
				a[h]=a[b];
				a[b]=d;
			}
		}
		for(int e=0;e<m;e=e+1){
			printf("%d ",a[e]);
		}
		printf("\n");
	}
	return 0;
}
