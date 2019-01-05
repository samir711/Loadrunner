Action()
{
	
//   web_custom_request("Download 1MB file", 
//		               "Method=GET",
//                       "URL=ftp://speedtest.tele2.net/1MB.zip",
//                       LAST );
//	



   lr_start_transaction("T1");

	web_url("Download 1MB file",
	        "URL=ftp://speedtest.tele2.net/1MB.zip",
	        "Resource=0",
	        "RecContentType=text/html",
	        "Snapshot=t1.inf",
	        "Mode=HTML",
	        LAST	
	);
	
 Download_size = web_get_int_property(HTTP_INFO_DOWNLOAD_SIZE);
 
 lr_output_message("%d",Download_size);
 
 if(Download_size >= 1048576)
 {
 	lr_end_transaction("T1", LR_PASS);

 }
 	
 else
 {
 	lr_end_transaction("T1", LR_FAIL);
 }
	return 0;
}
