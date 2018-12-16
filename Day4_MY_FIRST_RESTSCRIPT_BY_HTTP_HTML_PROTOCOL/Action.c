Action()
{
//	web_url              --> GET
//	web_submit_data      ---> POST
//	web_custom_request    --> No such contraint

	
//transaction
//checkpoint
//parameter
//correaltion

//    
//
//	web_custom_request("LIST USERS",
//	                   "Method=GET",
//	                   "URL=https://reqres.in/api/users?page=1",
//	                   LAST	
//	                  );
	                  
//   web_url("LIST USERS",
//           "URL=https://reqres.in/api/users?page=1",
//           LAST
//           );
//	
  
  
      lr_start_transaction("CREATE USERS");

	
		web_custom_request("CREATE USERS",
	                   "Method=POST",
	                   "URL=https://reqres.in/api/users",
	                   "Body={" 
	                   "\"name\": \"samir\","
                       "\"job\": \"leader\""
                       "}",
	                   LAST	
	                  );
      
      lr_end_transaction("CREATE USERS", LR_AUTO);

	return 0;
}
