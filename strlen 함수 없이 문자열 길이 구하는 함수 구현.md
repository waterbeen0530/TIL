```c
#pragma warning(disable:4996)
//strlen 함수 없이 문자열 길이 구하는 함수 구현
#include <stdio.h>
// 함수 선언 부분
int GetLength(char* myStr);
int main()
{
	char buf[1000] = { 0 };
	printf("문자열 입력 : ");
	gets(buf); // 임의의 문자열을 입력
	int length = GetLength(buf); // 함수 호출
	printf("\n%s ", buf);
	printf("문자열 길이는 %d 입니다.\n", length);
	return 0;
}
// 함수 정의부분
int GetLength(char* myStr)
{
	int n;
	for (n = 0; myStr[n] != '\0'; n++);
	 return n;
}
```

