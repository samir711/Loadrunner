Action()
{
	
//	 http://webservices.oorsprong.org/websamples.countryinfo/CountryInfoService.wso?WSDL
//    https://codebeautify.org/Xpath-Tester

	//web_reg_find() - will not work;
	
	lr_start_transaction("T");
	web_service_call( "StepName=CapitalCity_101",
		"SOAPMethod=CountryInfoService|CountryInfoServiceSoap|CapitalCity",
		"ResponseParam=Resp",
		"Service=CountryInfoService",
		"ExpectedResponse=SoapResult",
		"Snapshot=t1544859843.inf",
		BEGIN_ARGUMENTS,
		"sCountryISOCode=AUS",
		END_ARGUMENTS,
		BEGIN_RESULT,
		"CapitalCityResult=CapCity",
		END_RESULT,
		LAST);
	
	
	//lr_xml_find();
	
	Xml_find_Cnt = lr_xml_find("Xml={Resp}",
                "Query=//m:CapitalCityResult",
                "Value={CapCity}",
                 "SELECTALL=yes",
                 LAST
    );  
   
	if(Xml_find_Cnt > 0 ) {
		lr_end_transaction("T", LR_PASS);
		
	}
	else {
		lr_end_transaction("T", LR_FAIL);
	}
	
	lr_xml_get_values("Xml={Resp}",
	                 "ValueParam=Param_city",
                     "Query=//m:CapitalCityResult",
	                 LAST	                
	                );
	
	return 0;
}
