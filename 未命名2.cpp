#include<stdio.h>
int main(){
	int a[13];
	for(int i=1;i<13;i++){
		scanf("%d",&a[i]);
	}
	int b=300;
	int c=0;
	for(int i=1;i<13;i++,b=b+300){
		b=b-a[i];
		if(b<0){
			printf("-%d",i);
			break;
		}
		if(b>=100){
			c=c+(b/100);
			b=b-(b/100)*100;
			
		}
		if(i==12){
			int q=b+c*120;//?
			printf("%d",q);
		}
	}
	return 0;
}
