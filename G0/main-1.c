
//# ADC_vect 		ADC Conversion Complete
ISR(ADC_vect)
{  
	readADC();
}


//# INT0_vect		External Interrupt 0
ISR(INT0_vect)
{
	extInterrupt();
}
