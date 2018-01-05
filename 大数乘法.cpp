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
     int v;
    scanf("%d",&v);
    for(int w=0;w<v;w++){
	char a[100000],b[1000000];
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
	int y[la+lb+1];
	for(int i=0;i<la+lb;i++)
	 y[i]=0;

	for(int k=0;k<la+lb;k++){
		int he=0;
		for(int i=0;i<lb;i++){
			he=he+c[i][k];
		}
		y[k]=he;
	}
	for(int k=0;k<la+lb+1;k++){
		int e=(y[k]/10);
			y[k]=(y[k]%10);
			y[k+1]=y[k+1]+e;
	}
     for(int i=la+lb-1;i>=0;i--){
             if(i==la+lb-1&&y[i]==0)
                 continue;
            printf("%d",y[i]);
}
   printf("\n");
}
	return 0;
}
