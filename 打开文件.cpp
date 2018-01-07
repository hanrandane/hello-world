#include<stdio.h>
#include<string.h>
int main(){
	FILE *fg;
	fg=fopen("D:test.txt","rt");
	char b[100];
    fgets(b,100,fg);
	int c=strlen(b);
	c--;
	int da=0,xiao=0,shu=0;
	char e[100];
	for(int i=0,j=0;i<c;i++){
		if(b[i]>='A'&&b[i]<='Z')
		da++;
		if(b[i]>='a'&&b[i]<='z'){
			xiao++;
			e[j]=b[i];
			j++;
		}
		if(b[i]>='0'&&b[i]<='9')
		shu++;
	}
	printf("%d %d %d",da,xiao,shu);
	fclose(fg);
	fg=fopen("D:test1.txt","wt");
	fputs(e,fg);
	fclose(fg);
	return 0;
	
}
