#include<stdio.h>
int main(){
	int m,l;
	scanf("%d%d",&l,&m);
	int a[m],b[m];
	for(int i=0;i<m;i++){
		scanf("%d",&a[i]);
		scanf("%d",&b[i]);
	}
	int s=0;
	for(int i=0;i<m;i++){
		for(int j=1;j<m;j++){
			if(a[j]>b[i]){  
				s=s+b[i]-a[i]+b[j]-a[j]+2;
			}
			else if(a[j]<=b[i]&&a[j]>=a[i]){
				if(b[j]>=b[i]){
				s=s+b[j]-a[i]+1;
			}
			   else{
			   	s=s+a[j]-a[i]+1;
			   }
			}
			else{
				if(b[j]>=b[i]){
						s=s+b[j]-a[j]+1;
				}
				else if(b[j]<=b[i]&&b[j]>=a[i]){
					s=s+b[i]-a[j]+1;
				}
				else{
					s=s+b[i]-a[i]+b[j]-a[j]+2;
				}
			}
		}
		
	}
	s=l-s;
	printf("%d",s);
	return 0;
	
}
