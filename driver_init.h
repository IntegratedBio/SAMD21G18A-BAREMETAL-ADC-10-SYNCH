/*
 * Code generated from Atmel Start.
 *
 * This file will be overwritten when reconfiguring your Atmel Start project.
 * Please copy examples or other code you want to keep to a separate file
 * to avoid losing it when reconfiguring.
 */
#ifndef DRIVER_INIT_INCLUDED
#define DRIVER_INIT_INCLUDED

#include "atmel_start_pins.h"

#ifdef __cplusplus
extern "C" {
#endif

#include <hal_atomic.h>
#include <hal_delay.h>
#include <hal_gpio.h>
#include <hal_init.h>
#include <hal_io.h>
#include <hal_sleep.h>

#include <hal_adc_sync.h>

#include <hal_delay.h>

extern struct adc_sync_descriptor ADC_10;

#define ADC_10_BUFFER_SIZE	2 // BYTES
#define CONF_ADC_CHANNEL	10	//AIN[10]
//MAPPING INPUT
#define ADC_REFERENCE_INTVCC0_VALUE		2.23	// VDC
#define ADC_12BIT_FULL_SCALE_VALUE		4096	// 0 - 4095 RANGE = 4096 DIFFERENT READINGS FOR A 12 BIT RESOLUTION

void ADC_10_PORT_init(void);
void ADC_10_CLOCK_init(void);
void ADC_10_init(void);

void delay_driver_init(void);

/**
 * \brief Perform system initialization, initialize pins and clocks for
 * peripherals
 */
void system_init(void);

#ifdef __cplusplus
}
#endif
#endif // DRIVER_INIT_INCLUDED
