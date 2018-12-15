Login()
{

	web_url("index.htm_2", 
		"URL=http://127.0.0.1:1080/WebTours/index.htm", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t15.inf", 
		"Mode=HTML", 
		LAST);

	web_url("header.html_2", 
		"URL=http://127.0.0.1:1080/WebTours/header.html", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=http://127.0.0.1:1080/WebTours/index.htm", 
		"Snapshot=t16.inf", 
		"Mode=HTML", 
		LAST);

	web_url("welcome.pl_2", 
		"URL=http://127.0.0.1:1080/cgi-bin/welcome.pl?signOff=true", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://127.0.0.1:1080/WebTours/index.htm", 
		"Snapshot=t17.inf", 
		"Mode=HTML", 
		LAST);

	web_url("seed_2", 
		"URL=http://clientservices.googleapis.com/chrome-variations/seed?osname=win&channel=stable&milestone=70", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t18.inf", 
		"Mode=HTML", 
		LAST);

	/* ************Login************ */

	lr_think_time(31);

	web_submit_data("login.pl_2", 
		"Action=http://127.0.0.1:1080/cgi-bin/login.pl", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://127.0.0.1:1080/cgi-bin/nav.pl?in=home", 
		"Snapshot=t21.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=userSession", "Value=124994.348319158ztcQDQzpHQVzzzzHDifHzpDiAHf", ENDITEM, 
		"Name=username", "Value=jojo", ENDITEM, 
		"Name=password", "Value=bean", ENDITEM, 
		"Name=login.x", "Value=41", ENDITEM, 
		"Name=login.y", "Value=8", ENDITEM, 
		"Name=JSFormSubmit", "Value=off", ENDITEM, 
		LAST);

	return 0;
}
