#include <stdio.h>

typedef enum Status{
    SUCCESS, FAILURE, PENDING
}Status;

int main() {

    Status status = SUCCESS;
    //Status status = FAILURE;
    //Status status = PENDING;

    connectStatus(status);

    return 0;
}

void connectStatus(Status status){

    switch(status){
        case SUCCESS:
            printf("Connection was successful\n");
            break;
        case FAILURE:
            printf("Could not connect\n");
            break;
        case PENDING:
            printf("Connecting...\n");
            break;
    }
}