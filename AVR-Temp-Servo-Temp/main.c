#include <avr/io.h>
#include <util/delay.h>
#include "BIT_MATH.h"
#include "STD_TYPES.h"
#include "DIO_interface.h"
#include "DIO_private.h"
#include "LCD_config.h"
#include "LCD_interface.h"
#include "ADC_Interface.h"
#include "ADC_Config.h"
#include "GIE_Interface.h"
#include "TMR0_Interface.h"
#include "TMR0_Config.h"
#include "TIMER1_int.h"
#include "TIMER1_config.h"
////SENSOR TEMP BY ADC//////////////////////
/////////////تجهيز الكود///////////////////////////////
#define TEMP_SENSOR_CHANNEL   CHANNEL_0
#define RED_LED_PIN           PIN_0
#define YELLOW_LED_PIN        PIN_1
#define GREEN_LED_PIN         PIN_2
#define LED_PORT              PORTB_ID


void TIMER0_voidDelay_ms(u32 time_ms) {
    u32 i;
    for (i = 0; i < time_ms; i++) {
        TCNT0 = 0;
        while ((TIFR & (1 << OCF0)) == 0);
        TIFR |= (1 << OCF0);
    }
}

int main(void)
{
    u16 adc_value, temperature;

    DIO_voidSetPinDirection(LED_PORT, RED_LED_PIN, PIN_OUTPUT);
    DIO_voidSetPinValue(LED_PORT, RED_LED_PIN, PIN_LOW);
    DIO_voidSetPinDirection(LED_PORT, YELLOW_LED_PIN, PIN_OUTPUT);
    DIO_voidSetPinValue(LED_PORT, YELLOW_LED_PIN, PIN_LOW);
    DIO_voidSetPinDirection(LED_PORT, GREEN_LED_PIN, PIN_OUTPUT);
    DIO_voidSetPinValue(LED_PORT, GREEN_LED_PIN, PIN_LOW);
    DIO_voidSetPinDirection(LED_PORT, PIN_4, PIN_OUTPUT);
    DIO_voidSetPinValue(LED_PORT, PIN_4, PIN_LOW);

    M_TIMER1_voidPwm1Init();
    M_TIMER1_voidPwm1SetTop();
    M_TIMER1_voidPwm1Start();
    u16 data;
    u16 data1;


    LCD_voidInit();
    ADC_voidInit();

    TCCR0 = 0b00001011;
    OCR0 = 250;


    LCD_voidWriteString((u8*)"Hello Fatma");
    TIMER0_voidDelay_ms(100);
    LCD_voidClear();

    while (1)
    {
        ADC_voidChannelSellect(CHANNEL_1);
        ADC_StartConversionBoling(&data);
        data1 = (( (u32)(data)*(65-25) ) / (1023) ) + 25;
        M_TIMER1_voidPwm1SetDutyCycle(data1);
        TIMER0_voidDelay_ms(100);

        ADC_voidChannelSellect(TEMP_SENSOR_CHANNEL);
        ADC_StartConversionBoling(&adc_value);
        temperature = (adc_value * 500UL) / 1023;

        LCD_voidGoToXY(0, 0);
        LCD_voidWriteString((u8*)"Temp = ");
        LCD_voidWriteNumber(temperature);
        LCD_voidWriteString((u8*)" C");
        TIMER0_voidDelay_ms(100);

        LCD_voidGoToXY(0, 0x40);

        if (temperature >= 60)
        {
            DIO_voidSetPinValue(LED_PORT, RED_LED_PIN, PIN_HIGH);
            DIO_voidSetPinValue(LED_PORT, GREEN_LED_PIN, PIN_LOW);
            DIO_voidSetPinValue(LED_PORT, YELLOW_LED_PIN, PIN_LOW);
            DIO_voidSetPinValue(LED_PORT, PIN_4, PIN_HIGH);
            LCD_voidWriteString((u8*)"High Temp!   ");
        }
        else if (temperature >= 40 && temperature < 60)
        {
            DIO_voidSetPinValue(LED_PORT, YELLOW_LED_PIN, PIN_HIGH);
            DIO_voidSetPinValue(LED_PORT, GREEN_LED_PIN, PIN_LOW);
            DIO_voidSetPinValue(LED_PORT, RED_LED_PIN, PIN_LOW);
            DIO_voidSetPinValue(LED_PORT, PIN_4, PIN_LOW);
            LCD_voidWriteString((u8*)"Medium Temp!   ");
        }
        else
        {
            DIO_voidSetPinValue(LED_PORT, GREEN_LED_PIN, PIN_HIGH);
            DIO_voidSetPinValue(LED_PORT, YELLOW_LED_PIN, PIN_LOW);
            DIO_voidSetPinValue(LED_PORT, RED_LED_PIN, PIN_LOW);
            DIO_voidSetPinValue(LED_PORT, PIN_4, PIN_LOW);
            LCD_voidWriteString((u8*)"Low Temp!   ");
        }

        TIMER0_voidDelay_ms(20);
    }
}

