/*
���� : for���� ��ø
�ۼ��� : 2018.04.25
�ۼ��� : õ����
*/

#include <stdio.h>
int main() {
	int a, b, fact; // ������ ���� a, b, fact ����
	for (a = 2; a <= 5; a++) { // for�� ����
		fact = 1; //fact�� a���� ���Ҷ� 0���� ���� �ʵ��� 1�� ����
		for (b = 1; b <= a; b++) { // for�� ����
			fact *= b; // fact �� b���� ����
		}
		printf("%d! = %d\n", a, fact); // a���� fact�� ���
	}
	return 0; // 0���� �ʱ�ȭ
}