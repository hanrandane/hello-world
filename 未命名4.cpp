#include<stdio.h>
int y(int h,int a){
	int q=1;
	for(int b=1;b<=h;b++){
		q=q*a;
	}
	return q;
}
int e(float b,int c,int d){
	if(b<2*y(c,0.98)){
		c=c;
	}
	else{
		c=c+e((b-2*d),1,0.98);
	}
	return c;
}

int main(){
	float a;
	scanf("%f",&a);
	int c=e(a,1,0.98);
	printf("%d",c);
	return 0;
}




#include<stdio.h>
int e(float b,int c){
    if(b<2*0.98*c){
        c=c;
    }
    else{
        c=c+e((b-2*0.98*c),1);
    }
    return c;
}
int main(){
    float a;
    scanf("%f",&a);
    int c=e(a,1);
    printf("%d",c);
    return 0;
}
