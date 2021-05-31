#pragma warning (disable : 4996)
#include <stdio.h>
int main()
/*{
	int a[26] = { 0, };
	int i = 0;
	char input = 0;

	for (i = 0; i < 100; i++) {
		scanf(" %c", &input);
		if (input < 65 || 90 < input) break;
		a[input - 65]++;
	}
	for (i = 0; i < 26; i++) {
		if (a[i] > 0) {
			printf("%c : %d\n", 'A' + i, a[i]);
		}
	}
}*/
//자가진단1

/*{
	int num = 0, i = 0;
	int count[10] = { 0, };

	while (1) {
		scanf("%d", &num);
		if (num == 0) break;
		count[num / 10]++;
	}
	for (i = 0; i < 10; i++) {
		if (count[i] > 0) {
			printf("%d : %d\n", i, count[i]);
		}
	}
	return 0;
}*/
//자가진단2

/*{
	int fibo[100];
	fibo[0] = 100;
	scanf("%d", &fibo[1]);
	int i = 0, tmp = 0;
	for (i = 2; i < 100; i++) {
		fibo[i] = fibo[i - 2] - fibo[i - 1];
		if (fibo[i] < 0) break;
	}
	for (tmp = 0; tmp <= i; tmp++) {
		printf("%d ", fibo[tmp]);
	}
}*/
//자가진단3

/*{
	int a[3][5] =
	{ {5,8,10,6,4},{11,20,1,13,2},{7,9,14,22,3} };
	int i = 0, j = 0;
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 5; j++) {
			printf("%2d ", a[i][j]);
		}
		printf("\n");
	}
	return 0;
}*/
//자가진단4

/*{
	int a[2][4];
	int b[2][4];
	int i = 0, j = 0;
	printf("first array");
		for (i = 0; i < 2; i++) {
			for (j = 0; j < 4; j++) {
				scanf("%d", &a[i][j]);
			}
		}
	printf("second array");
		for (i = 0; i < 2; i++) {
			for (j = 0; j < 4; j++) {
				scanf("%d", &b[i][j]);
			}
		}
		for (i = 0; i < 2; i++) {
			for (j = 0; j < 4; j++) {
				printf("%d", a[i][j] * b[i][j]);
			}
			printf("\n");
		}
}*/
//자가진단5

/*{
	int a[5][4];
	int sum[5] = { 0, };
	int tmp;
	int i = 0, j = 0;
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 4; j++) {
			scanf("%d", &a[i][j]);
			sum[i] += a[i][j];
		}
	}
	for (i = 0; i < 5; i++) {
		if (sum[i] >= 320) {
			printf("pass\n");
			tmp++;
		}
	else printf("fail\n");
	}
	printf("Successful : %d", tmp++);
}*/
//자가진단6

/*{
	int a[5][5] = { {1,1,1,1,1} };
int i = 0, j = 0;

for (i = 1; i < 5; i++) {
	a[i][0] = 1;
	for (j = 1; j < 5; j++) {
		a[i][j] = a[i - 1][j] + a[i][j - 1];
	}
}
for (i = 0; i < 5; i++) {
	for (j = 0; j < 5; j++) {
		printf("%d ", a[i][j]);
	}
	printf("\n");
}
return 0;
}*/
//자가진단7

/*{
int a[6] = { 0, };
int i = 0;
int num = 0;
for (i = 0; i < 10; i++) {
	scanf("%d", &num);
	a[num - 1]++;
}
for (i = 0; i < 6; i++) {
	printf("%d : %d\n", i + 1, a[i]);
}
}*/
//형성평가1

/*{
int a[11] = { 0, };
int num = 0, i = 0;

for (i = 0; i < 100; i++) {
	scanf("%d", &num);
	if (num == 0) break;
	a[num / 10]++;
}
for (i = 10; i >= 0; i--) {
	if (a[i] > 0) {
		printf("%d : %d person \n", i * 10, a[i]);
	}
}
}*/
//형성평가2

/*{
	int a[10] = {0};
	scanf("%d %d", &a[0], &a[1]);

	int i;
	for(i=2;i<10;i++){
		a[i] = (a[i-1]+a[i-2])%10;
	}
	for(i=0;i<10;i++){
		printf("%d ", a[i]);
	}
}
*/
//형성평가3

/*{
int a[4][3] = { {3, 5, 9}, {2, 11, 5}, {8, 30, 10}, {22, 5, 1} };
int i = 0, j = 0;
int sum = 0;

for (i = 0; i < 4; i++) {
	for (j = 0; j < 3; j++) {
		printf("%d", a[i][j]);
		sum += a[i][j];
	}
	printf("\n");
}
printf("%d ", sum);
}*/
//형성평가4

/*{
int a[6][6] = { {0,1,0,1,0,1}, 0 };

int i, j;
for (i = 1; i < 5; i++) {
	for (j = 1; j < 6; j++) {
		a[i][j] = a[i - 1][j - 1] + a[i - 1][j + 1];
	}
}
for (i = 0; i < 5; i++) {
	for (j = 1; j < 6; j++) {
		printf("%d ", a[i][j]);
	}
	printf("\n");
}
}*/
//형성평가6