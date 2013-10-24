int Init_PORTA(void)
{
}

int Init_PORTB(state1, state2)
{
}

int Init_PORTC()
{
	r_state3;
	return r_state3;
}


int main (void)
{
//# Initialisation symbol for PORT A initialisation. It Could be any name, 
//# but they should be defined after. Every name corresponds to one function, 
//# that can takes parameters  
	//#PORTA()
	Init_PORTA();
	Init_PORTB(state1, state2);
	state3 = Init_PORTC();

	//# LOOP here if there is any loop	
}