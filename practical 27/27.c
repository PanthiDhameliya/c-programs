#include <stdio.h>

union Data {
    int i;
    float f;
};

int fibonacciRecursive(int n) {
    if (n <= 2) return 1;
    return fibonacciRecursive(n - 1) + fibonacciRecursive(n - 2);
}

void generateIterative(int n, int m1, int m2, int a[]) {
    a[0] = m1;
    if (n > 1) a[1] = m2;
    for (int i = 2; i < n; i++)
        a[i] = a[i - 1] + a[i - 2];
}

void applyInterest(int a[], int n, float rate, float out[]) {
    float r = rate / 1200.0;
    for (int i = 0; i < n; i++)
        out[i] = a[i] + a[i] * r;
}

int main() {
    int n;
    union Data d1, d2, d3;
    printf("Enter number of months: ");
    scanf("%d", &n);
    if (n < 1) return 0;

    printf("Enter savings for Month 1: ");
    scanf("%d", &d1.i);
    printf("Enter savings for Month 2: ");
    scanf("%d", &d2.i);

    int arr[n];
    float arr2[n];

    generateIterative(n, d1.i, d2.i, arr);

    printf("\nSavings (Iterative):\n");
    for (int i = 0; i < n; i++)
        printf("Month %d: %d\n", i + 1, arr[i]);

    long long total = 0;
    for (int i = 0; i < n; i++)
        total += arr[i];

    printf("\nTotal Savings: %lld\n", total);

    printf("\nRecursive Fibonacci Values:\n");
    for (int i = 1; i <= n; i++)
        printf("Fib(%d): %d\n", i, fibonacciRecursive(i));

    printf("\nEnter annual interest rate: ");
    scanf("%f", &d3.f);

    applyInterest(arr, n, d3.f, arr2);

    printf("\nSavings With Interest:\n");
    for (int i = 0; i < n; i++)
        printf("Month %d: %.2f\n", i + 1, arr2[i]);

    return 0;
}
