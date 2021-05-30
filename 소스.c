#pragma warning (disable : 4996)
#include <stdio.h>
int main()
/*{
	char a[10];
	int i = 0;
	for (i = 0; i < 10; i++) {
		scanf(" %c", &a[i]);
	}
	for (i = 0; i < 10; i++) {
		printf("%c", a[i]);
	}
	printf("\n");
}*/
//자가진단 1

/*{
	int i = 0, a[10];
	for (i = 0; i < 10; i++) {
		a[i] = i + 1;
	}
	for (i = 0; i < 10; i++) {
		printf("%d ", a[i]);
	}
}*/
//자가진단2

/*{
	int a[10];
	int i = 0;

	for (i = 0; i < 10; i++) {
		scanf(" %c", &a[i]);
	}
	printf("%c %c %c", a[0], a[3], a[6]);
}*/
//자가진단3

/*{
	int num[100], i = 0;
	for (i = 0; i < 100; i++) {
		scanf("%d", &num[i]);
		if (num[i] == 0) break;
	}
	i--;
	for (; i >= 0;i--) {
		printf("%d ",num[i]);
	}

}*/
//자가진단4

/*{
	int days[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
	int year, month;

	while (1) {
			printf("YEAR = ");
			scanf("%d", &year);
			printf("MONTH = ");
			scanf("%d", &month);

			if (month == 0) break;
			else if (month <= 0 || month > 12) {
				printf("잘못 입력 하였습니다\n\n");
			}
			else {
				if (year % 400 == 0) days[2] = 29;
				else if (year % 4 == 0 && year % 100 != 0) days[2] = 29;
				else days[2] = 28;
				printf("입력하신 달의 날 수는 %d 입니다.\n\n", days[month]);
			}
}*/
//예제5번

/*{
	int i;
	int a, b;
	float score[6] = { 85.6, 79.5, 83.1, 80.0, 78.2, 75.0 };
	scanf("%d %d", &a, &b);
	printf("%.1f", (score[a - 1] + score[b - 1]));
}*/
//자가진단5

/*{
	int num[10], Min = 1001, i = 0;
	for (i = 0; i < 10; i++) {
		scanf("%d", &num[i]);
		if (Min > num[i]) {
			Min = num[i];
		}
	}

	printf("%d\n", Min);

	return 0;
}*/
//자가진단6

/*{
	int num[10];
	int i, j, min = 10000, max = -1, min_t = min, max_t = max;
	for (i = 0; i < 10; i++) {
		scanf("%d", &num[i]);
	}
	for (i = 0; i < 10; i++) {
		if (num[i] >= 1 && num[i] < 100) {
			if (num[i] > max) {
				max = num[i];
			}
		}
		else if (num[i] >= 100 && num[i] <= 9999) {
			if (min > num[i]) {
				min = num[i];
			}
		}
	} if (min_t == min) min = 100;
	if (max_t == max) max = 100;
	printf("%d %d", max, min);

}*/
//자가진단7

/*{
	int score[10];
	int sum1 = 0, sum2 = 0;
	int i = 0;

	for (i = 0; i < 10; i++) {
		scanf("%d", &score[i]);
	}
	for (i = 0; i < 10; i++) {
		if (i % 2 != 0) {
			sum1 += score[i];
		}
		else {
			sum2 += score[i];
		}
	}

	printf("sum : %d\n", sum1);
	printf("avg : %.1f", sum2 / 5.0f);

	return 0;
}*/
//자가진단8

/*{
int num[10];
int i = 0, j = 0, tmp = 0;

for (i = 0; i < 10; i++) {
	scanf("%d", &num[i]);
}

for (i = 0; i < 10; i++) {
	for (j = i + 1; j < 10; j++) {
		if (num[i] < num[j]) {
			tmp = num[i];
			num[i] = num[j];
			num[j] = tmp;
		}
	}
}
for (i = 0; i < 10; i++) {
	printf("%d ", num[i]);
}
return 0;
}*/
//자가진단9


