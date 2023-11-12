#include <stdio.h>

int main() {
    int month, day, year, weekday, hour, minute, second;
    scanf("%d %d %d %d %d %d %d", &month, &day, &year, &weekday, &hour, &minute, &second);
    char output[100];
    sprintf(output, "%.3s %.3s %.2d %.2d:%.2d:%.2d %d", 
            getWeekdayString(weekday), getMonthString(month), day, hour, minute, second, year);
    printf("%s\n", output);
    
    return 0;
}