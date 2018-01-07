#include<stdio.h>
#include<string.h>
int main(){
	char a[100];
	while(scanf("%s",&a)!=EOF){
		int chang=strlen(a);
		int r[5];
		char e='.';
		int dian=0;
		for(int i=0,j=1;i<chang;i++){
			if(a[i]==e) {
				dian++;
				r[j]=i;
				j++;
			}
		}
		r[0]=-1;
		r[4]=chang;
		if(dian!=3)  printf("NO\n");
		else{
			int o[4];
			for(int i=0;i<4;i++){
				o[i]=r[i+1]-r[i]-2;
			}
			
			
			
			
			
			
			
			
			
		}
	}
	return 0;
} 
