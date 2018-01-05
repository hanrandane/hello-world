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
int main(){
	char a[100],b[100];
	scanf("%s%s",a,b);
	int la=strlen(a);
	int lb=strlen(b);
	q(a);
	q(b);
	int a1[la];
    int b1[lb];
	for(int i=0;i<la;i++){
			a1[i]=a[i]-'0';
		}
	for(int i=0;i<lb;i++){
			b1[i]=b[i]-'0';
		}
    int c[lb][la+lb];
    	for(int i=0;i<lb;i++){
		for(int j=0;j<la+lb;j++){
			c[i][j]=0;
		}
	}
    for(int i=0;i<lb;i++){
    	for(int j=i,k=0;k<la;j++,k++){
    		c[i][j]=b1[i]*a1[k];
		}
	}
	int y[la+lb];
	for(int i=0;i<la+lb;i++)
	 y[i]=0;

	for(int k=0;k<la+lb;k++){
		int he=0;
		for(int i=0;i<lb;i++){
			he=he+c[i][k];
		}
		y[k]=he;
	}

	for(int k=0;k<la+lb;k++){
		int e=(y[k]/10);
			y[k]=(y[k]%10);
			y[k+1]=y[k+1]+e;
	}

	/*	int temp=0,q;
	int d[100]={0};
	for (int k=0;k<la+la;k++){
	  q=y[k]+temp;
	  d[k]=q%10;
	  temp=q/10;
	} 
	for (int i=0;i<la+lb+1;i++)
	  printf("%d ",d[i]);*/

	   printf("%d",y[la+lb-1]);
	for(int i=la+lb-2;i>=0;i--){
		printf("%d",y[i]);	
		}
	return 0;
}
