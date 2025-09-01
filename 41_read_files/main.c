#include <stdio.h>

int main() {

    // READ A FILE

    FILE *pFile = fopen("C:\\Users\\フレンチ\\Desktop\\input.txt", "r");
    char buffer[1024] = {0}; // Buffer is going to temporarily store data
    // 1,024 bytes is a good general purpose size!

    if(pFile == NULL){
        printf("Could not open file\n");
        return 1;
    }

    while(fgets(buffer, sizeof(buffer)) != NULL) {
        printf("%s", buffer);
    }

    fclose(pFile);

    return 0;
}