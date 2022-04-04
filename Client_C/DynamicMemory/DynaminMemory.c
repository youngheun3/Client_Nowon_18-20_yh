#include <stdio.h>
#include <stdlib.h>
// 동적 메모리 할당 ( 힙 영역에 메모리를 동적으로 할당)
// 동적으로 메모리를 할당해주는 함수 :
// malloc(할당 메모리 byte 크기);
//
//쓰는 이유:
//배열의 크기가 같은경우 다양한 종류나 값이 할당되어야 할때,
//크기를 미리 정해줄 수 없고, 조건에 따라 맞는 크기를 확보해야 하는 경우가 있으므로
//
//calloc:동적으로 매모리를 할당한 후에 0으로 초기화 해주는함수
//
//realloc(포인터, 변경할 메모리 byte크기)
//쓰는이유: 이미할당했지만 할당한 공간의 크기를 변경하고 싶을때
//기존의 쓰던 주소를 유지함.
//만약 포인터가 null일 경우, malloc과 똑같이 작용한다.



int main() {
	int* p;
	p = malloc(sizeof(int));
	malloc(sizeof(int));

	
	//free
	//인자로 넣어준 포인터의 값 (주소)에 접근해서
	//포인터의 자료형 크기만큼 메모리를 해체한다.

	free(p);

	return 0;
}