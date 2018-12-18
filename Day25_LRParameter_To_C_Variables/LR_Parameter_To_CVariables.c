LR_Parameter_To_CVariables()
{

	/*
	Rule of Thumb ? Any LR parameter, you are giving as an input to LR function ---> it should be in flower braces { }, but when any LR parameter is an output it should be in double quotes only no flower braces are required.
    */

   char *sBuff, *sBuff1;
   	
   	sBuff = lr_eval_string("{LR_Param}");
   	sBuff1 = lr_eval_string("{LR_Param} and it is taught by kumar Gupta. Session starts at {LR_Param_1}");
   	
   	
   	lr_output_message("The value of sBuff is :  %s", sBuff);
   	lr_output_message("The value of sBuff1 is :  %s", sBuff1);
   
	return 0;
}
