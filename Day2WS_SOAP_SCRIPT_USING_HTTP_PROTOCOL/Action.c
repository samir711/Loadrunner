Action()
{
	//Add the Header ---> Content-Type : text/xml
	
	
	web_add_header("Content-Type","text/xml");
	web_add_auto_header("Accept-Encoding","gzip,deflate");
	web_add_auto_header("SOAPAction","");

	web_reg_find("Text=m:CapitalCityResponse",LAST);
	
	web_reg_find("Fail=Found",
		"Text=Country not found in the database",
		LAST);

	
	
	lr_start_transaction("CapitalCity");
	

	web_custom_request(
	"CaptialCity",
	"METHOD=POST",
	"URL=http://webservices.oorsprong.org/websamples.countryinfo/CountryInfoService.wso",
	"Body=<soapenv:Envelope xmlns:soapenv=\"http://schemas.xmlsoap.org/soap/envelope/\" xmlns:web=\"http://www.oorsprong.org/websamples.countryinfo\">"
   "<soapenv:Header/>"
   "<soapenv:Body>"
     "<web:CapitalCity>"
        "<web:sCountryISOCode>CAN</web:sCountryISOCode>"
      "</web:CapitalCity>"
   "</soapenv:Body>"
   "</soapenv:Envelope>",
	LAST
	);
		
  lr_end_transaction("CapitalCity", LR_AUTO);

	
	return 0;
}
