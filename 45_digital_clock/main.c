#include <stdio.h>
#include <time.h>
#include <stdbool.h>
#include <unistd.h>

int main() {

    // DIGITAL CLOCK

    time_t rawtime = 0; // Jan 1, 1970 (Epoch)
    struct tm *pTime = NULL;
    bool isRunning = true;

    printf("DIGITAL CLOCK\n");

    while(isRuning){

        time(&rawtime);

        pTime = localtime(&rawtime);
        
        printf("\r%02d:%02d:%02d", pTime->tm_hour, pTime->tm_min, pTime->tm_sec)

        //printf("test\n")
        Sleep(1000); // for Windows use millisecondmilliseconds
        //sleep(1); // for Mac
    }

    return 0;
}