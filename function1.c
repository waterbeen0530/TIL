#pragma warning (disable : 4996)
#include <stdio.h>

/*void print() {
	printf("~!@#$ ^ &*()_ + |\n");
}
int main(){
	int a = 0;
	int i = 0;
	scanf("%d", &a);
	for (i = 0; i < a; i++) {
		print();
	}
}*/
//자가진단1

/*void print(int a) {
	printf("%.2lf", a * a * 3.14);
}
int main(int a) {
	scanf("%d", &a);
	print(a);
}*/
//자가진단2

/*void print(int a) {
	int tmp = 1;
	int i = 0, j = 0;
	for (i = 0; i < a; i++) {
		for (j = 0; j < a; j++) {
			printf("%d", tmp++);
		}
		printf("\n");
	}
}
int main() {
	int a;
	scanf("%d", a);
	print(a);
}*/
//자가진단3

/*int max(int a, int b, int c)
{
	int max = 0;

	if (a > b && a > c) {
		max = a;
	}
	else if (b > a && b > c) {
		max = b;
	}
	else {
		max = c;
	}
	return max;
}


int main()
{
	int n1, n2, n3;
	scanf("%d %d %d", &n1, &n2, &n3);
	printf("%d\n", max(n1, n2, n3));
	return 0;
}*/
//자가진단4

/*int pw(int a, int b)
{
	int i, tmp = 1;
	for (i = 1; i <= b; i++) {
		tmp *= a;
	}
	return tmp;
}

int main()
{
	int m, n;
	scanf("%d %d", &m, &n);
	printf("%d\n", pw(m, n));
	return 0;
}*/
//자가진단5

/*void gesan(int a, int b, char c) {
	if (c == '+')
	printf("%d + %d = %d", a, b, a + b);
	if (c == '-')
		printf("%d - %d = %d", a, b, a - b);
	if (c == '*')
		printf("%d * %d = %d", a, b, a * b);
	if (c == '/')
		printf("%d / %d = %d", a, b, a / b);
	return 0;
}
int main() {
	int a = 0, b = 0;
	char c = 0;

	scanf("%d %c %d", &a, &c, &b);
	gesan(a, b, c);
	return 0;
}*/
//자가진단6

/*void print(double a, double b) {
	if (a > b) {
		a /= 2;
		b *= 2;
		printf("%d %d", b, a);
	}
	if (a < b) {
		a *= 2;
		b /= 2;
		printf("%d %d", a, b);
	}
}
int main() {
	double a = 0, b = 0;
	scanf("%d %d", &a, &b);
	print(a, b);
}*/
//자가진단7

/*int a, b;
void cake() {
	printf("두 수를 입력하세요. ");
	scanf("%d %d", &a, &b);
}
void input(int a, int b)
{
	if (a > b) {
		int tmp = a;
		a = b;
		b = tmp;
	}
}
void output(int a, int b){
	int i;
	for (; a <= b; a++) {
		printf("== %ddan ==\n", a);
		for (i = 1; i <= 9; i++) {
			printf("%d * %d = %2d\n", a, i, a * i);
		}
		printf("\n");
	}
}
int main()
{
	int a = 0, b = 0, i = 0;
	input(a, b);
		output(a,b);
	return 0;
}*/
//자가진단8

