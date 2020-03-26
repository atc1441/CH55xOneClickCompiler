typedef unsigned char *PUINT8;
typedef unsigned char __xdata *PUINT8X;
typedef const unsigned char __code *PUINT8C;
typedef unsigned char __xdata UINT8X;
typedef unsigned char  __data             UINT8D;

#include "CH554.h"
#include "debug.h"
 
uint16_t wait = 100;
uint8_t i;

#define LED_PIN1 1
SBIT(LED1, 0x90, LED_PIN1);
#define LED_PIN2 4
SBIT(LED2, 0x90, LED_PIN2);
#define LED_PIN3 5
SBIT(LED3, 0x90, LED_PIN3);
#define LED_PIN4 6
SBIT(LED4, 0x90, LED_PIN4);
#define LED_PIN5 7
SBIT(LED5, 0x90, LED_PIN5);

#define LED_PIN6 0
SBIT(LED6, 0xB0, LED_PIN6);
#define LED_PIN7 1
SBIT(LED7, 0xB0, LED_PIN7);
#define LED_PIN8 2
SBIT(LED8, 0xB0, LED_PIN8);
#define LED_PIN9 3
SBIT(LED9, 0xB0, LED_PIN9);
#define LED_PIN10 4
SBIT(LED10, 0xB0, LED_PIN10);


void main() {
    CfgFsys();

    P1_MOD_OC = P1_MOD_OC |(1<<LED_PIN1);
    P1_DIR_PU = P1_DIR_PU |	(1<<LED_PIN1);
	
    P1_MOD_OC = P1_MOD_OC |(1<<LED_PIN2);
    P1_DIR_PU = P1_DIR_PU |	(1<<LED_PIN2);
	
    P1_MOD_OC = P1_MOD_OC |(1<<LED_PIN3);
    P1_DIR_PU = P1_DIR_PU |	(1<<LED_PIN3);
	
    P1_MOD_OC = P1_MOD_OC |(1<<LED_PIN4);
    P1_DIR_PU = P1_DIR_PU |	(1<<LED_PIN4);
	
    P1_MOD_OC = P1_MOD_OC |(1<<LED_PIN5);
    P1_DIR_PU = P1_DIR_PU |	(1<<LED_PIN5);
	
	
	
    P3_MOD_OC = P3_MOD_OC |(1<<LED_PIN6);
    P3_DIR_PU = P3_DIR_PU |	(1<<LED_PIN6);
	
    P3_MOD_OC = P3_MOD_OC |(1<<LED_PIN7);
    P3_DIR_PU = P3_DIR_PU |	(1<<LED_PIN7);
	
    P3_MOD_OC = P3_MOD_OC |(1<<LED_PIN8);
    P3_DIR_PU = P3_DIR_PU |	(1<<LED_PIN8);
	
    P3_MOD_OC = P3_MOD_OC |(1<<LED_PIN9);
    P3_DIR_PU = P3_DIR_PU |	(1<<LED_PIN9);
	
    P3_MOD_OC = P3_MOD_OC |(1<<LED_PIN10);
    P3_DIR_PU = P3_DIR_PU |	(1<<LED_PIN10);
	
for(i=0;i<7;i++){	
		LED1=0;
		LED2=0;
		LED3=0;
		LED4=0;
		LED5=0;
		LED6=0;
		LED7=0;
		LED8=0;
		LED9=0;
		LED10=0;
    	mDelaymS(100);
		LED1=1;
		LED2=1;
		LED3=1;
		LED4=1;
		LED5=1;
		LED6=1;
		LED7=1;
		LED8=1;
		LED9=1;
		LED10=1;
    	mDelaymS(100);
	}
    while (1) {
    	mDelaymS(wait);
        LED8 = !LED8;
    	mDelaymS(wait);
        LED2 = !LED2;
    	mDelaymS(wait);
        LED3 = !LED3;
    	mDelaymS(wait);
        LED4 = !LED4;
    	mDelaymS(wait);
        LED5 = !LED5;
    	mDelaymS(wait);
        LED7 = !LED7;
    	mDelaymS(wait);
        LED6 = !LED6;
    	mDelaymS(wait);
        LED1 = !LED1;
    	mDelaymS(wait);
        LED9 = !LED9;
    	mDelaymS(wait);
        LED10 = !LED10;
    }
}
