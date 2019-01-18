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

	web_reg_find("Text=Web Tours Error - Incorrect Password", 
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
		"Name=userSession", "Value=125364.925799919zttitfipDHAiDDDDDizQApHfAccf", ENDITEM, 
		"Name=username", "Value=", ENDITEM, 
		"Name=password", "Value=", ENDITEM, 
		"Name=login.x", "Value=35", ENDITEM, 
		"Name=login.y", "Value=12", ENDITEM, 
		"Name=JSFormSubmit", "Value=off", ENDITEM, 
		LAST);

	lr_think_time(11);

	web_custom_request("update2", 
		"URL=http://update.googleapis.com/service/update2?cup2key=8:3476837551&cup2hreq=bb1effe91bb4c153b46312f9cdeee03edf5f1e59c71b011a81c7dd8ed282bc05", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=", 
		"Snapshot=t17.inf", 
		"Mode=HTML", 
		"EncType=application/xml", 
		"Body=<?xml version=\"1.0\" encoding=\"UTF-8\"?><request protocol=\"3.1\" dedup=\"cr\" acceptformat=\"crx2,crx3\" sessionid=\"{f100f826-6b59-47b4-acf1-46ca8c9cca74}\" requestid=\"{6efa4b2b-e8ec-4f1d-a85a-c4eb96e35108}\" updater=\"chrome\" updaterversion=\"71.0.3578.98\" prodversion=\"71.0.3578.98\" lang=\"en-US\" updaterchannel=\"\" prodchannel=\"\" os=\"win\" arch=\"x64\" nacl_arch=\"x86-64\" domainjoined=\"0\"><hw physmemory=\"32\"/><os platform=\"Windows\" arch=\"x86_64\" version=\""
		"10.0.17134.523\"/><updater autoupdatecheckenabled=\"1\" ismachine=\"1\" lastchecked=\"0\" laststarted=\"0\" name=\"Omaha\" updatepolicy=\"-1\" version=\"1.3.33.23\"/><app appid=\"oimompecagnajdejgnnjijobebaeigek\" version=\"4.10.1224.7\" brand=\"CHBD\" enabled=\"1\"><updatecheck/><ping rd=\"4398\" ping_freshness=\"{e6bb6f8c-e6e3-4249-80fb-fe1253f92ab0}\"/></app><app appid=\"mimojjlkmoijpicakmndhoigimigcmbb\" version=\"32.0.0.114\" brand=\"CHBD\" cohort=\"1:d0j:\" cohortname=\"Chrome [M50... M99]\""
		" enabled=\"1\"><updatecheck/><ping rd=\"4398\" ping_freshness=\"{6cbab600-63fb-489d-80e8-7dbd6998640b}\"/><packages><package fp=\"1.b910a84a7e07d18f20fe546949e5f9e03c9322395c0d6c13e1963d24f4d2d65c\"/></packages></app><app appid=\"hnimpnehoodheedghdeeijklkeaacbdc\" version=\"0.57.44.2492\" brand=\"CHBD\" enabled=\"1\"><updatecheck/><ping rd=\"4398\" ping_freshness=\"{dc0e5112-b2b8-4758-802f-6885fa0c9354}\"/><packages><package fp=\"1.1cd7dc2056afaa0f6a705c9a17d22bba6578b33f5dae9e2d6518a0bfcced2396\""
		"/></packages></app><app appid=\"gcmjkmgdlgnkkcocmoeiminaijmmjnii\" version=\"9.1\" brand=\"CHBD\" cohort=\"1:bm1:\" cohortname=\"M54ToM99\" enabled=\"1\"><updatecheck/><ping rd=\"4398\" ping_freshness=\"{b12fb47e-1fa9-4a80-830d-9d3cea5d96df}\"/><packages><package fp=\"1.22c7dfe769f240e50080a6aad4e3412dbb5603194c5237847147f223fd230be9\"/></packages></app><app appid=\"llkgjffcdpffmhiakmfcdcblohccpfmo\" version=\"0.0.0.0\" brand=\"CHBD\" enabled=\"1\"><updatecheck/><ping rd=\"4398\" ping_freshness=\""
		"{f98b914c-a54b-417d-8a1e-754b80c11887}\"/></app><app appid=\"hfnkpimlhhgieaddgfemjhofmfblmnib\" version=\"4915\" brand=\"CHBD\" cohort=\"1:jcl:\" cohortname=\"Auto\" enabled=\"1\"><updatecheck/><ping rd=\"4398\" ping_freshness=\"{adb54c22-8126-4448-a9e3-197fb420bc46}\"/><packages><package fp=\"1.d965e9bf038bed61570b40ffbf7d4a5cb07883b618960154bb0e92ceea41873b\"/></packages></app><app appid=\"ojjgnpkioondelmggbekfhllhdaimnho\" version=\"1002\" brand=\"CHBD\" cohort=\"1:0:\" cohortname=\"Auto\" "
		"enabled=\"1\"><updatecheck/><ping rd=\"4398\" ping_freshness=\"{c0423d83-dbec-4bf1-b3a3-c887144fb094}\"/><packages><package fp=\"1.f7a746b100e123b3f551ee09c19b3403996a2f7032b2f1327d8fb28502b6e6f0\"/></packages></app><app appid=\"khaoiebndkojlmppeemjhbpbandiljpe\" version=\"26\" brand=\"CHBD\" cohort=\"1:cux:\" cohortname=\"Auto\" enabled=\"1\"><updatecheck/><ping rd=\"4398\" ping_freshness=\"{2c772001-a3ee-4827-894f-ad775b29104d}\"/><packages><package fp=\""
		"1.b7fa09165a7675e638db0a1ce541dbef415c3657b468d2f195c9b32c2fa7f49b\"/></packages></app><app appid=\"giekcmmlnklenlaomppkphknjmnnpneh\" version=\"7\" brand=\"CHBD\" cohort=\"1:j5l:\" cohortname=\"Auto\" enabled=\"1\"><updatecheck/><ping rd=\"4398\" ping_freshness=\"{d71fa139-c703-43a1-8e7d-efba694814a7}\"/><packages><package fp=\"1.3eb16d6c28b502ac4cfee8f4a148df05f4d93229fa36a71db8b08d06329ff18a\"/></packages></app><app appid=\"copjbmjbojbakpaedmpkhmiplmmehfck\" version=\"2018.9.6.0\" brand=\"CHBD"
		"\" cohort=\"1:p1x:\" cohortname=\"Auto\" enabled=\"1\"><updatecheck/><ping rd=\"4398\" ping_freshness=\"{9161cc1b-2405-4003-8451-0daa06cc2571}\"/><packages><package fp=\"1.207921137eee9c0831e0bd890330986c10dfd9382034491b82de3f86ae6915f7\"/></packages></app><app appid=\"aemomkdncapdnfajjbbcbdebjljbpmpj\" version=\"1.0.4.0\" brand=\"CHBD\" enabled=\"1\"><updatecheck/><ping rd=\"4398\" ping_freshness=\"{50664362-d19b-4f1f-9c2b-2c8df538fce2}\"/><packages><package fp=\""
		"1.e8b89decb6a9092d1a53e8c75f566d3b01c9ff0f58857b502e914a24fc56c82e\"/></packages></app><app appid=\"gkmgaooipdjhmangpemjhigmamcehddo\" version=\"36.184.200\" brand=\"CHBD\" tag=\"stable_eset\" cohort=\"1:lsl:\" cohortname=\"ESET Stable\" enabled=\"1\"><updatecheck/><ping rd=\"4398\" ping_freshness=\"{50907348-397e-46a2-8449-dcb88c736179}\"/><packages><package fp=\"1.cc7f6dd639126c8dc7f24a0ed3be27c7a3e9b6a2ca2ed6de0d450ceb311f1be7\"/></packages></app><app appid=\"npdjjkjlcidkjlamlmmdelcjbcpdjocm\" "
		"version=\"0.0.0.0\" brand=\"CHBD\" enabled=\"1\"><updatecheck/><ping rd=\"4398\" ping_freshness=\"{ff5a53a4-7697-425d-8a93-4f677b2bd42d}\"/></app></request>", 
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
		"Name=userSession", "Value=125364.925799919zttitfipDHAiDDDDDizQApHfAccf", ENDITEM, 
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
		"Name=outboundFlight", "Value=020;338;01/17/2019", ENDITEM, 
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
		"Name=outboundFlight", "Value=020;338;01/17/2019", ENDITEM, 
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
}