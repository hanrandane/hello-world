#include<stdio.h>
int main(){
	int m,n;
	scanf("%d %d",m,n);
	if(m>=1&&m<=5&&n>=1&&n<=5){
	for(int i=1;i<=n;i=i+1){
	printf("--**-**--");
}
    printf("\n");
    for(int i=1;i<=n;i=i+1){
	printf("-*--*--*-");
}
    printf("\n");
    for(int i=1;i<=n;i=i+1){
	printf("-*-----*-");
}
    printf("\n");
    for(int i=1;i<=n;i=i+1){
    printf("--*---*--");
}
    printf("\n");
    for(int i=1;i<=n;i=i+1){
    printf("---*-*---");
}
    printf("\n");
    for(int i=1;i<=n;i=i+1){
    printf("----*----");
}
    printf("\n");
}
   else{
   	printf("Input Error");
   }
}


