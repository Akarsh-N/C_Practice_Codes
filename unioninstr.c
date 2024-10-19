#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>

typedef struct {
    uint8_t messageType;
    union {
        uint16_t sensorData;
        uint32_t controlCommand;
    } payload;  // Different payloads depending on message type
} message_t;

int main(void)
{
    message_t mess_t;
    uint32_t payloaddata;
    uint8_t messagetype;

        printf("Enter Message type\n");
        scanf("%hhd",&messagetype);

        printf("Enter payload\n");
        scanf("%d",&payloaddata);
        //printf("0x%X\n",payloaddata);

        mess_t.messageType = messagetype;
        mess_t.payload.controlCommand = payloaddata;
        if(mess_t.messageType == 0x01)
        {
            printf("Sensor Data is 0x%X\n",mess_t.payload.sensorData);
        }
        else if(mess_t.messageType == 0x02)
        {
            printf("Control Command Data is 0x%X\n",mess_t.payload.controlCommand);
        }
        else
        {
            printf("Invalid message type\n");
        }
    return 0;
}