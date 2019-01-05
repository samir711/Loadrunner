Convert_IntVariable_To_StringVariable_using_itoaFunction()
{
	
	int iValue = 10;
	char sBuff[20]; //String - Declare sBuff should be array not pointer, otherwise it gives memory violation error.
	
    itoa(iValue,sBuff,10);
    lr_output_message("The value of sBuff is %s", sBuff);
    

		return 0;
}
