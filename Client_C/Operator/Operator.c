#include<stdio.h>
int main()
{
	// 대입연산자
	// 연산자 기준 오른쪽 값을 왼쪽 메모리에 할당함
	// A+=B:A와B를 더해서 A에 넣는다.
	// A = A+B
	//---------------------------------------------------
	int intResult = 0;
	double doubleResult = 0.0;

	//산술 연산자
	//---------------------------------------------------
	// +연산자
	intResult = 3 + 4;
	doubleResult = 3.0 + 4.0;
	printf("%d\n", intResult);
	printf("%.1f\n", doubleResult);
	// -연산자
	intResult = 3 - 4;
	doubleResult = 3.0 - 4.0;
	printf("%d\n", intResult);
	printf("%.1f\n", doubleResult);
	// *연산자
	intResult = 3 * 4;
	doubleResult = 3.0 * 4.0;
	printf("%d\n", intResult);
	printf("%.1f\n", doubleResult);
	// /연산자
	//정수의 나누기 연산은 정수 몫만 반환한다.
	intResult = 3 / 4;
	doubleResult = 3.0 / 4.0;
	printf("%d\n", intResult);
	printf("%.1f\n", doubleResult);

	//% 연산자
	intResult = 3 % 4;
	doubleResult = 3 % 4;
	printf("%d\n", intResult);
	printf("%.1f\n", doubleResult);

	//부호 연산자
	intResult = +3;
	intResult = -3;

	//복합 대입연산자
	//--------------------------------------------
	intResult += 0; // 같은표현 : intResult = intResult +3;

    //증감 연산자
	//--------------------------------------------

	//증가 연산자
	printf("Start testing increament operator !\n");
	int Result = 0;
	//printf("Result = %d\n", Result);
	//Result ;
	//printf("Result = %d\n", Result);//후위 증가 연산자, 해당 연산자가 포함된 줄을 실행한 후에 연산한다.
	//Result++;
	//printf("Result = %d\n", Result);

	printf("Result : %d\n", Result);
	printf("Result : %d\n", --Result);
	printf("Result : %d\n", --Result);
	printf("Result : %d\n", --Result);
	//관계연산자
	//------------------------------------------------------------
	//참이면1 거짓이면 0
	//<,>,==,>=,<=
	printf("is %d smaller than %d ? %d\n", 3, 4, 3 < 4);
	//논리 연산자
	// 참의 기준 : 0이아님
	// 거짓의 기준 : 0
	//--------------------------------------------------
	int grade = 80;
	//&&(and 연산자)
	//피연산자 두개중에 하나만 참이면
	printf("is %d 30<Grade and 80 > Grade ? %d \n", grade, (30 < grade) && (80 > grade));
	//||(or 연산자)
	//피연산자 두개중에 하나라도 참이면 1 나머지경우 전부 0
	printf("is %d 30<Grade or 80 > Grade ? %d \n", grade, (30 < grade) || (80 > grade));
	//! (not 연산자)
	//단일연산자. ( 피연산자가 하나인 경우 )
	//피연산자 결과를 반전시킨다. 즉, 0이 아니면0, 0이면 1
	printf("is not 30<%d ?%d\n ", grade, !(30 < grade));
	//비트 연산자
	//-----------------------------------------------------------
	//&연산자 둘다 11이여야 1
	printf("%d & %d = %d\n", 5, 10, 5 & 10);
	
	//5= 00000101
	//10=00001010 &
	//|( 비트 or 연산자, 피연산자 2개.)
	//하나라도 1이면 1
	printf("%d|%d=%d\n", 5, 10, 5 | 10);

	//^(비트 xor 연산자, 피연산자 2개.)
	//비교할 두 비트가 하나만 참일때 (1일때) 해당비트 1, 나머지의 경우 0
	printf("%d^%d=%d\n", 8, 42, 8 ^ 42);

	//<<(비트 쉬프트 레프트)
	//모든 비트를 왼쪽으로 밈, 초과하는 비트는 사라짐
	printf("shift %d to the left by %d= %d.\n", 5, 3, 5 << 3);

	//>>(비트 쉬프트 라이트)
	//모든 비트를 오른쪽으로 밈, 초과하는 비트는 사라짐
	printf("shift %d to the right by %d= %d.\n", 5, 3, 5 >> 3);

	// (? :) 삼항연산자
	// ? 의 왼쪽 조건이 참이면 : 의 왼쪽결과, 거짓이면 : 의 오른쪽 결과를 반환함
	//3 < 2 ? 1 : 0;
	printf("is 3 smaller than 2 ?%d\n", 3 < 2 ? 1 : 0);

	// ,(콤마 연산자)
	//----------------------------------------------
	int commaResult = 0, a = 0, b = 0;
	commaResult = a = 3, b=4;
	printf("commaResult %d, a= %d, b=%d \n", commaResult, a, b);

	//sizeof() (사이즈 오브 연산자)
	// 메모리공간에서 소모하는 메모리크기를 바이트 단위로 계산해서 반환하는 연산자.
	// 자료형, 변수, 값 모두 인자로 사용가능
	//-------------------------------------------------------------
	int size_int = sizeof(int);
	int size_size_int = sizeof(size_int);
	int size_intConstant = sizeof(3);
	printf(" % d, % d, % d\n" , size_int, size_size_int, size_intConstant);

	
	//연산자의 우선순위
	// 단항 > 산술 > 관계 > 논리 > 대입 > 콤마
    
	// 형변환 연산자
	//-------------------------------------------------- 
	
	// 암시적 형변환 
	// 프로그래머가 따로 지정하지 않아도 컴파일러에 의해서 자동으로 처리되는 형변환을 칭함/ 자동변환이라고도함
	int num_int = 10;
	short num_short = 2;
	char num_char = 4;
	num_short + num_char; 
	//short(2byte) + char(1byte) 를 했지만 연산을 하기위해 레지스터에 데이터가 전달될때 정수형 연산 
	//레지스터의 단위크기만큼 자동으로 자료형이 int형으로 변환된 채로 연산을 하게 됨 즉 (short + char 를 하면 실제 int+int 를 수행함)
	//이때 short 또는 char처럼 연산용 레지스터의 데이터크기보다 작은 자료형이 연산용 레지스터
	//단위크기의 형태로 데이터 크기가 커지는것을 승격 (promotion) 이라고 함
	//이런경우 따로 프로그래머가 int 형으로 바꿔주지 않아도 되어서 암시형 형변환이라함.
	//정수형은 레지스터단위가 4byte, 실수형은 8byte임
	//정수형이지만 8byte짜리인 longlong은 레지스터를 두개씀
	printf("%d\n", sizeof(num_short + num_char));

	float num_float = 1.2;
	double num_double = 12.34;
	printf("%d\n", sizeof(num_float + num_double));
	printf("%lf\n",num_float+num_double );
	//오버플로우에 의한 암시적 형변환
	num_float = num_double;
		printf("%f\n", num_float);
 
	 

	// 명시적 형변환
	// 수식앞에 () 를 붙이고 () 안에 변환할 데이터형을 적어준다.
		int n;
		float f;
		
		f = (float)5 / 3;
		printf("%f\n", f);
		f = (float)5 / (float)3;
		printf("%f\n", f);

		n = 3.5 + 7.7;
		n = (int)(3.5 + 7.7);

    // 연산자에서 해볼만한거
    //1. 다양한 자료형끼리의 연산 ( 암시적 형변환 복습)
	//2. 여태 배운 모든 자료형에 대해서 sizeof()로 크기 확인하기
    //3. 1+2 : 다양한 자료형끼리 연산한것을 sizeof()로 크기 확인하기
	//4. 비트연산 결과를 출력하기 전에 계산해보고 출력결과가 맞는제 확인해보기

	return 0;
}