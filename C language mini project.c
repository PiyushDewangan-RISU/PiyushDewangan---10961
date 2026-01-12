#include <stdio.h>

/* Function Declarations */
void temperature();
void distance();
void mass();
void time();

int main() {
    int choice;

    do {
        printf("\n===== SCIENTIFIC UNIT CONVERTER =====\n");
        printf("1. Temperature Conversion\n");
        printf("2. Distance Conversion\n");
        printf("3. Mass Conversion\n");
        printf("4. Time Conversion\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                temperature();
                break;
            case 2:
                distance();
                break;
            case 3:
                mass();
                break;
            case 4:
                time();
                break;
            case 0:
                printf("Exiting Program...\n");
                break;
            default:
                printf("Invalid Choice!\n");
        }
    } while (choice != 0);

    return 0;
}

/* Temperature Conversion */
void temperature() {
    int ch;
    float value, result;

    printf("\n--- Temperature Conversion ---\n");
    printf("1. Celsius to Fahrenheit\n");
    printf("2. Fahrenheit to Celsius\n");
    printf("Enter choice: ");
    scanf("%d", &ch);

    switch (ch) {
        case 1:
            printf("Enter Celsius: ");
            scanf("%f", &value);
            result = (value * 9 / 5) + 32;
            printf("Fahrenheit = %.2f\n", result);
            break;

        case 2:
            printf("Enter Fahrenheit: ");
            scanf("%f", &value);
            result = (value - 32) * 5 / 9;
            printf("Celsius = %.2f\n", result);
            break;

        default:
            printf("Invalid Choice!\n");
    }
}

/* Distance Conversion */
void distance() {
    int ch;
    float value, result;

    printf("\n--- Distance Conversion ---\n");
    printf("1. Kilometer to Meter\n");
    printf("2. Meter to Kilometer\n");
    printf("Enter choice: ");
    scanf("%d", &ch);

    switch (ch) {
        case 1:
            printf("Enter Kilometer: ");
            scanf("%f", &value);
            result = value * 1000;
            printf("Meters = %.2f\n", result);
            break;

        case 2:
            printf("Enter Meter: ");
            scanf("%f", &value);
            result = value / 1000;
            printf("Kilometers = %.2f\n", result);
            break;

        default:
            printf("Invalid Choice!\n");
    }
}

/* Mass Conversion */
void mass() {
    int ch;
    float value, result;

    printf("\n--- Mass Conversion ---\n");
    printf("1. Kilogram to Gram\n");
    printf("2. Gram to Kilogram\n");
    printf("Enter choice: ");
    scanf("%d", &ch);

    switch (ch) {
        case 1:
            printf("Enter Kilogram: ");
            scanf("%f", &value);
            result = value * 1000;
            printf("Grams = %.2f\n", result);
            break;

        case 2:
            printf("Enter Gram: ");
            scanf("%f", &value);
            result = value / 1000;
            printf("Kilograms = %.2f\n", result);
            break;

        default:
            printf("Invalid Choice!\n");
    }
}

/* Time Conversion */
void time() {
    int ch;
    float value, result;

    printf("\n--- Time Conversion ---\n");
    printf("1. Hours to Minutes\n");
    printf("2. Minutes to Hours\n");
    printf("Enter choice: ");
    scanf("%d", &ch);

    switch (ch) {
        case 1:
            printf("Enter Hours: ");
            scanf("%f", &value);
            result = value * 60;
            printf("Minutes = %.2f\n", result);
            break;

        case 2:
            printf("Enter Minutes: ");
            scanf("%f", &value);
            result = value / 60;
            printf("Hours = %.2f\n", result);
            break;

        default:
            printf("Invalid Choice!\n");
    }
}
