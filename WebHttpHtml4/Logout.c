Logout()
{

	/* **************Logout************** */

	lr_think_time(31);

	web_url("welcome.pl_4", 
		"URL=http://127.0.0.1:1080/cgi-bin/welcome.pl?signOff=1", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://127.0.0.1:1080/cgi-bin/nav.pl?page=menu&in=flights", 
		"Snapshot=t27.inf", 
		"Mode=HTML", 
		LAST);

	return 0;
}
