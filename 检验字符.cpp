#include<stdio.h>
int findString(char stringArray[][100],char *targetString,int n){
	int m=0;
	for(int i=1;i<=n;i++){
		if(stringArray[i][100]==*targetString)
		   m++;
	}
	  return m;
}
int main(){
	int a;
	scanf("%d",&a);
	char b[a][100];
	for(int i=1;i<=a;i++){
		scanf("%s",&b[i][100]);
	}
	char c;
	scanf("%s",c);
	char *d=&c;
	printf("%d",findString(b,d,a));
}
//����stringArrayΪ�ַ������飬
//targetStringΪҪ�ҵ��ַ�����
//n��������ַ���������
//����ֵ��Ŀ���ַ������ֵĴ�����
