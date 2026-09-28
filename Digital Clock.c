#include <stdio.h>
#include <time.h>
#include <unistd.h>
int main()
{
    printf("Digital Clock\n");
    while(1)
    {
        time_t current_time;
        struct tm *local_time;

        current_time = time(0);
        local_time = localtime(&current_time);

        printf("\r%02d:%02d:%02d", local_time->tm_hour, local_time->tm_min, local_time->tm_sec);

        fflush(stdout);

        sleep(1);
        }
        return 0;
}
