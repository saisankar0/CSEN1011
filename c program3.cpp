#include<stdio.h>
int main()
{
	int number, i = 0, next, first=0, second = 1;
	printf("\n please enter the range number: ");
	scanf("%d",&number);
	while(i < number){
		if(i <=1){
			next = i;
		}
		else{
			next = first + second;
			first = second;
			second= next;
					}
			printf("%d\t",next);
			i++;
	}
	return 0;
}

