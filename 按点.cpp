#include<stdio.h>
int main (){
	int n,m;
	scanf("%d%d",&n,&m);
	int a[n][m];
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			scanf("%d",&a[i][j]);
		}
	}
	int max,h[n],h2[n];//列  行 
	int min,l[m],l2[m];//行  列 
	for(int i=0;i<n;i++){
		max=a[i][0];
		h[i]=0;
		h2[i]=i;
		for(int j=1;j<m;j++){
			if(a[i][j]>max){
				max=a[i][j];
				h[i]=j;
			}
		}
	}
	for(int j=0;j<m;j++){
		min=a[0][j];
		l[j]=0;
		l2[j]=j;
		for(int i=0;i<n;i++){
			if(a[i][j]<min){
				min=a[i][j];
				l[j]=i;
			}
		}
	}

	int y=0;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(h2[i]==l[j]){
				if(h[i]==l2[j]){
					int g,f;
					g=h2[i];
					f=h[i];
                    printf("a[%d][%d]=%d",g,f,a[g][f]);
                    printf("\n");
					y++;
				}
			}
		}
	}
	if(y==0){
	printf("NO");
	printf("\n");
}
 return 0;
	
}
