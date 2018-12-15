Action()
{

	web_reg_find("Text=To make reservations,please", 
		LAST);
	
	web_reg_find("Text=Web Tours", 
		LAST);

	web_reg_find("Text=Web Tours Navigation Bar", 
		LAST);

	web_url("index.htm", 
		"URL=http://127.0.0.1:1080/WebTours/index.htm", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t3.inf", 
		"Mode=HTML", 
		LAST);

	web_url("header.html", 
		"URL=http://127.0.0.1:1080/WebTours/header.html", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=http://127.0.0.1:1080/WebTours/index.htm", 
		"Snapshot=t5.inf", 
		"Mode=HTML", 
		LAST);


/*Correlation comment - Do not change!  Original value='125101.599675982ztDtQVDpfDDDDDDDDizAQptiVc' Name ='userSession' Type ='ResponseBased'*/
	web_reg_save_param_regexp(
		"ParamName=userSession",
		"RegExp=name=\"userSession\"\\ value=\"(.*?)\"/>\\\n<table\\ border",
		SEARCH_FILTERS,
		"Scope=Body",
		"IgnoreRedirections=No",
		"RequestUrl=*/nav.pl*",
		LAST);

	web_url("welcome.pl", 
		"URL=http://127.0.0.1:1080/cgi-bin/welcome.pl?signOff=true", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://127.0.0.1:1080/WebTours/index.htm", 
		"Snapshot=t6.inf", 
		"Mode=HTML", 
		LAST);

	web_set_sockets_option("SSL_VERSION", "TLS1.1");

	/* **********Loging************** */
	
		web_reg_find("Text=Web Tours", 
		LAST);

	web_reg_find("Text=Web Tours Navigation Bar", 
		LAST);

	web_reg_find("Text/ic=Welcome", 
		LAST);

	web_reg_find("Text=you can search for new flights", 
		LAST);

	lr_start_transaction("Loging");

	lr_think_time(8);

	web_submit_data("login.pl",
		"Action=http://127.0.0.1:1080/cgi-bin/login.pl",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=text/html",
		"Referer=http://127.0.0.1:1080/cgi-bin/nav.pl?in=home",
		"Snapshot=t8.inf",
		"Mode=HTML",
		ITEMDATA,
		"Name=userSession", "Value={userSession}", ENDITEM,
		"Name=username", "Value=jojo", ENDITEM,
		"Name=password", "Value=bean", ENDITEM,
		"Name=login.x", "Value=54", ENDITEM,
		"Name=login.y", "Value=15", ENDITEM,
		"Name=JSFormSubmit", "Value=off", ENDITEM,
		LAST);
	
	     web_image_check("web_image_check",
		"Src=/WebTours/images/signoff.gif",
		"Alt=SignOff Button",
		LAST);

		
	lr_end_transaction("Loging",LR_AUTO);

	/* ************LogOff************* */

	
		web_reg_find("Text=Web Tours", 
		LAST);

	web_reg_find("Text=Web Tours Navigation Bar", 
		LAST);
	
	
	lr_start_transaction("Logoff");
	lr_think_time(10);

	web_url("SignOff Button", 
		"URL=http://127.0.0.1:1080/cgi-bin/welcome.pl?signOff=1", 
		"TargetFrame=body", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://127.0.0.1:1080/cgi-bin/nav.pl?page=menu&in=home", 
		"Snapshot=t9.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("Logoff",LR_AUTO);

	return 0;
}