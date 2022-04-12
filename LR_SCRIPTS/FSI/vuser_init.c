vuser_init()
{
	int rc = 0;
    unsigned long converted_buffer_size_unicode = 0;
    char               *converted_buffer_unicode = NULL;
    rc = lr_convert_string_encoding("Hello world", NULL, LR_ENC_UNICODE, "stringInUnicode");
    lr_output_message("rrr");
    if(rc < 0)
    {
        // error
    }
return 0;
//  web_add_auto_header("Upgrade-Insecure-Requests", "1");

//	web_url("{URL}", 
//		"URL=http://{URL}/", 
//		"Resource=0", 
//		"Referer=", 
//		"Snapshot=t1.inf", 
//		"Mode=HTML", 
//		LAST);
//	
//	web_reg_save_param_regexp(
//		"ParamName=KC_RESTART",
//		"RegExp=KC_RESTART=(.*?);",
//		SEARCH_FILTERS,
//		"Scope=Cookies",
//		"IgnoreRedirections=No",
//		LAST);
//	
//	web_reg_save_param_regexp(
//		"ParamName=AUTH_SESSION_ID",
//		"RegExp=AUTH_SESSION_ID=(.*?);",
//		SEARCH_FILTERS,
//		"Scope=Cookies",
//		"IgnoreRedirections=No",
//		LAST);
//	
//
//	web_url("auth", 
//		"URL=http://{urlLogin}/realms/test/protocol/openid-connect/auth?client_id=ruiptest&redirect_uri=http%3A%2F%2F{URL}&response_type=id_token%20token&scope=openid%20email%20profile&nonce=e34f36a85b0bf90f9f860a1831ce4840d1HDqjlbT&state=8458d7aad919a45c6b2d1543c38d24bcd2ZqW78sp", 
//		"Resource=0", 
//		"RecContentType=text/html", 
//		"Referer=http://{URL}/error", 
//		"Snapshot=t2.inf", 
//		"Mode=HTML", 
//		LAST);
//	
//	web_add_cookie("AUTH_SESSION_ID={AUTH_SESSION_ID}; DOMAIN={urlLogin}");
//
//	web_add_cookie("KC_RESTART={KC_RESTART}; DOMAIN={urlLogin}");
//
//	web_set_sockets_option("SSL_VERSION", "2&3");
//
//	web_revert_auto_header("Upgrade-Insecure-Requests");
//
//	web_add_header("Origin", "http://{URL}");
//
//	web_url("openid-configuration", 
//		"URL=http://{urlLogin}/realms/test/.well-known/openid-configuration", 
//		"Resource=0", 
//		"RecContentType=application/json", 
//		"Referer=http://{URL}/", 
//		"Snapshot=t3.inf", 
//		"Mode=HTML", 
//		LAST);
//
//	web_add_auto_header("Upgrade-Insecure-Requests", "1");
//
//	web_url("auth_2", 
//		"URL=http://{urlLogin}/realms/test/protocol/openid-connect/auth?client_id=ruiptest&redirect_uri=http%3A%2F%2F{URL}&response_type=id_token%20token&scope=openid%20email%20profile&nonce=4c1c447782c8efd4ee04be073f9c28effdPUOYz6c&state=23af0652ea604c53eca2c29df45d6ccb25P9wnNMa", 
//		"Resource=0", 
//		"RecContentType=text/html", 
//		"Referer=http://{URL}/", 
//		"Snapshot=t4.inf", 
//		"Mode=HTML", 
//		EXTRARES, 
//		"Url=/resources/nacxs/login/tvs/node_modules/patternfly/dist/fonts/OpenSans-Bold-webfont.woff2", "Referer=http://{urlLogin}/resources/nacxs/login/tvs/node_modules/patternfly/dist/css/patternfly.min.css", ENDITEM, 
//		LAST);
//
//	web_add_header("Origin", "http://{urlLogin}");
//
///*Correlation comment - Do not change!  Original value='75f8d79c-e114-4689-93a5-e78e5dd329cb' Name ='CorrelationParameter' Type ='RecordReplay'*/
//	web_reg_save_param_regexp(
//		"ParamName=CorrelationParameter",
//		"RegExp=session_state=(.*?-.*?)&",
//		SEARCH_FILTERS,
//		"Scope=Headers",
//		"RequestUrl=*/authenticate*",
//		LAST);
//
///*Correlation comment - Do not change!  Original value='9777b67dce2191432f19d19765ae4ad7deBzevOCl' Name ='state' Type ='ResponseBased'*/
//	web_reg_save_param_regexp(
//		"ParamName=state",
//		"RegExp=state=(.*?)&session_state",
//		SEARCH_FILTERS,
//		"Scope=Headers",
//		"IgnoreRedirections=No",
//		"RequestUrl=*/authenticate*",
//		LAST);
//		
//	web_reg_save_param_regexp(
//		"ParamName=ID_TOKEN",
//		"RegExp=id_token=(.*?)&",
//		SEARCH_FILTERS,
//		"Scope=ALL",
//		"IgnoreRedirections=No",
//		"RequestUrl=*/login-actions/*",
//		LAST);
//
//	web_submit_form("authenticate", 
//		"Snapshot=t5.inf", 
//		ITEMDATA, 
//		"Name=username", "Value={username}", ENDITEM, 
//		"Name=password", "Value=!QAZ1qaz", ENDITEM, 
//		LAST);
////
/////*Correlation comment: Convert Data - Do not change!  Name ='CorrelationParameter' */
////	web_convert_from_formatted("FormattedData=<HP_EXTENSION name=\"Base64\">{CorrelationParameter}</HP_EXTENSION>", 
////		"TargetParam=CorrelationParameter_TOBASE64", 
////		LAST);
//
//	web_revert_auto_header("Upgrade-Insecure-Requests");
//
//	web_add_header("Origin", "http://{URL}");
//
//	web_url("certs", 
//		"URL=http://{urlLogin}/realms/test/protocol/openid-connect/certs", 
//		"Resource=0",
//		"RecContentType=application/json", 
//		"Referer=http://{URL}/", 
//		"Snapshot=t6.inf", 
//		"Mode=HTML", 
//		LAST);
//
//	web_add_auto_header("Username", "{username}");
//	
//	web_add_header("Authorization", "Bearer {ID_TOKEN}");	
//	
//	web_url("{username}", 
//		"URL=http://{URL}/gas-cik-rbd/users/login/{username}", 
//		"Resource=0", 
//		"RecContentType=application/json", 
//		"Referer=http://{URL}/", 
//		"Snapshot=t7.inf", 
//		"Mode=HTML", 
//		LAST);
	return 0;
}