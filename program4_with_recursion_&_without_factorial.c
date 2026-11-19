#include <stdio.h>


int factRec(int n) {
    if (n == 0)
        return 1;
    return n * factRec(n - 1);
}
int factLoop(int n) {
    int f = 1;
    for (int i = 1; i <= n; i++) {
        f = f * i;
    }
    return f;
}

int main() {
    int choice, n;

    do {
        printf("\n1. With Recursion\n2. Without Recursion\n3. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter number: ");
                scanf("%d", &n);
                printf("Factorial = %d\n", factRec(n));
                break;

            case 2:
                printf("Enter number: ");
                scanf("%d", &n);
                printf("Factorial = %d\n", factLoop(n));
                break;

            case 3:
                printf("Exiting...\n");
                break;

            default:
                printf("Invalid choice\n");
        }
    } while (choice != 3);

    return 0;
}

• Replaced long long with int: Uses %d format specifiers for easier memorization 
