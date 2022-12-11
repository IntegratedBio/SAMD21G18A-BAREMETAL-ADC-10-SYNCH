#include <atmel_start.h>

//ADC VARIABLES
uint16_t    ADC_10_value = 0;		//16 BIT UNSIGNED INTEGER FOR SINGLE ENDED (ALWAYS POSITVE)
float		ADC_10_volts = 0;		//INITIALIZE AS 0

int main(void)
{

	
	/* Initializes MCU, drivers and middleware */
	atmel_start_init();

	/* Replace with your application code */
	while (1) {
		
	gpio_set_pin_level(LED_BUILTIN,true);								// LED PIN ON TO INDICATE READING
		
	uint8_t ADC_10_buffer[ADC_10_BUFFER_SIZE];							//8 BIT *UNSIGNED* INTEGER ARRAY FOR SINGLE ENDED MODE (ALWAYS POSITVE)
	//short	ADC_10_buffer[ADC_10_BUFFER_SIZE];							//16 BIT "SIGNED" INTEGER FOR DIFFENTIAL MODE (CAN BE NEGATIVE)
		
	adc_sync_read_channel(&ADC_10,CONF_ADC_CHANNEL,ADC_10_buffer,ADC_10_BUFFER_SIZE);
	ADC_10_value = ADC_10_buffer[1];									//See adcbuff value
	ADC_10_value = ADC_10_value << 8;									//Moving to the upper 8 bits
	ADC_10_value = ADC_10_value | ADC_10_buffer[0];					//Appending lower 8 bit value to previous value			//12-bit ADC value: 0-4095
	ADC_10_value = ADC_10_buffer[1] << 8 | ADC_10_buffer[0];			//16 BIT VAL IS ELEMENT [1] SHIFTED 8 BITWISE OR [0] VALUE
		
	ADC_10_volts = ((float)ADC_10_value * (float)ADC_REFERENCE_INTVCC0_VALUE) / (float)ADC_12BIT_FULL_SCALE_VALUE;
	
	delay_ms(50);

	gpio_set_pin_level(LED_BUILTIN,false);
	}
}
