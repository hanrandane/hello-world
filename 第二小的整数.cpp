#include<stdio.h>
int main(){
	int k;
	scanf("%d",&k);
	for(int j=1;j<=k;j++){
	int h;
	scanf("%d",&h);
	if(h==1){
	   printf("ERROR\n");
}
	else{
	int a[h];
	for(int i=0;i<h;i++){
		scanf("%d",&a[i]);
	}
	for(int m=0,n=1;m<h-1;m++,n++){
		int q=m,p=n;
	for(;q<h-1;q++,p++){
		if(a[q]>a[p]){
			int y=a[q];
			a[q]=a[p];
			a[p]=y;
		}
	}
}
	if(a[h-2]==a[h-1]){
		printf("ERROR\n");
	}
	else{
	for(int w=0;w<h-1;w++){
		if(a[w]<a[w+1]){
		printf("%d",a[w+1]);
		break;
	    }
	}
}	
}
}
} 
