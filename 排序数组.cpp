#include<stdio.h>
#include<string.h>
void sortChar(char* a,int l){
		for(int i=0;i<l-1;i++){
		for(int j=i+1;j<l;j++){
			if(a[i]>a[j]){
				char b;
				b=a[i];
				a[i]=a[j];
				a[j]=b;
			}
		}
	}
}
int main(){
	char a[1000];
	scanf("%s",&a);
	int l=strlen(a);
    sortChar(a,l);
	for(int i=0;i<l;i++){
		printf("%c",a[i]);
	}
	printf("\n");
	return 0;
}
