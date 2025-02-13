/**
  @Generated Pin Manager Header File

  @Company:
    Microchip Technology Inc.

  @File Name:
    pin_manager.h

  @Summary:
    This is the Pin Manager file generated using PIC10 / PIC12 / PIC16 / PIC18 MCUs

  @Description
    This header file provides APIs for driver for .
    Generation Information :
        Product Revision  :  PIC10 / PIC12 / PIC16 / PIC18 MCUs - 1.81.0
        Device            :  PIC18F26K20
        Driver Version    :  2.11
    The generated drivers are tested against the following:
        Compiler          :  XC8 2.10 and above
        MPLAB 	          :  MPLAB X 5.35	
*/

/*
    (c) 2018 Microchip Technology Inc. and its subsidiaries. 
    
    Subject to your compliance with these terms, you may use Microchip software and any 
    derivatives exclusively with Microchip products. It is your responsibility to comply with third party 
    license terms applicable to your use of third party software (including open source software) that 
    may accompany Microchip software.
    
    THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER 
    EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY 
    IMPLIED WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS 
    FOR A PARTICULAR PURPOSE.
    
    IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, 
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND 
    WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP 
    HAS BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO 
    THE FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL 
    CLAIMS IN ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT 
    OF FEES, IF ANY, THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS 
    SOFTWARE.
*/

#ifndef PIN_MANAGER_H
#define PIN_MANAGER_H

/**
  Section: Included Files
*/

#include <xc.h>

#define INPUT   1
#define OUTPUT  0

#define HIGH    1
#define LOW     0

#define ANALOG      1
#define DIGITAL     0

#define PULL_UP_ENABLED      1
#define PULL_UP_DISABLED     0

// get/set Blue aliases
#define Blue_TRIS                 TRISBbits.TRISB0
#define Blue_LAT                  LATBbits.LATB0
#define Blue_PORT                 PORTBbits.RB0
#define Blue_WPU                  WPUBbits.WPUB0
#define Blue_ANS                  ANSELHbits.ANS12
#define Blue_SetHigh()            do { LATBbits.LATB0 = 1; } while(0)
#define Blue_SetLow()             do { LATBbits.LATB0 = 0; } while(0)
#define Blue_Toggle()             do { LATBbits.LATB0 = ~LATBbits.LATB0; } while(0)
#define Blue_GetValue()           PORTBbits.RB0
#define Blue_SetDigitalInput()    do { TRISBbits.TRISB0 = 1; } while(0)
#define Blue_SetDigitalOutput()   do { TRISBbits.TRISB0 = 0; } while(0)
#define Blue_SetPullup()          do { WPUBbits.WPUB0 = 1; } while(0)
#define Blue_ResetPullup()        do { WPUBbits.WPUB0 = 0; } while(0)
#define Blue_SetAnalogMode()      do { ANSELHbits.ANS12 = 1; } while(0)
#define Blue_SetDigitalMode()     do { ANSELHbits.ANS12 = 0; } while(0)

// get/set Green aliases
#define Green_TRIS                 TRISBbits.TRISB1
#define Green_LAT                  LATBbits.LATB1
#define Green_PORT                 PORTBbits.RB1
#define Green_WPU                  WPUBbits.WPUB1
#define Green_ANS                  ANSELHbits.ANS10
#define Green_SetHigh()            do { LATBbits.LATB1 = 1; } while(0)
#define Green_SetLow()             do { LATBbits.LATB1 = 0; } while(0)
#define Green_Toggle()             do { LATBbits.LATB1 = ~LATBbits.LATB1; } while(0)
#define Green_GetValue()           PORTBbits.RB1
#define Green_SetDigitalInput()    do { TRISBbits.TRISB1 = 1; } while(0)
#define Green_SetDigitalOutput()   do { TRISBbits.TRISB1 = 0; } while(0)
#define Green_SetPullup()          do { WPUBbits.WPUB1 = 1; } while(0)
#define Green_ResetPullup()        do { WPUBbits.WPUB1 = 0; } while(0)
#define Green_SetAnalogMode()      do { ANSELHbits.ANS10 = 1; } while(0)
#define Green_SetDigitalMode()     do { ANSELHbits.ANS10 = 0; } while(0)

// get/set Red aliases
#define Red_TRIS                 TRISBbits.TRISB2
#define Red_LAT                  LATBbits.LATB2
#define Red_PORT                 PORTBbits.RB2
#define Red_WPU                  WPUBbits.WPUB2
#define Red_ANS                  ANSELHbits.ANS8
#define Red_SetHigh()            do { LATBbits.LATB2 = 1; } while(0)
#define Red_SetLow()             do { LATBbits.LATB2 = 0; } while(0)
#define Red_Toggle()             do { LATBbits.LATB2 = ~LATBbits.LATB2; } while(0)
#define Red_GetValue()           PORTBbits.RB2
#define Red_SetDigitalInput()    do { TRISBbits.TRISB2 = 1; } while(0)
#define Red_SetDigitalOutput()   do { TRISBbits.TRISB2 = 0; } while(0)
#define Red_SetPullup()          do { WPUBbits.WPUB2 = 1; } while(0)
#define Red_ResetPullup()        do { WPUBbits.WPUB2 = 0; } while(0)
#define Red_SetAnalogMode()      do { ANSELHbits.ANS8 = 1; } while(0)
#define Red_SetDigitalMode()     do { ANSELHbits.ANS8 = 0; } while(0)

// get/set RC6 procedures
#define RC6_SetHigh()            do { LATCbits.LATC6 = 1; } while(0)
#define RC6_SetLow()             do { LATCbits.LATC6 = 0; } while(0)
#define RC6_Toggle()             do { LATCbits.LATC6 = ~LATCbits.LATC6; } while(0)
#define RC6_GetValue()              PORTCbits.RC6
#define RC6_SetDigitalInput()    do { TRISCbits.TRISC6 = 1; } while(0)
#define RC6_SetDigitalOutput()   do { TRISCbits.TRISC6 = 0; } while(0)

// get/set RC7 procedures
#define RC7_SetHigh()            do { LATCbits.LATC7 = 1; } while(0)
#define RC7_SetLow()             do { LATCbits.LATC7 = 0; } while(0)
#define RC7_Toggle()             do { LATCbits.LATC7 = ~LATCbits.LATC7; } while(0)
#define RC7_GetValue()              PORTCbits.RC7
#define RC7_SetDigitalInput()    do { TRISCbits.TRISC7 = 1; } while(0)
#define RC7_SetDigitalOutput()   do { TRISCbits.TRISC7 = 0; } while(0)

/**
   @Param
    none
   @Returns
    none
   @Description
    GPIO and peripheral I/O initialization
   @Example
    PIN_MANAGER_Initialize();
 */
void PIN_MANAGER_Initialize (void);

/**
 * @Param
    none
 * @Returns
    none
 * @Description
    Interrupt on Change Handling routine
 * @Example
    PIN_MANAGER_IOC();
 */
void PIN_MANAGER_IOC(void);



#endif // PIN_MANAGER_H
/**
 End of File
*/