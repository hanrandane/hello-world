#include<stdio.h>
#include<math.h>
int p(int a,int b){
	int c=(a-b)*(a-b);
	return c;
}
int main(){
	int k;
	scanf("%d",&k);
	for(int i=0;i<k;i++){
		int q,w,e,r1;
		int a,s,d,r2;
		int z,x,c;
		scanf("%d%d%d%d%d%d%d%d%d%d%d",&q,&w,&e,&r1,&a,&s,&d,&r2,&z,&x,&c);
		int y1=p(q,z)+p(w,x)+p(e,c);
		int y2=p(a,z)+p(s,x)+p(d,c);
		int d1=p(q,a)+p(w,s)+p(e,d);
		double juli=(d1+p(r1,0)-p(r2,0))/(2*sqrt(d1));
		double juli2=sqrt(d1)-juli;
		if(y1>p(r1,0)&&y2>p(r2,0)){
			printf("No");
			printf("\n");
		}
		else{
			if((y1-juli*juli)==(y2-juli2*juli2)){
			printf("No");
			printf("\n");
			}
			else{
			printf("Yes");
			printf("\n");
		}
		}
	}
	return 0;
}

