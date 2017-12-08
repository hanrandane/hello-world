#include<stdio.h>
//先输入两个正整数分别代表数组的个数以及将要移动的位数。接着输入一个整数(1或0)代表移动的方向。规定：1向左移0向右移。然后输入m个整数作为组数的元素。
int main(){
	int m,n;
	scanf("%d%d",&m,&n);
	int a[m],c[m];
	int q;
	scanf("%d",&q);
	for(int b=0;b<m;b=b+1){
		scanf("%d",&a[b]);
	}
	if(q==1){
		for(int i=0,j=n;i<m-n;i=i+1,j=j+1){
		c[i]=a[j];
	   }
	   for(int i=m-n,j=0;i<m;i=i+1,j=j+1){
		c[i]=a[j];
	   }
	}
	else if(q==0){
	  for(int i=m-n,j=0;j<n;i=i+1,j=j+1){
		c[j]=a[i];
	   }
	   for(int i=0,j=n;i<=n;i=i+1,j=j+1){
		c[j]=a[i];
	   }
	}
	for(int b=0;b<m;b=b+1){
		printf("%d ",c[b]);
	}
}
