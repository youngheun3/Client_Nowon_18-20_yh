// #~ : 전처리기, 해당 소스코드 파일의 컴파일을 진행하기 전에 처리할 내용에 대해서 입력함.
#include <stdio.h> 
#include <windows.h>


// main 함수 : 운영체제에서 실행파일을 실행하면 가장먼저 호출되는 함수. 없으면 컴파일 안됨.
 //f(x) f는 함수 x는 매개변수
// 다중라인선택
// 단축키 : Alt + shift 한채로 키보드 화살표 방향키 또는 마우스 클릭/드래그

// int 는 함수의 기본형태
// "출력형태","함수이름" (매개변수)
// 매개변수가 없고 int 형을 출력하는 함수. main
// 제어권 반환   return
int main(void)
{
	printf("Hello World !");
	
	systen("pause");

	return 0;
	//통상적으로 0을 반환하면 정상적으로 해당 함수가 끝났다는것을 상위 함수에 알려주기 위함.
	//함수가 기능을 수행한 후에 문제가 있을경우 0이아닌 숫자를 반환하는 방식으로 사용한다. (검토용으로)
}