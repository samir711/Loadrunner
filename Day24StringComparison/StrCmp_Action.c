StrCmp_Action()
{
	char *sBuff1 = "THIS is LoadRunner session";
	char *sBuff2 = "This is LoadRunner session";
	
	int iResult = strcmp(sBuff1, sBuff2);
	
	if(iResult == 0) {
		
		lr_output_message("Both Strings are equal");
	}
	else {
		lr_output_message("Both Strings are not equal");
	}
	
	return 0;
}
