Action()
{

	web_add_cookie("MSO=SID&1547629148; DOMAIN=127.0.0.1");

	web_url("index.htm", 
		"URL=http://127.0.0.1:1080/WebTours/index.htm", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t2.inf", 
		"Mode=HTML", 
		LAST);

	web_set_sockets_option("SSL_VERSION", "TLS1.1");

	web_url("header.html", 
		"URL=http://127.0.0.1:1080/WebTours/header.html", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=http://127.0.0.1:1080/WebTours/index.htm", 
		"Snapshot=t3.inf", 
		"Mode=HTML", 
		LAST);

	web_url("seed", 
		"URL=http://clientservices.googleapis.com/chrome-variations/seed?osname=win&channel=stable&milestone=71", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t7.inf", 
		"Mode=HTML", 
		LAST);

	web_reg_find("Text=Web Tours", 
		LAST);

	web_reg_find("Text=Web Tours Navigation Bar", 
		LAST);

/*Correlation comment - Do not change!  Original value='125364.925799919zttitfipDHAiDDDDDizQApHfAccf' Name ='userSession' Type ='ResponseBased'*/
	web_reg_save_param_ex(
		"ParamName=userSession",
		"LB=name=\"userSession\" value=\"",
		"RB=\"/>\n<table border",
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
		"Snapshot=t11.inf", 
		"Mode=HTML", 
		LAST);

	web_reg_find("Text=Web Tours", 
		LAST);

	web_reg_find("Text=Web Tours Navigation Bar", 
		LAST);


	lr_think_time(287);

	web_submit_data("login.pl",
		"Action=http://127.0.0.1:1080/cgi-bin/login.pl",
		"Method=POST",
		"TargetFrame=body",
		"RecContentType=text/html",
		"Referer=http://127.0.0.1:1080/cgi-bin/nav.pl?in=home",
		"Snapshot=t16.inf",
		"Mode=HTML",
		ITEMDATA,
		"Name=userSession", "Value={userSession}", ENDITEM,
		"Name=username", "Value=jojo", ENDITEM,
		"Name=password", "Value=bean", ENDITEM,
		"Name=login.x", "Value=35", ENDITEM,
		"Name=login.y", "Value=12", ENDITEM,
		"Name=JSFormSubmit", "Value=off", ENDITEM,
		LAST);

	

	web_reg_find("Text=Web Tours", 
		LAST);

	web_reg_find("Text=Web Tours Navigation Bar", 
		LAST);

	web_reg_find("Text=Welcome to Web Tours", 
		LAST);

	lr_think_time(24);

	web_submit_data("login.pl_2",
		"Action=http://127.0.0.1:1080/cgi-bin/login.pl",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=text/html",
		"Referer=http://127.0.0.1:1080/cgi-bin/nav.pl?username=&password=",
		"Snapshot=t18.inf",
		"Mode=HTML",
		ITEMDATA,
		"Name=userSession", "Value={userSession}", ENDITEM,
		"Name=username", "Value=jojo", ENDITEM,
		"Name=password", "Value=bean", ENDITEM,
		"Name=login.x", "Value=58", ENDITEM,
		"Name=login.y", "Value=18", ENDITEM,
		"Name=JSFormSubmit", "Value=off", ENDITEM,
		LAST);

	web_reg_find("Text=Web Tours", 
		LAST);

	web_reg_find("Text=Web Tours Navigation Bar", 
		LAST);

	web_reg_find("Text=Flight Selections", 
		LAST);

	lr_think_time(4);

	web_url("Search Flights Button", 
		"URL=http://127.0.0.1:1080/cgi-bin/welcome.pl?page=search", 
		"TargetFrame=body", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://127.0.0.1:1080/cgi-bin/nav.pl?page=menu&in=home", 
		"Snapshot=t19.inf", 
		"Mode=HTML", 
		LAST);

	web_reg_find("Text=Flight Selections", 
		LAST);

	lr_think_time(20);

/*Correlation comment: Automatic rules - Do not change!  
Original value='020;338;01/17/2019' 
Name ='outboundFlight' 
Type ='Rule' 
AppName ='Web_tours' 
RuleName ='OutboundFlight_Rule'*/
	web_reg_save_param_regexp(
		"ParamName=outboundFlight",
		"RegExp=name=\"outboundFlight\"\\ value=\"(.*?)\"\\ checked",
		"Ordinal=1",
		SEARCH_FILTERS,
		"Scope=Body",
		LAST);

	web_submit_data("reservations.pl", 
		"Action=http://127.0.0.1:1080/cgi-bin/reservations.pl", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://127.0.0.1:1080/cgi-bin/reservations.pl?page=welcome", 
		"Snapshot=t20.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=advanceDiscount", "Value=0", ENDITEM, 
		"Name=depart", "Value=Denver", ENDITEM, 
		"Name=departDate", "Value=01/17/2019", ENDITEM, 
		"Name=arrive", "Value=London", ENDITEM, 
		"Name=returnDate", "Value=01/18/2019", ENDITEM, 
		"Name=numPassengers", "Value=1", ENDITEM, 
		"Name=seatPref", "Value=None", ENDITEM, 
		"Name=seatType", "Value=Coach", ENDITEM, 
		"Name=findFlights.x", "Value=59", ENDITEM, 
		"Name=findFlights.y", "Value=10", ENDITEM, 
		"Name=.cgifields", "Value=roundtrip", ENDITEM, 
		"Name=.cgifields", "Value=seatType", ENDITEM, 
		"Name=.cgifields", "Value=seatPref", ENDITEM, 
		LAST);

	web_reg_find("Text=Flight Reservation", 
		LAST);

	lr_think_time(12);

	web_submit_data("reservations.pl_2",
		"Action=http://127.0.0.1:1080/cgi-bin/reservations.pl",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=text/html",
		"Referer=http://127.0.0.1:1080/cgi-bin/reservations.pl",
		"Snapshot=t21.inf",
		"Mode=HTML",
		ITEMDATA,
		"Name=outboundFlight", "Value={outboundFlight}", ENDITEM,
		"Name=numPassengers", "Value=1", ENDITEM,
		"Name=advanceDiscount", "Value=0", ENDITEM,
		"Name=seatType", "Value=Coach", ENDITEM,
		"Name=seatPref", "Value=None", ENDITEM,
		"Name=reserveFlights.x", "Value=28", ENDITEM,
		"Name=reserveFlights.y", "Value=9", ENDITEM,
		LAST);

	web_reg_find("Text=Reservation Made!", 
		LAST);

	web_submit_data("reservations.pl_3",
		"Action=http://127.0.0.1:1080/cgi-bin/reservations.pl",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=text/html",
		"Referer=http://127.0.0.1:1080/cgi-bin/reservations.pl",
		"Snapshot=t22.inf",
		"Mode=HTML",
		ITEMDATA,
		"Name=firstName", "Value=Jojo", ENDITEM,
		"Name=lastName", "Value=Bean", ENDITEM,
		"Name=address1", "Value=", ENDITEM,
		"Name=address2", "Value=", ENDITEM,
		"Name=pass1", "Value=Jojo Bean", ENDITEM,
		"Name=creditCard", "Value=", ENDITEM,
		"Name=expDate", "Value=", ENDITEM,
		"Name=oldCCOption", "Value=", ENDITEM,
		"Name=numPassengers", "Value=1", ENDITEM,
		"Name=seatType", "Value=Coach", ENDITEM,
		"Name=seatPref", "Value=None", ENDITEM,
		"Name=outboundFlight", "Value={outboundFlight}", ENDITEM,
		"Name=advanceDiscount", "Value=0", ENDITEM,
		"Name=returnFlight", "Value=", ENDITEM,
		"Name=JSFormSubmit", "Value=off", ENDITEM,
		"Name=buyFlights.x", "Value=53", ENDITEM,
		"Name=buyFlights.y", "Value=10", ENDITEM,
		"Name=.cgifields", "Value=saveCC", ENDITEM,
		LAST);

	web_reg_find("Text=Web Tours", 
		LAST);

	web_reg_find("Text=Web Tours Navigation Bar", 
		LAST);

	web_reg_find("Text=Welcome to Web Tours", 
		LAST);

	lr_think_time(8);

	web_url("Home Button", 
		"URL=http://127.0.0.1:1080/cgi-bin/welcome.pl?page=menus", 
		"TargetFrame=body", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://127.0.0.1:1080/cgi-bin/nav.pl?page=menu&in=flights", 
		"Snapshot=t23.inf", 
		"Mode=HTML", 
		LAST);

	web_reg_find("Text=Web Tours", 
		LAST);

	web_reg_find("Text=Web Tours Navigation Bar", 
		LAST);

	web_url("SignOff Button", 
		"URL=http://127.0.0.1:1080/cgi-bin/welcome.pl?signOff=1", 
		"TargetFrame=body", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://127.0.0.1:1080/cgi-bin/nav.pl?page=menu&in=home", 
		"Snapshot=t24.inf", 
		"Mode=HTML", 
		LAST);

	return 0;
	
//	<form method="post" action="/cgi-bin/login.pl" target="body">
//<input type="hidden" name="userSession" value="125364.960226812zttitzApVtVzzzzHDizQApHzAif"/>
//<table border="0"><tr><td>&nbsp;</td>
}