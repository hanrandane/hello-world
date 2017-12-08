#include<stdio.h>
int main(){
	int t,s;
	scanf("%x%x",&t,&s);
	if(t>s)
	  printf("1\n");
	else if(t<s)
	  printf("-1\n");
	else
	  printf("0\n");
	return 0;
}
