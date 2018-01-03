#include<stdio.h>
#include<string.h> 
int qu(int m){
	int y=m;
	char a[m];
	char b[3]={2,3,5};
	for(int i=2;i<m;i++){
		if(m%i==0){
			a[0]='i';
			i--;
			m=m/2;
		}
	}
	if(strcmp(a,b)){
		printf("%d ",y);
	}
	else{
		return 0;
	}
	
}
int main(){
	int k;
	scanf("%d",&k);
	for(int i=0;i<k;i++){
		int n;
		scanf("%d",&n);
		printf("1 ");
		for(int j=2;j<=n;j++){
			qu(j);
		}
		printf("\n");
	}
	return 0;
} 
