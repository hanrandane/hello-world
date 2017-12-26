#include<stdio.h>
int main(){
	struct fenshu{
		int bian;
		int f1;
		int f2;
		int f3;
		int f4;
		int f5;
		int f6;
		float ping;
	};
	struct fenshu a[11];
	for(int i=1;i<11;i++){
		a[i].bian=i;
		scanf("%d",&a[i].f1);
		scanf("%d",&a[i].f2);
		scanf("%d",&a[i].f3);
		scanf("%d",&a[i].f4);
		scanf("%d",&a[i].f5);
		scanf("%d",&a[i].f6);
		a[i].ping=(a[i].f1+a[i].f2+a[i].f3+a[i].f4+a[i].f5+a[i].f6)/6.00;
	}
	for(int i=1;i<11;i++){
		for(int j=i+1;j<11;j++){
			if(a[i].ping<a[j].ping){
				a[0]=a[i];
				a[i]=a[j];
				a[j]=a[0]; 
			}
		}
	}
	for(int i=1;i<11;i++){
		printf("%d ",a[i].bian);
		printf("%.2f",a[i].ping);
		printf("\n");
	}
	return 0;
} 
