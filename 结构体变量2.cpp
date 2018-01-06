#include<stdio.h>
int main(){
	struct s{
		char ming[11];
		int gao;
		int ying;
		int zong;
	};
	int n;
	scanf("%d",&n);
	int m=n+1;
	struct s S[m];
	for(int i=0;i<n;i++){
		scanf("%s",&S[i].ming);
		scanf("%d",&S[i].gao);
		scanf("%d",&S[i].ying);
		S[i].zong=S[i].gao+S[i].ying;
	}
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
		if(S[i].zong<S[j].zong){
			S[m]=S[i];
			S[i]=S[j];
			S[j]=S[m];
	}
}
	}
	for(int i=0;i<n;i++){
		if(i>0){
			if(S[i].zong==S[i-1].zong){
				continue;
			}
		}
		printf("%s %d",S[i].ming,S[i].zong);
		if(i<n-1)
		printf("\n");
		
	}
	return 0;
	
}
