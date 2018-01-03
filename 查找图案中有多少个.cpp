#include<stdio.h>
int jisuan(int n){
	char a[10][10]={"--**-**--",
                    "-*-*****-",
                    "-*----**-",
                    "--*--**--",
                    "---***---",
                    "----*----"};
    char b='-';
    int x=0;
    for(int i=0;i<6;i++){
    	for(int j=0;j<9;j++){
    		int y=0;
    	if(a[i][j]=='*')
    	{
    		if(a[i-1][j-1]==b){
			 y++;
		}
    		if(a[i][j-1]==b)  {
			 y++;
		}
    		if(a[i+1][j-1]==b) {
			 y++;
		}
    		if(a[i-1][j]==b){
			 y++;
		}
    		if(a[i+1][j]==b){
			 y++;
		}
    		if(a[i-1][j+1]==b){
			 y++;
		}
    		if(a[i][j+1]==b){
			 y++;
		}
    		if(a[i+1][j+1]==b){
			 y++;
		}
    		if(y==n) {
			x++;
			}
   	}}
	}
	printf("%d\n",x);
	return 0;
}
int main(){
	int m;
	scanf("%d",&m);
	if(m>0&&m<8){
	jisuan(m);
}
   else
    printf("Input Error\n");
	return 0;
}
