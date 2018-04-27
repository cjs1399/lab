/*
주제 : for문의 중첩
작성일 : 2018.04.25
작성자 : 천성우
*/

#include <stdio.h>
int main() {
	int a, b, fact; // 정수형 변수 a, b, fact 선언
	for (a = 2; a <= 5; a++) { // for문 정의
		fact = 1; //fact에 a값을 곱할때 0값이 되지 않도록 1로 선언
		for (b = 1; b <= a; b++) { // for문 정의
			fact *= b; // fact 에 b값을 저장
		}
		printf("%d! = %d\n", a, fact); // a값과 fact값 출력
	}
	return 0; // 0으로 초기화
}