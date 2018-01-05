#include<stdio.h>
#include<string.h>
int q0(int n){
	if(n==1)
	printf("    *");
	else if(n==4)
	printf("*   *");
	else
	printf("*****");
}
int q1(int n){
	if(n==1||n==2||n==3||n==7)
	printf("    *");
	else if(n==5||n==6)
	printf("*    ");
	else
	printf("*   *");
}
int q2(int n){
	if(n==1||n==2||n==3||n==7)
	printf("    *");
	else if(n==5||n==6)
	printf("*    ");
	else
	printf("*   *");
}
int q3(int n){
	if(n==1||n==7)
	printf("    *");
	else if(n==0)
	printf("*   *");
	else
	printf("*****");
}
int q4(int n){
	if(n==2)
	printf("*    ");
	else if(n==0||n==6||n==8)
	printf("*   *");
	else
	printf("    *");
}
int q5(int n){
	if(n==2)
	printf("*    ");
	else if(n==0||n==6||n==8)
	printf("*   *");
	else
	printf("    *");
}
int q6(int n){
	if(n==1||n==4||n==7)
	printf("    *");
	else
	printf("*****");
}
int main(){
    int k;
    scanf("%d",&k);
    for(int i=0;i<k;i++){
    	char a[100];
    	scanf("%s",&a);
    	int la=strlen(a);
    	int b[la];
    	for(int j=0;j<la;j++){
    		b[j]=a[j]-'0';
		}
		for(int j=0;j<la;j++){
    		printf("%d",b[j]);
		}
		printf(":\n");
		for(int j=0;j<la;j++){
    		q0(b[j]);
    		if(j<la-1)
    		printf("  ");
		}
		printf("\n");
		for(int j=0;j<la;j++){
    		q1(b[j]);
    		if(j<la-1)
    		printf("  ");
		}
		printf("\n");
		for(int j=0;j<la;j++){
    		q2(b[j]);
    		if(j<la-1)
    		printf("  ");
		}
		printf("\n");
		for(int j=0;j<la;j++){
    		q3(b[j]);
    		if(j<la-1)
    		printf("  ");
		}
		printf("\n");
		for(int j=0;j<la;j++){
    		q4(b[j]);
    		if(j<la-1)
    		printf("  ");
		}
		printf("\n");
		for(int j=0;j<la;j++){
    		q5(b[j]);
    		if(j<la-1)
    		printf("  ");
		}
		printf("\n");
		for(int j=0;j<la;j++){
    		q6(b[j]);
    		if(j<la-1)
    		printf("  ");
		}
		printf("\n");
    }
	return 0;
} 
