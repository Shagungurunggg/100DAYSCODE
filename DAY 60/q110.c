Write a program to take an integer array arr and an integer k as inputs. The task is to find the maximum element in each subarray of size k moving from left to right. Print the maximum elements for each window separated by spaces as output.
#include <stdio.h>

#define MAX 100000

int deque[MAX];
int front = 0, rear = -1;

void push_back(int x) {
    deque[++rear] = x;
}

void pop_back() {
    rear--;
}

void pop_front() {
    front++;
}

int front_val() {
    return deque[front];
}

int main() {
    int n, k;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the elements: ");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter k: ");
    scanf("%d", &k);

    if (k > n || k <= 0) {
        printf("Invalid value of k\n");
        return 0;
    }

    for (int i = 0; i < k; i++) {
        while (front <= rear && arr[deque[rear]] <= arr[i])
            pop_back();
        push_back(i);
    }

    printf("%d ", arr[front_val()]);

    for (int i = k; i < n; i++) {

        if (front_val() <= i - k)
            pop_front();

        while (front <= rear && arr[deque[rear]] <= arr[i])
            pop_back();

        push_back(i);

        printf("%d ", arr[front_val()]);
    }

    printf("\n");
    return 0;
}
