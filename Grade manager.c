#include <stdio.h>
#include <string.h>

struct Student {
    int roll;
    char name[30];
    float marks[3];
    float average;
    char grade;
};

char calculate_grade(float avg) {
    if (avg >= 90) return 'A';
    else if (avg >= 75) return 'B';
    else if (avg >= 60) return 'C';
    else if (avg >= 40) return 'D';
    else return 'F';
}

int main() {
    int n;
    printf("Enter number of students: ");
    scanf("%d", &n);

    struct Student s[n];

    for (int i = 0; i < n; i++) {
        printf("\n--- Enter details for Student %d ---\
