#include<stdio.h>
//�����������������ֱ��������ĸ����Լ���Ҫ�ƶ���λ������������һ������(1��0)�����ƶ��ķ��򡣹涨��1������0�����ơ�Ȼ������m��������Ϊ������Ԫ�ء�
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
