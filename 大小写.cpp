#include<stdio.h>
#include<string.h>
#include<stdio.h>
int q(char* b,int c){
	for(int i=c-1;i>=0;i--){
		if(b[i]>='a'&&b[i]<='z'){
		printf("%c",b[i]);
		}
	}
	printf("\n");
}
int main(){
      int k;
      scanf("%d",&k);
      getchar();//�ռ��س�  ��Ȼ�Ļ�gets��ȡ������ 
      for(int j=0;j<k;j++){
     	char b[100];
		gets (b);
		int c=strlen(b);
		q(b,c);
	}
    return 0;
} 
