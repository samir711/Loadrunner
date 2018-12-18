CVariables_To_LR_Parameter()
{
	int iValue = 100;
	char *sBuff = "This is loadrunner session";
	char *sMovie = "Aquaman";
	float fValue = 10.26;
	
	// Prior declaration is required for C variable (Int, float, char[], char *)
	// Prior declaration is not required of LR parameter
	
	
	lr_save_int(iValue, "iParam");     // C variable and then LR parameter
	lr_save_string(sBuff, "sParam");   // C variable and then LR parameter
	
	lr_param_sprintf("fParam","%0.2f",fValue); // In this case first LR parameter then C variable data type, and  C Variable, vice
	                                          // versa of lr_save_int()  and lr_save_string()
	                                        
	lr_param_sprintf("sParam","%s",sBuff); // Saving sBuff c Variable in sParam LR parameter.First LR paramter sParam and then C variable
	   
    lr_param_sprintf("iParam","%d",iValue);	// Saving iValue c Variable in iParam LR parameter..First LR paramter sParam and then C variable
    
    /*
       Exercise -
       sMovieParam --> I paid 10.26 dollar fo the movie Aquaman and the theater is a 100, main Street, CA
      
    */
   
   lr_param_sprintf("sMovieParam","I paid %0.2f dollar fo the movie %s and the theater is a %d, main Street, CA", fValue,sMovie,iValue);
	
	return 0;
}
