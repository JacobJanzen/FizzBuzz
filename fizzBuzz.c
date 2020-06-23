#include <stdio.h>
#include <string.h>
int main(void){
	int x = 100;
	const char FIZZ[] = "fizz";
	const char BUZZ[] = "buzz";
	char out[9];
	for(int i = 1; i <= 100; i++){
		out[0] = '\0';
		if(i%3==0)
			strcpy(out,FIZZ);
		if(i%5==0)
			strcat(out,BUZZ);
		printf("%s",out);
		if(i%3!=0&&i%5!=0)
			printf("%d",i);
		printf("\n");
	}
	return 0;
}
