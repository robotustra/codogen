//# Not empty Loop
while(1)
{
	if (cond1)
	{
        	FUNC1();
		FUNC1_1();
		FUNC1_2();
	}
	else
	{ 
		FUNC2();
		FUNC2_1();
	}
	
	switch (var)
	{
		case c_var1 : FUNC3(); break;
		case c_var2 : FUNC4(); break;
		default: FUNC5();
	}

	for( int counter = 0 + 1; counter < 10; counter ++ )
	{
		FUNC6();
		FUNC7();

		if (cond2)
		{
			FUNC8();
			FUNC9();
		}
		
		FUNC10();
	}

	if (cond3)
	{
        	cond4 = F11();
		if(cond4)
		{
			F12();
			F13();
		}
		else
		{
			F14();
		}
	else
	{
		F15();	
	}
}
		
