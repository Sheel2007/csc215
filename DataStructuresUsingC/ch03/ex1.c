#include <stdio.h>

void averageMarksPerSubject(int marks[20][5]) {
    printf("Average marks in each subject:\n");
    for (int j = 0; j < 5; ++j) {
        int sum = 0;
        for (int i = 0; i < 20; ++i) {
            sum += marks[i][j];
        }
        printf("Subject %d: %.2f\n", j + 1, (float)sum / 20);
    }
    printf("\n");
}

void averageMarksPerStudent(int marks[20][5]) {
    printf("Average marks obtained by every student:\n");
    for (int i = 0; i < 20; ++i) {
        int sum = 0;
        for (int j = 0; j < 5; ++j) {
            sum += marks[i][j];
        }
        printf("Student %d: %.2f\n", i + 1, (float)sum / 5);
    }
    printf("\n");
}

void studentsBelow50(int marks[20][5]) {
    int count = 0;
    for (int i = 0; i < 20; ++i) {
        int sum = 0;
        for (int j = 0; j < 5; ++j) {
            sum += marks[i][j];
        }
        float average = (float)sum / 5;
        if (average < 50) {
            count++;
        }
    }
    printf("Number of students who have scored below 50 in their average: %d\n\n", count);
}

void displayScores(int marks[20][5]) {
    printf("Scores obtained by every student:\n");
    for (int i = 0; i < 20; ++i) {
        printf("Student %d: ", i + 1);
        for (int j = 0; j < 5; ++j) {
            printf("%d ", marks[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

int main() {
    int Marks[20][5] = {
        {85, 90, 78, 92, 88},
        {85, 90, 78, 92, 88},
        {85, 90, 78, 92, 88},
        {85, 90, 78, 92, 88},
        {85, 90, 78, 92, 88},
        {85, 90, 78, 92, 88},
        {85, 90, 78, 92, 88},
        {85, 90, 78, 92, 88},
        {85, 90, 78, 92, 88},
        {85, 90, 78, 92, 88},
        {85, 90, 78, 92, 88},
        {85, 90, 78, 92, 88},
        {85, 90, 78, 92, 88},
        {85, 90, 78, 92, 88},
        {85, 90, 78, 92, 88},
        {85, 90, 78, 92, 88},
        {85, 90, 78, 92, 88},
        {85, 90, 78, 92, 88},
        {85, 90, 78, 92, 88},
        {85, 90, 78, 92, 88},
    };

    averageMarksPerSubject(Marks);
    averageMarksPerStudent(Marks);
    studentsBelow50(Marks);
    displayScores(Marks);

    return 0;
}
