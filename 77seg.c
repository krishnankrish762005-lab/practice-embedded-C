#include<reg51.h>
#define LED1 P2    
#define LED2 P3    

void delay(int x)
{
    int i, j;
    for(i = 0; i < x; i++)
        for(j = 1; j < 1275; j++);
}
    

void main()           
{
    LED1 = 0x00;
    LED2 = 0x00;

    while(1)
    {
        LED1 = 0x40;  
        LED2 = 0x40;
        delay(200);

        LED1 = 0x79;  
        LED2 = 0x79;
        delay(200);

        LED1 = 0x24; 
        LED2 = 0x24;
        delay(200);

        LED1 = 0x30;  
        LED2 = 0x30;
        delay(200);

        LED1 = 0x19; 
        LED2 = 0x19;
        delay(200);

        LED1 = 0x12;  
        LED2 = 0x12;
        delay(200);

        LED1 = 0x02; 
        LED2 = 0x02;
        delay(200);

        LED1 = 0x78;  
        LED2 = 0x78;
        delay(200);

        LED1 = 0x00;  
        LED2 = 0x00;
        delay(200);

        LED1 = 0x10;  
        LED2 = 0x10;
        delay(200);
    }
}