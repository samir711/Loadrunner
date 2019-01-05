LR_Paramter_To_Int()
{
	char *sBuff;
	int iValue;
	// LR parameter --> Integer
	
	// LR parameter --> String
	// String --> Integer
	
	sBuff = lr_eval_string("{iParam}");
	
	//sBuff = sBuff + 1;
	
	lr_output_message("The value of sBuff is %s", sBuff);
	//iValue = atoi(sBuff);
	iValue = atoi(lr_eval_string("{iParam}"));
	iValue = iValue + 2;
	lr_output_message("The value of iValue is %d", iValue);
	
	
	return 0;
}
