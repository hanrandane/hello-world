//²éÕÒ×Ö·û´®
#include<stdio.h>
#include<string.h>
int main(){
	int k;
	scanf("%d",&k);
	char a[k][100];
	for(int i=0;i<k;i++){
		scanf("%s",&a[i]);
	}
	char b[100];
	scanf("%s",&b);
	int m=strlen(b);
	int j=0;
	for(int i=0;i<k;i++){
		int w=strlen(a[i]);
		if(w==m){
			int y=0;
	for(int p=0;i<w;i++){
	     if(a[i][p]!=b[p]){
	     	break;
		 }
		 else{
		 	if(p=w-1){
		 		j++;
			 }
		 }
	}
	}
	}
	printf("%d",j);
} 
