StrStr_Action()
{
	char *sBuff1 = "This is LoadRunner Session";
	char *sBuff2 = "LoadRunner Session";
	int sResult;

	sResult = strstr(sBuff1, sBuff2);
	
	if(sResult == 0) {
		lr_output_message("sBuff1 is not subset of sBuff2");
	}
	else {
		lr_output_message("sBuff1 is subset of sBuff2");
		
	}
	
	return 0;
}
