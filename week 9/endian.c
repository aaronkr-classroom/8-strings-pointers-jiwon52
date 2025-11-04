//endian.c
#include <stdio.h>

void check_endian() {
	//첫 메모리 주소가 0x12이면 빅 앤디언이고
	//0x78치면 리틀 앤디언이다.
	unsigned int num = 0x12345678; //16진법 (4바이트)
	unsigned char* byte_ptr = (unsigned char*)&num;

	//모든 바이트주소와 값을 출력
	for (int i = 0; i < sizeof(num); i++) {
		printf("%p   0x%0x\n", (byte_ptr + i), byte_ptr[i]);
	}

	//첫 바이트 주소를 확인하고 앤디언니스 출력하기
	if (byte_ptr[0] == 0x12) {
		printf("\nThis is BIG-endian!");
	}
	else if (byte_ptr[0] == 0x78) {
		printf("\nThis is_little_endian...");
	}
	else {
		printf("\nUnknown endian!ㅠㅠ");
	}
}

void main(void) {
	check_endian();
	return 0;
}