CancelFlight()
{

	/* ***********CancelFlight********** */

	lr_think_time(20);

	web_url("welcome.pl_7", 
		"URL=http://127.0.0.1:1080/cgi-bin/welcome.pl?page=itinerary", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://127.0.0.1:1080/cgi-bin/nav.pl?page=menu&in=flights", 
		"Snapshot=t48.inf", 
		"Mode=HTML", 
		LAST);

	lr_think_time(11);

	web_submit_data("itinerary.pl", 
		"Action=http://127.0.0.1:1080/cgi-bin/itinerary.pl", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://127.0.0.1:1080/cgi-bin/itinerary.pl", 
		"Snapshot=t49.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=1", "Value=on", ENDITEM, 
		"Name=flightID", "Value=292223011-792-sa", ENDITEM, 
		"Name=flightID", "Value=788-1561-JB", ENDITEM, 
		"Name=flightID", "Value=788-2330-JB", ENDITEM, 
		"Name=removeFlights.x", "Value=56", ENDITEM, 
		"Name=removeFlights.y", "Value=10", ENDITEM, 
		"Name=.cgifields", "Value=1", ENDITEM, 
		"Name=.cgifields", "Value=3", ENDITEM, 
		"Name=.cgifields", "Value=2", ENDITEM, 
		LAST);

	return 0;
}
