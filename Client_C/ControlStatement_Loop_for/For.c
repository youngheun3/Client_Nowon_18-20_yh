#include<stdio.h>
//for : 특정 조건에 따라 반복하면서 반복 할때마다 특정 함수를 수행할 수 있는 반복문
//형태 : for(초기값; 조건식; 증감식){조건이 참일때 실행할 내용}
//ctrl r 두번누르면 변수 전체 고쳐짐
int main(void) {
	//조건식이 없으면 무한루프가 됨.
	//증감식 위치의 연산이 올바르지않으면 무한루프가 됨.
	for (int count = 0; count < 5; count++ )
	{
		printf("%d\n", count);

		
	}
	for (int i = 0; ; i++)
	{
		if (i < 5) {
			printf("% d", i);
			continue;
		}
		else
		{
			printf("\n");
		}
		if (i>10)
		{
			printf(" index is bigger than 10, exit for loop\n");
			break;

		}
		printf("for loop is on going\n");


	}
	int i = sizeof(long);
	printf("%d\n", i);



	return 0;
}