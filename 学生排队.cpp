#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	n++;
	int a[n];
	for(int i=0;i<n;i++){
		a[i]=i;
	}
	int k;
	scanf("%d",&k);
	for(;k>0;k--){
		int p,q;
		scanf("%d%d",&p,&q);
	int i=1; 
	for(;i<n;i++){
		if(a[i]==p)//如果q为正，表示学号为p的同学向后移动q，如果q为负，表示学号为p的同学向前移动-q。
		 break;
	}
	if(q>0){
	for(int j=i;j<i+q;j++){
		int m=a[j];
		a[j]=a[j+1];
		a[j+1]=m;
	}
}
    else{
    	for(int j=i;j>i+q;j--){
    		int m=a[j];
    		a[j]=a[j-1];
    		a[j-1]=m;
		}
	}
	}
	for(int i=1;i<n;i++){
		printf("%d ",a[i]);
	}
	return 0;
}
