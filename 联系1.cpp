#include<stdio.h>
#include<string.h>
int main(){
	char a[12]={"End of file"};
     	char b[30];
		gets(b);
		getchar();
	     char* d = "...";
    char *p;
    p = strtok(b,d);
    int i=1;
    while(p)
    {
        if(p-'0'<0||p-'0'>255){
        	printf("NO");
        	break;
		}
        p=strtok(NULL,d);
        i++;
    }
    if(i==4){
    	printf("YES");
	}
} 
