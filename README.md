# SAMD21G18A-BAREMETAL-ADC-10-SYNCH
Board: Arduino Nano 33 IoT
Compatibility: Nano 33's / Zero / MKR1000 / Seeed Studio XIAO or most [SAMD21G18A] mcu's
Program: Baremetal ADC Chanel 10 Setup
Debugging Hardware: Atmel ICE via soldered SWD pins
Sensor Hardwarer: DC Signal Generator
Generic CLock 0: 8 MHZ
Generic Clock 1: 32 Khz (High Accuracy)
Resolution: 12 Bit w/o averaging

ADC SETUP
This code demonstrates how to configure the "ADC 10" on Pin [D15|A1|PB02] to take a (+) positive signal.
The value can be watched and ADC values vary betwen ~50 - 4095 as dialed with a signal generator from 0 - 2.33VDC]

CONFIGURATION NOTE: It is much easier and more intuit with the chip libraries to setup adc channel 0 [D15|A0|PA02].
However! The reason for configuring on this channel is that we intend to use the *Single* DAC 0 for our project in
the near future. This means that another pin had to be chosen and configured for this analog input.
