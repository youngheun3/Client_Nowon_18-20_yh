#include <stdio.h>

// switch - case ���ǹ� : ��쿡 ���� �帧�� ������
//���� : switch ( ���� �Ű�����)
// case ����1 : ���ǸŰ����� = ����1�϶� �����Ұ��
// case ����2 : ���ǸŰ����� = ����2�϶� �����Ұ��
// case ����3 : ���ǸŰ����� = ����3�϶� �����Ұ��
// default : �� ��


int main(void)
   
{
	// n ���� 10���� ���ϴ� ����
	int n = 3;
	int sum = 0;
	switch (n)
	{
	case 1:
		sum += 1;
	case 2:
		sum += 2;
	case 3:
		sum += 3;
	case 4:
		sum += 4;
	case 5:
		sum += 5;

	default:
		break;
		
	}
	printf("%d\n", sum);
	// ���ĺ� �θ���
	char character = 'A';
	switch (character)
	{
	case 'A':
		printf("%c says : I'm here! \n", character);
		break; //break �б⹮ : ���� ����� �ݺ����� ������
	case 'B':
		printf("%c says : I'm here! \n", character);
		break;
	case 'C':
		printf("%c says : I'm here! \n", character);
		break;
	case 'D':
		printf("%c says : I'm here! \n", character);
		break;
	default:
		printf("Who r u %c ? \n", character);
		break;
	}



	return 0;

}