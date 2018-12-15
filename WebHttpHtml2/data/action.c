Action()
{

	web_url("index.htm", 
		"URL=http://127.0.0.1:1080/WebTours/index.htm", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t7.inf", 
		"Mode=HTML", 
		LAST);

	web_url("header.html", 
		"URL=http://127.0.0.1:1080/WebTours/header.html", 
		"Resource=0", 
		"Referer=http://127.0.0.1:1080/WebTours/index.htm", 
		"Snapshot=t8.inf", 
		"Mode=HTML", 
		LAST);

	web_url("welcome.pl", 
		"URL=http://127.0.0.1:1080/cgi-bin/welcome.pl?signOff=true", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://127.0.0.1:1080/WebTours/index.htm", 
		"Snapshot=t9.inf", 
		"Mode=HTML", 
		LAST);

	web_set_sockets_option("SSL_VERSION", "TLS1.1");

	web_url("seed", 
		"URL=http://clientservices.googleapis.com/chrome-variations/seed?osname=win&channel=stable&milestone=70", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t10.inf", 
		"Mode=HTML", 
		LAST);

	return 0;
}