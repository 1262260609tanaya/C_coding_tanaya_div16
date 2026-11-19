#include <stdio.h>
#include <string.h>
#include<stdlib.h>

int main() {
    char s1, s2;
    int choice;

    do {
        printf("\n--- STRING MENU ---\n");
        printf("1. Length\n2. Copy\n3. Concatenate\n4. Compare\n5. Reverse\n6. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter string: ");
                scanf("%s", s1);
                printf("Length = %lu\n", strlen(s1));
                break;

            case 2:
                printf("Enter string: ");
                scanf("%s", s1);
                strcpy(s2, s1);
                printf("Copied string = %s\n", s2);
                break;

            case 3:
                printf("Enter two strings: ");
                scanf("%s %s", s1, s2);
                strcat(s1, s2);
                printf("Joined string = %s\n", s1);
                break;

            case 4:
                printf("Enter two strings: ");
                scanf("%s %s", s1, s2);
                if (strcmp(s1, s2) == 0)
                    printf("Strings are equal\n");
                else
                    printf("Strings are NOT equal\n");
                break;

            case 5:
                printf("Enter string: ");
                scanf("%s", s1);
                int len = strlen(s1);
                printf("Reversed string = ");
                for (int i = len - 1; i >= 0; i--) {
                    printf("%c", s1[i]);
                }
                printf("\n");
                break;

            case 6:
                printf("Exiting...\n");
                break;

            default:
                printf("Invalid choice!\n");
        }
    } while (choice != 6);

    return 0;
}
