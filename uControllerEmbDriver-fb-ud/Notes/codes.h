//////////////////////////////////////////////////
// Section 8
//////////////////////////////////////////////////
#include<string.h>
#include<stdint.h>

// This is string literal(const data)/ This will be stores in ROM (Flash memory)
const chat *pMessage = "Hi";

// This is constant data. This data also will be stored in ROM
const int value = 200;

// This is not a const data. This will be stored in SRAM
char myData[50];

int main(void){
    for(uint32_t i = 0; i< strlen(pMessage); i++){
        //This is data copy from FLASH to SRAM
        myDat[i] = *(pMessage+i);
    }
    for(;;);
}