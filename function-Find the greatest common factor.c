#pragma warning (disable : 4996)
#include <stdio.h>
//최대 공약수 구하기
int GCD(int a, int b);
void Input(int arr[], int len);
long long SumGCD(int arr[], int len);
int main() {
    int TC, num;
    long long int result;
    int arr[101] = { 0 };
    scanf("%d", &TC);
    while (TC--) {
        scanf("%d", &num);
        Input(arr, num);
        result = SumGCD(arr, num);
        printf("%lld\n", result);
    }
    return 0;
}
void Input(int arr[], int len) {
    for (int i = 0; i < len; i++) {
        scanf("%d", &arr[i]);
    }
}
long long SumGCD(int arr[], int len) {
    int num = 0, num1 = 0;
    for (int i = 0; i < len; i++) {
        for (int j = 0; j < len; j++) {
            num = GCD(arr[i], arr[j]);
            num1 += num;
        }
    }
    return num1;
}
int GCD(int a, int b) {
    int x;
    while (b != 0) {
        x = a % b;
        a = b;
        b = x;
    }
    return a;
}