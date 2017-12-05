#include<stdio.h>
#include<stdlib.h>
int main(){
	int h[3];
	char t;
	scanf("%s",&t);
  char const *str="t";
    n=atoi(str);
    printf("string=%sfloat=%f\n",str,n);
	int b;
	scanf("%d",&b);
	int c=1;
	for(int a=1900;a<b;a=a+1){
    if(a/100!=0&&a/4==0||a/400=0){
		c=c+2;
	}
	else{
		c=c+1;
	}
	}
	int mouth;
	if(mouth==1){
		c=c+3;
	}
	else{
	if(b/100!=0&&b/4==0||b/400=0){
		if(mouth==2){
			c=c+4;
		}
		else if(mouth==3){
			c=c;
		}
		else if(mouth==4){
			c=c+2;
		}
		else if(mouth==5){
			c=c+5;
		}
		else if(mouth==6){
			c=c;
		}
		else if(mouth==7){
			c=c+3;
		}
		else if(mouth==8){
			c=c+6;
		}
		else if(mouth==9){
			c=c+1;
		}
		else if(mouth==10){
			c=c+4;
		}
		else if(mouth==11){
			c=c+6;
		}
		else{
			c=c+2;
		}
	}
	else{
		if(mouth==2){
			c=c+3;
		}
		else if(mouth==3){
			c=c+6;
		}
		else if(mouth==4){
			c=c+1;
		}
		else if(mouth==5){
			c=c+4;
		}
		else if(mouth==6){
			c=c+6;
		}
		else if(mouth==7){
			c=c+2;
		}
		else if(mouth==8){
			c=c+5;
		}
		else if(mouth==9){
			c=c;
		}
		else if(mouth==10){
			c=c+3;
		}
		else if(mouth==11){
			c=c+5;
		}
		else{
			c=c+1;
		}
	}
}
   int day;
     c=c+day;
    if(c%7==0){
    	pritnf("Sunday");
	}
	else if(c%7==1){
		printf("Monday");
	}
	else if(c%7==2){
		printf("Tuesday");
	}
	else if(c%7==3){
		printf("Wednesday");
	}
	else if(c%7==4){
		printf("Thursday");
	}
	else if(c%7==5){
		printf("Friday");
	}
	else if(c%7==6){
		printf("Saturday");
	}
} 
