#include <stdio.h>
#include <time.h>

int main() {
    time_t t = time(NULL);
    struct tm *tm = localtime(&t);
    printf("Time: %02d:%02d:%02d %s\n",
           (tm->tm_hour % 12) ? tm->tm_hour % 12 : 12,
           tm->tm_min, tm->tm_sec,
           tm->tm_hour >= 12 ? "PM" : "AM");
    return 0;
}
