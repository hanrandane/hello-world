#include <stdio.h>
#include<stdlib.h>
int main(){
	printf("选一个你喜欢的整数:");
	int a;
	scanf("%d",&a); 
	if(a<=10){
		printf("我就知道你选的是%d\n",a);
		system("color 4A"); 
		printf("那么再选择一个颜色：1.白色  2.蓝色  3.紫色\n");
			int b;
        	scanf("%d",&b);
		    printf("你选的是不是这个%d呀\n",b);
		    printf("接下来 你看看字的颜色变没变成你选的颜色啊 哈哈\n");
		    system("pause"); 
		if (b=1){
				system("color 4F"); 
		}
		 else if(b=2){
		 	system("color 49");
		 }
		 else if(b=3){
		 	system("color 45");
		 }
                      printf("  iiiiiiiiiii\n");
                      printf("  |:H:a:p:p:y:|\n");
                      printf("__|___________|__\n");
                    printf("|^^^^^^^^^^^^^^^^^|\n");
                    printf("|:B:i:r:t:h:d:a:y:|\n");
                  printf("   iiiiiiiiiiiiiiiiiii\n");
                   printf(" |||||||H|A|P|P|Y|||||||\n");
                 printf(" __|_____________________|__\n");
                 printf("|\/\/\/\/\/\/\/\/\\/\/\/\/\/|\n");
                 printf(" |||||||B|I|R|T|H|D|A|Y||||||| \n");
                 printf("|,,,,,,,,,,,,,,,,,,,,,,,,,,,|\n");
                printf("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@　 \n");
                system("pause");
                printf("原谅我能力有限，，，花了一个小时多写出这个来\n");
				 system("pause"); 
				printf("总之   春花     生日快乐") ;
				
	}
	else{
		printf("不会这么没默契吧，，那么你就换一个再来一次吧 哈哈"); 
	} 
	
} 
