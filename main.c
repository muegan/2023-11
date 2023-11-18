#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void){
	
	int i;
	int grade[5];
	
	for(i=0; i<5; i++){
		printf("input value (%d) : ",i);
		scanf("%d", &grade[i]);
	}
	
	
	int sum=0;
	int *ptr=grade;
	
	for(i=0; i<5; i++){
		printf("grade[%i] = %i\n", i, *(ptr+i));
		sum+=grade[i];	
	}
	
	printf("average : %d", sum/5);
}
