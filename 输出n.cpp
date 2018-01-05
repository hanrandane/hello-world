#include<stdio.h>
#include<string.h>
int cunzai[1000];
void zuhe(int *p,int n,int end)
{
	
	if(n>end)
	{
		return;
	}
	for(int i=1;i>=0;i--)
	{
		cunzai[n]=i;
		zuhe(p,n+1,end);
		if(n==end)
		{
			printf("-->");
			for(int k=0;k<=end;k++)
			{
				if(cunzai[k]==1)
				printf(" %d",p[k]);
			}
			printf("\n");
		}
	}
	
	
}

int main ()
{
	int m,n;
	scanf("%d",&m);
	for(int v=0;v<m;v++)
	{
		int arr[1000];
		memset(cunzai,0,sizeof(int));
		scanf("%d",&n);
			
			for(int i=0;i<n;i++)
			{
				scanf("%d",&arr[i]);
			}
			
	 zuhe(arr,0,n-1);
	 } 
	
 }

