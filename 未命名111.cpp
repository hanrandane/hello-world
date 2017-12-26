#include<stdio.h>
int main(){
	char a[6][9]={"--**-**--",
                   "-*--*--*-",
                   "-*-----*-",
                   "--*---*--",
                   "---*-*---",
                   "----*----"};
    int a;
	scanf("%d",&a);
	if(a>0&&a<8){
	} 
	else{
		printf("Input Error");
	}
	return 0;
}
