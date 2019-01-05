Action()
{

	web_url("index.htm", 
		"URL=http://127.0.0.1:1080/WebTours/index.htm", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t7.inf", 
		"Mode=HTML", 
		LAST);

	web_url("header.html", 
		"URL=http://127.0.0.1:1080/WebTours/header.html", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=http://127.0.0.1:1080/WebTours/index.htm", 
		"Snapshot=t9.inf", 
		"Mode=HTML", 
		LAST);

	web_reg_find("Text=Web Tours", 
		LAST);

	web_reg_find("Text=Web Tours Navigation Bar", 
		LAST);

/*Correlation comment - Do not change!  Original value='125101.483515593ztDtQAHpffiDDDDDDizAQpttfDf' Name ='userSession' Type ='ResponseBased'*/
	web_reg_save_param_regexp(
		"ParamName=userSession",
		"RegExp=name=\"userSession\"\\ value=\"(.*?)\"/>\\\n<table\\ border",
		SEARCH_FILTERS,
		"Scope=Body",
		"IgnoreRedirections=No",
		"RequestUrl=*/nav.pl*",
		LAST);

	web_reg_find("SaveCount=Welcome_Count",
		"Text/IC=Welcome",
		LAST);

lr_start_transaction("WebTours_Day26_ErrorHandling_T01_Launch");

	web_url("welcome.pl", 
		"URL=http://127.0.0.1:1080/cgi-bin/welcome.pl?signOff=true", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://127.0.0.1:1080/WebTours/index.htm", 
		"Snapshot=t10.inf", 
		"Mode=HTML", 
		LAST);
		
if( atoi(lr_eval_string("{Welcome_Count}")) >= 1)
{
	
	lr_end_transaction("WebTours_Day26_ErrorHandling_T01_Launch", LR_PASS) ;
}
else 
{
	lr_end_transaction("WebTours_Day26_ErrorHandling_T01_Launch", LR_FAIL) ;
	
}




	web_set_sockets_option("SSL_VERSION", "TLS1.1");


	/* Login */

	lr_think_time(10);

	web_reg_find("Text=Web Tours", 
		LAST);

	web_reg_find("Text=Web Tours Navigation Bar", 
		LAST);

	web_reg_find("Text=Welcome to Web Tours", 
		LAST);

	web_reg_find("Search=Body",
	             "Text/IC=Welcome",
	             "SaveCount=wel_Count",
	              LAST);
	
	lr_rendezvous("Day21_TextCP_FromRecordingOptions_Login");


	lr_start_transaction("Login");

	web_submit_data("login.pl",
		"Action=http://127.0.0.1:1080/cgi-bin/login.pl",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=text/html",
		"Referer=http://127.0.0.1:1080/cgi-bin/nav.pl?in=home",
		"Snapshot=t12.inf",
		"Mode=HTML",
		ITEMDATA,
		"Name=userSession", "Value={userSession}", ENDITEM,
		"Name=username", "Value=jojo", ENDITEM,
		"Name=password", "Value=bean", ENDITEM,
		"Name=login.x", "Value=54", ENDITEM,
		"Name=login.y", "Value=8", ENDITEM,
		"Name=JSFormSubmit", "Value=off", ENDITEM,
		LAST);

	sResult = web_get_int_property(HTTP_INFO_RETURN_CODE);
	if(sResult >= 200 && sResult < 400)
	{
	lr_end_transaction("Login",LR_PASS);
	}
	else 
	{
		lr_end_transaction("Login",LR_FAIL);
		
	}
	
	/* Logoff */

	

	web_reg_find("Text=Web Tours", 
		LAST);

	web_reg_find("Text=Web Tours Navigation Bar", 
		LAST);

	lr_think_time(10);
	
	
	lr_rendezvous("Day21_TextCP_FromRecordingOptions_Logoff");

	lr_start_transaction("Logoff");
	
	web_url("SignOff Button", 
		"URL=http://127.0.0.1:1080/cgi-bin/welcome.pl?signOff=1", 
		"TargetFrame=body", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://127.0.0.1:1080/cgi-bin/nav.pl?page=menu&in=home", 
		"Snapshot=t13.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("Logoff",LR_AUTO);

	return 0;
}