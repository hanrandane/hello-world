#include<stdio.h>
int main(){
	int k;
	scanf("%d",&k);
	int a[k];
	for(int i=0;i<k;i++){
		scanf("%d",&a[i]);
	}
	for(int i=0;i<k;i++){
		int xiao=0;
		int da=0;
		for(int j=0;j<k;j++){
			if(a[i]>a[j]){
				xiao++;
			}
			if(a[i]<a[j]){
				da++;
			}
		}
		if(xiao==da){
			printf("%d",a[i]);
			break;
		}
		if(i==k-1){
			printf("-1");
		}
	}
	return 0;
	
}
