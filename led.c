#include<reg51.h>
#define LCD P2
void delay(int);       
void ini();
void cmd(char);
void dat(char);
sbit RS = P3^0;
sbit RW = P3^1;
sbit EN = P3^2;        	
void main(void)
{
    LCD = 0x00;
    EN = RW = RS = 0;
    ini();
    while(1)
    {
        cmd(0x01);    
        cmd(0x80);     
        dat('K');
        dat('R');
        dat('I');
        dat('S');
        dat('H');
        delay(1000);
    }
}
void ini()
{
    cmd(0x38);        
    cmd(0x0E);         
    cmd(0x01);        
    cmd(0x06);   
}
void cmd(char y)
{
    LCD = y;
    RS = 0;            
    RW = 0;
    EN = 1;
    delay(1);
    EN = 0;
}
void dat(char z)
{
    LCD = z;           
    RS = 1;            
    RW = 0;
    EN = 1;
    delay(1);         
    EN = 0;
}
void delay(int x)      
{
    int i,j;
    for(i=0;i<x;i++)
        for(j=0;j<1275;j++);
}



 
 