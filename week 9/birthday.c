//birthday.c
#include <stdio.h>

int main(void) {
	short birthday;
	short* ptr; //포인터 변수 선언함
	ptr = &birthday; //birthday 변수의 주소를 ptr변수에 대입함

	//변수 정의
	int intVar = 42;
	float floatVar = 3.1415972;
	char charVar = 'A';
	double doubleVar = 9.81; //중력의 속도?

	//포인터 정의
	int* intPtr = &intVar;
	float* floatPtr = &floatVar;
	char* charPtr = &charVar;
	double* doublePtr = &doubleVar;

	// %p 성식은 메모리 주소를 16진수 형식으로 출력함
	printf("birthday 변수의 주소는 %p입니다.\n", ptr);

	// 변수 값과 주소를 출력함
	printf("intVAr 변수 값 : %d,		 \t주소 : %p\n", *intPtr, intPtr);
	printf("floatVAr 변수 값 : %.5f,	 \t주소 : %p\n", *floatPtr, floatPtr);
	printf("charVAr 변수 값 : %c,		 \t주소 : %p\n", *charPtr, charPtr);
	printf("doubleVAr 변수 값 : %.2f,	 \t주소 : %p\n", *doublePtr, doublePtr);

	return 0;
}