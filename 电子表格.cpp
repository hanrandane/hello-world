#include<stdio.h>
int main(){
	int r,c;
	scanf("%d%d",&r,&c);

	int b[r][c]; 
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			scanf("%d",&b[i][j]);
		}
	}
		int *a[r]=&b[0][0];
	int n;
	scanf("%d",&n);
	for(int k=0;k<n;k++){
		char p[2];
		scanf("%s",p);
		if(p[0]=='S'){
		int m,n;
		scanf("%d%d",&m,&n);
		if(p[1]=='R'){
			int b[c];
			for(int i=0;i<c;i++){
				b[i]=a[m][i];
				a[m][i]=a[n][i];
				a[n][i]=b[i];
			}
		} 
		else{
			int b[r];
			for(int i=0;i<r;i++){
				b[i]=a[i][m];
				a[i][m]=a[i][n];
				a[i][n]=b[i];
			}
		} 
		}
		if(p[0]=='D'){
		int m;
		scanf("%d",&m);
		if(p[1]=='R') {
			for(int i=0;i<c;i++){
				a[m][i]=-1;
			}
		}
		else  q3(a,m){
			for(int i=0;i<r;i++){
				a[i][m]=-1;
			}
		}
		}
		if(p[0]=='I'){
			int m;
			scanf("%d",&m);
		if(p[1]=='R') {
			
		}
		else	{
			
		}
		}
		
		
		
		
		
		
		
		
		
		
		
		
	}
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			
			printf("%d",b[i][j]);
		}
	}
	
 

}}
