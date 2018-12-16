Action()
{
	soap_request("StepName=SOAP Request",										
		"URL=http://webservices.oorsprong.org/websamples.countryinfo/CountryInfoService.wso",										
		"SOAPEnvelope="
		"<soapenv:Envelope xmlns:soapenv=\"http://schemas.xmlsoap.org/soap/envelope/\" xmlns:web=\"http://www.oorsprong.org/websamples.countryinfo\">"
			"<soapenv:Header></soapenv:Header>"
			"<soapenv:Body>"
				"<web:CapitalCity>"
					"<web:sCountryISOCode>IND</web:sCountryISOCode>"
				"</web:CapitalCity>"
			"</soapenv:Body>"
		"</soapenv:Envelope>",										
		"SOAPAction=",										
		"ResponseParam=Resp",										
		"Snapshot=t1544979595.inf",									    
		LAST);

	lr_xml_find("XML={Resp}",
	            "Value=New Delhi",
	            "Query=//m:CapitalCityResult",
	            LAST
	           );
	return 0;
}
