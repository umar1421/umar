#include <stdio.h>

int main() {
    char name[50];
    int marks[4];
    int total = 0, percentage;
    int passed = 1; 

    printf("Enter student name : ");
    scanf("%s", name); 

    for(int i = 0; i < 4; i++) {
        printf("Enter marks for subject %d: ", i + 1);
        scanf("%d", &marks[i]);

        if(marks[i] < 35) {
            passed = 0;
        }

        total += marks[i];
    }

    percentage = total / 4;

    printf("\nStudent Name: %s\n", name);
    printf("Total Marks: %d\n", total);
    printf("Percentage: %d%%\n", percentage);

    if(passed) {
        printf("Result: Passed \n");
    } else {
        printf("Result: Failed \n");
    }

    return 0;
}

