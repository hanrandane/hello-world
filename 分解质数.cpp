#include<stdio.h>
int main(){
	int k;
	scanf("%d",&k);
	for(int i=1;i<=k;i++){
		int h;
		scanf("%d",&h);
		int u=h;
		if(h==1)
		  printf("1");
		else{
			int o=0;
			int p[h];
		  for(int j=2;j<=u;j++){
		  	if(h%j==0){
		  	   p[o]=j;
		  	   o++;
		  	   h=h/j;
		  	   j--;
		  	}
		  }
		  for(int z=0;z<o;z++){
		  	printf("%d",p[z]);
		  	if(z<o-1) 
			  printf("*");
		  }
		}
		printf("\n");
	}
	return 0;
} 
