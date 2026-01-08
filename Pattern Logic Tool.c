#include <stdio.h>

int main() {
    int choice, n, i, j, s;

    /* SINGLE printf FOR MENU */
    printf(
        "\nHere We Print Some Patterns\n"
        "1. Left Aligned Triangle\n"
        "2. Inverted Left Aligned Triangle\n"
        "3. Hollow Left Aligned Triangle\n"
        "4. Right Aligned Triangle\n"
        "5. Full Pyramid\n"
        "6. Inverted Pyramid\n"
        "7. Hollow Pyramid\n"
        "8. Diamond Pattern\n"
        "9. Hollow Diamond Pattern\n"
        "10. Hourglass Pattern\n"
        "Enter no. of that pattern which you want to print: "
    );
    scanf("%d", &choice);

    printf("Enter value of rows: ");
    scanf("%d", &n);

    switch (choice) {

    case 1:
        for (i = 1; i <= n; i++) {
            for (j = 1; j <= i; j++)
                printf("*");
            printf("\n");
        }
        break;

    case 2:
        for (i = n; i >= 1; i--) {
            for (j = 1; j <= i; j++)
                printf("*");
            printf("\n");
        }
        break;

    case 3:
        for (i = 1; i <= n; i++) {
            for (j = 1; j <= i; j++) {
                if (i == n || j == 1 || j == i)
                    printf("*");
                else
                    printf(" ");
            }
            printf("\n");
        }
        break;

    case 4:
        for (i = 1; i <= n; i++) {
            for (s = 1; s <= n - i; s++)
                printf(" ");
            for (j = 1; j <= i; j++)
                printf("*");
            printf("\n");
        }
        break;

    case 5:
        for (i = 1; i <= n; i++) {
            for (s = 1; s <= n - i; s++)
                printf(" ");
            for (j = 1; j <= 2 * i - 1; j++)
                printf("*");
            printf("\n");
        }
        break;

    case 6:
        for (i = n; i >= 1; i--) {
            for (s = 1; s <= n - i; s++)
                printf(" ");
            for (j = 1; j <= 2 * i - 1; j++)
                printf("*");
            printf("\n");
        }
        break;

    case 7:
        for (i = 1; i <= n; i++) {
            for (s = 1; s <= n - i; s++)
                printf(" ");
            for (j = 1; j <= 2 * i - 1; j++) {
                if (i == n || j == 1 || j == 2 * i - 1)
                    printf("*");
                else
                    printf(" ");
            }
            printf("\n");
        }
        break;

    case 8:
        for (i = 1; i <= n; i++) {
            for (s = 1; s <= n - i; s++)
                printf(" ");
            for (j = 1; j <= 2 * i - 1; j++)
                printf("*");
            printf("\n");
        }
        for (i = n - 1; i >= 1; i--) {
            for (s = 1; s <= n - i; s++)
                printf(" ");
            for (j = 1; j <= 2 * i - 1; j++)
                printf("*");
            printf("\n");
        }
        break;

    case 9:
        for (i = 1; i <= n; i++) {
            for (s = 1; s <= n - i; s++)
                printf(" ");
            for (j = 1; j <= 2 * i - 1; j++) {
                if (j == 1 || j == 2 * i - 1)
                    printf("*");
                else
                    printf(" ");
            }
            printf("\n");
        }
        for (i = n - 1; i >= 1; i--) {
            for (s = 1; s <= n - i; s++)
                printf(" ");
            for (j = 1; j <= 2 * i - 1; j++) {
                if (j == 1 || j == 2 * i - 1)
                    printf("*");
                else
                    printf(" ");
            }
            printf("\n");
        }
        break;

    case 10:
        for (i = n; i >= 1; i--) {
            for (s = 1; s <= n - i; s++)
                printf(" ");
            for (j = 1; j <= 2 * i - 1; j++)
                printf("*");
            printf("\n");
        }
        for (i = 2; i <= n; i++) {
            for (s = 1; s <= n - i; s++)
                printf(" ");
            for (j = 1; j <= 2 * i - 1; j++)
                printf("*");
            printf("\n");
        }
        break;

    default:
        printf("Invalid choice!");
    }

    return 0;
}
