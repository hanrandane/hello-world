#include<stdio.h>
#include<string.h>
int q(char* s){
	int l;
	int i=0;
	l=strlen(s);
	char w;
	while( i < l - i - 1 )
    {
        w= s[i];
        s[i] = s[l - i - 1];
        s[l - i - 1] = w;
        i++;
    }
}
void z(char* a,char *b,int max){
     int o[1000];
     for(int i=0;i<=max;i++){
     	o[i]=0;
	 }
	for(int i=0;i<max;i++){
		int y=a[i]-'0'+b[i]-'0';
		o[i]=o[i]+y;
		if(o[i]>=10){
			o[i+1]=o[i+1]+1;
			o[i]=o[i]%10;
		}
	}
	if(o[max]!=0)
	  printf("%d",o[max]);
	for(int i=max-1;i>=0;i--){
	printf("%d",o[i]);
	}
	printf("\n");
}

int main(){
   int r;
   scanf("%d",&r);
   for(int i=0;i<r;i++){
		char a[1000],b[1000];
        scanf("%s%s",a,b);
		int la=strlen(a);
		int lb=strlen(b);
		q(a);
		q(b);
        for(int k=la;k<1000;k++){  	
           	a[k]='0';
		   }
		for(int k=lb;k<1000;k++){
		   b[k]='0';
	      }

		z(a,b,max1);
			return 0;
} 
}



