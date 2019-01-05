Convert_IntVariable_To_StringVariable_using_sPrintfFunction()
{
	char sOutput[20];
	char sOutput1[20];
	int iValue = 10;
	float fValue = 12.53;
	
	//sprintf(sBuff,"placeholder","CdataType");
    
	sprintf(sOutput,"%d",iValue);
	sprintf(sOutput1,"%0.2f",fValue);
	
    lr_output_message("The value of sOutput is %s", sOutput);
    lr_output_message("The value of sOutput1 is %s", sOutput1);
    

	return 0;
}
