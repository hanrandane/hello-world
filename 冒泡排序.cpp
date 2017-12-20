#include<stdio.h>  //冒泡排序是多次相邻比较 
int main(){
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<=n-1;i=i+1){
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n-1;i++){
	for(int k=0,j=1;j<n;k++,j++){
			if(a[k]>a[j]){
				int zhong=a[k];
				a[k]=a[j];
				a[j]=zhong;
			}
	    }
	   for(int m=0;m<=n-1;m++){
	      printf("%d ",a[m]);
	   }
	   printf("\n");
	}
	return 0;
}
