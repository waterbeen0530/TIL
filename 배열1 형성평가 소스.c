#pragma warning (disable : 4996)
#include <stdio.h>
int main()
/*{
char c[10];
int i;

for (i = 0; i < 10; i++) {
	scanf(" %c",& c[i]);
}
for (i = 9; i >= 0; i--) {
	printf("%c ", c[i]);
}
printf("\n");

return 0;
}*/
//형성평가1

/*{
int a[5];
int i;
for (i = 0; i < 5; i++) {
	scanf("%d", &a[i]);
}
printf("%d", a[1 - 1] + a[3 - 1] + a[5 - 1]);
}*/
//형성평가2

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

printf("odd : %d\n", sum2);
printf("even : %d\n", sum1);

return 0;
}*/
//형성평가3

/*{
int num[100];
int i = 0, tmp = 0;

for (i = 0; i < 100; i++) {
	scanf("%d", num[i]);
	if (num[i] == -1) break;
}

if (i < 3) {
	tmp = 0;
}
else {
	tmp = i - 3;
}
for (; tmp < i; tmp++) {
	printf("%d ", num[tmp]);
}
}*/
//형성평가4

/*{
	double a[6];
	double sum = 0;
	int i = 0;

	for (i = 0; i < 6; i++) {
		scanf("%lf", &a[i]);
		sum += a[i];
	}
	printf("%.1lf ", sum / 6.0);

}*/
//형성평가5

/*{
	char a[6] = { 'J','U','N','G','O','L' };
	int i = 0;
	char b = 0;

	scanf(" %c", &b);

	for (i = 0; i < 6; i++) {
		if (a[i] == b) {
			printf("%d", i);
			return 0;
		}
	}
	printf("none");

}*/
//형성평가6

/*{
int a[100];
int i = 0;
int max = 0, min = 0;
for (i = 0; i < 100; i++) {
	scanf("%d", &a[i]);
	if (a[i] == 999) break;
	if (min > a[i]) min = a[i];
	if (a[i] > max) max = a[i];
}
printf("max : %d\n", max);
printf("min : %d", min);
}*/
//형성평가7

/*{
int a[100];
int i = 0, sum = 0;
double avg = 0;
int result = 0;

for (i = 0; i < 100; i++) {
	scanf("%d", &a[i]);
	if (a[i] == 0) break;
	if (a[i] % 5 == 0) {
		result++;
		sum += a[i];
	}
}
avg = sum / result;
printf("Multiples of 5 : %d\n", result);
printf("sum : %d\n", sum);
printf("avg : %.1lf", avg);
}*/
//형성평가8

/*{
int a[100];
int i = 0, tmp = 0;
int sum = 0;

for (i = 0; i < 100; i++) {
	scanf("%d", &a[i]);
	if (a[i] == 0) break;
	sum++;
}
printf("%d\n", sum);
for(tmp=0;tmp<i;tmp++){
	if (a[tmp] % 2 == 0) a[tmp] /= 2;
	else a[tmp] *= 2;
	printf("%d ", a[tmp]);
}
}*/
//형성평가9

/*{
int a[100];
int i = 0, j = 0;
int num = 0, tmp = 0;

scanf("%d", &num);

for (i = 0; i < num; i++) {
	scanf("%d", &a[i]);
}
for (i = 0; i < num-1; i++) {
	for (j = i + 1; j < num; j++) {
		if (a[i] < a[j]) {
			tmp  = a[i];
			a[i] = a[j];
			a[j] = tmp;
		}
	}
}
for (i = 0; i < num; i++) {
	printf("%d\n", a[i]);
}
}*/
//형성평가A
