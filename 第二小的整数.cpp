#include<stdio.h>
int main(){
	int z;
	scanf("%d",&z);
	for(int r=1;r<=z;r=r+1){
	    int m;
		scanf("%d",&m);
		if(m==1){
			int a[1];
			scanf("%d",&a[0]);
			printf("ERROR\n");
		}
		else{
		int a[m];
		for(int j=0;j<m;j++){
			scanf("%d",&a[j]);
		}
		for(int y=0;y<m-1;y++){
		for(int j=y+1;j<m;j++){
			if(a[y]>a[j]){
				int q=a[y];
				a[y]=a[j];
				a[j]=q;
			}
		}
		}
		if(a[0]==a[m-1]){
			printf("ERROR\n");
		}
		else{
		for(int j=0;j<m-1;j++){
			if(a[j+1]>a[j]){
				printf("%d\n",a[j+1]);
				break;
		    	}
		   }
	}
	}
	}	
}


