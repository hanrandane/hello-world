#include<stdio.h>//���qΪ������ʾѧ��Ϊp��ͬѧ����ƶ�q�����qΪ������ʾѧ��Ϊp��ͬѧ��ǰ�ƶ�-q��
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
		if(a[i]==p)
		 break;
	}
	if(q>0){
	for(int j=i;j<i+q;j++){
		int m=a[i];
		a[i]=a[i+1];
		a[i+1]=m;
	}
}
    else{
    	q=-q;
    	for(int j=i;j>i-q;j--){
    		int m=a[i];
    		a[i]=a[i-1];
    		a[i-1]=m;
		}
	}
		for(int z=1;z<n;z++){
		printf("%d ",a[z]);
	}
	i=1;
	}
	for(int i=1;i<n;i++){
		printf("%d ",a[i]);
	}
	return 0;
}
