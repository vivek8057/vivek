#include <stdio.h>
#include <string.h>

struct employee {
    int employeecode;
    char name[20];
    int date;
    int month;
    int year;
} a;

int main() {
    printf("employeecode:\n");
    scanf("%d", &a.employeecode);
    printf("name:\n");
    scanf("%s", a.name);
    printf("day:\n");
    scanf("%d", &a.date);
    printf("month:\n");
    scanf("%d", &a.month);
    printf("year:\n");
    scanf("%d", &a.year);

    int d2, m2, y2, c1 = 0, c2 = 0;
    printf("enter today's date:\n"); 
    printf("day:\n");
    scanf("%d", &d2);
    printf("month:\n");
    scanf("%d", &m2);
    printf("year:\n");
    scanf("%d", &y2);

    if (a.month < m2) {
        c1 = 365 * (y2 - a.year) + (m2 - a.month) * 30 + (d2 - a.date);
        
    } else if (a.month > m2) {
        c2 = 365 * (y2 - a.year - 1) + (12 - a.month + m2) * 30 + (d2 - a.date);
    }

    if (c1 >= 365 * 3 || c2 >= 365 * 3) {
        printf("%s\n", a.name); 
    }

    return 0;
}
