SearchUIP_IKSRF()
{
	int indexUIP = 1;

	web_add_header("Upgrade-Insecure-Requests", "1");

	web_url("{URL}", 
		"URL=http://{URL}/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t8.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/runtime-es2015.js", ENDITEM, 
		"Url=/polyfills-es2015.js", ENDITEM, 
		"Url=/styles-es2015.js", ENDITEM, 
		"Url=/vendor-es2015.js", ENDITEM, 
		"Url=/main-es2015.js", ENDITEM, 
		"Url=/assets/fonts/PTSans-Regular.ttf", ENDITEM, 
		"Url=/assets/icons/utility-sprite/svg/symbols.svg", ENDITEM, 
		"Url=/assets/img/s-logo.svg", ENDITEM, 
		"Url=/assets/img/side-menu-title.svg", ENDITEM, 
		"Url=/assets/img/menu/cik-data.svg", ENDITEM, 
		"Url=/assets/img/menu/elector-list.svg", ENDITEM, 
		"Url=/assets/img/menu/sul.svg", ENDITEM, 
		"Url=/assets/img/menu/mobile-uip.svg", ENDITEM, 
		"Url=/assets/img/menu/system-log.svg", ENDITEM, 
		"Url=/assets/img/menu/user-settings.svg", ENDITEM, 
		"Url=/assets/img/menu/case_email.svg", ENDITEM, 
		"Url=/assets/img/menu/upload-file.svg", ENDITEM, 
		"Url=/assets/img/favicon.png", ENDITEM, 
		"Url=/assets/fonts/PTSans-Bold.ttf", ENDITEM, 
		"Url=/PTSans-Italic.ttf", ENDITEM, 
		LAST);

	web_set_sockets_option("SSL_VERSION", "2&3");

	web_add_auto_header("Origin", "http://{URL}");


/*Correlation comment - Do not change!  Original value='f392d4a4-8298-48e7-8311-e7f4f96676cc' Name ='CorrelationParameter' Type ='RecordReplay'*/
	web_reg_save_param_json(
		"ParamName=CorrelationParameter",
		"QueryString=$.token",
		SEARCH_FILTERS,
		"Scope=Body",
		LAST);
		
	web_reg_save_param_json(
		"ParamName=addressId",
		"QueryString=$.user.addressId",
		SEARCH_FILTERS,
		"Scope=Body",
		LAST);

	web_custom_request("login", 
		"URL=http://{URL}/gas-cik-rbd/users/auth/login", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://{URL}/login", 
		"Snapshot=t9.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"username\":\"admin14\",\"password\":\"1111\"}", 
		LAST);

	web_revert_auto_header("Origin");

	web_add_auto_header("X-Auth-Token", "{CorrelationParameter}");

	web_url("elector-table", 
		"URL=http://{URL}/gas-cik-rbd/settings/elector-table", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://{URL}/elector-list", 
		"Snapshot=t10.inf", 
		"Mode=HTML", 
		LAST);

	web_url("gender", 
		"URL=http://{URL}/gas-cik-rbd/nsi/gender", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://{URL}/elector-list", 
		"Snapshot=t11.inf", 
		"Mode=HTML", 
		LAST);

	web_url("capacity", 
		"URL=http://{URL}/gas-cik-rbd/nsi/capacity", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://{URL}/elector-list", 
		"Snapshot=t12.inf", 
		"Mode=HTML", 
		LAST);

	web_url("country", 
		"URL=http://{URL}/gas-cik-rbd/nsi/country", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://{URL}/elector-list", 
		"Snapshot=t13.inf", 
		"Mode=HTML", 
		LAST);

	web_url("nsi.change_univers_type", 
		"URL=http://{URL}/gas-cik-rbd/nsi/nsi.change_univers_type", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://{URL}/elector-list", 
		"Snapshot=t14.inf", 
		"Mode=HTML", 
		LAST);

	web_url("elector_doc_type", 
		"URL=http://{URL}/gas-cik-rbd/nsi/elector_doc_type", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://{URL}/elector-list", 
		"Snapshot=t15.inf", 
		"Mode=HTML", 
		LAST);

	web_url("elector-attributes-types", 
		"URL=http://{URL}/gas-cik-rbd/nsi/elector-attributes-types", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://{URL}/elector-list", 
		"Snapshot=t16.inf", 
		"Mode=HTML", 
		LAST);

	web_url("nsi.change_univers_type_2", 
		"URL=http://{URL}/gas-cik-rbd/nsi/nsi.change_univers_type", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://{URL}/elector-list", 
		"Snapshot=t17.inf", 
		"Mode=HTML", 
		LAST);

	web_url("nsi.change_basis", 
		"URL=http://{URL}/gas-cik-rbd/nsi/nsi.change_basis", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://{URL}/elector-list", 
		"Snapshot=t18.inf", 
		"Mode=HTML", 
		LAST);

	web_url("add-marks-search-criteria", 
		"URL=http://{URL}/gas-cik-rbd/electors/add-marks-search-criteria", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://{URL}/elector-list", 
		"Snapshot=t19.inf", 
		"Mode=HTML", 
		LAST);

	web_url("elections", 
		"URL=http://{URL}/gas-cik-rbd/electors/elections", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://{URL}/elector-list", 
		"Snapshot=t20.inf", 
		"Mode=HTML", 
		LAST);

	web_url("basic-options", 
		"URL=http://{URL}/gas-cik-ukd/search/basic-options", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://{URL}/elector-list", 
		"Snapshot=t21.inf", 
		"Mode=HTML", 
		LAST);

	web_stop_async("ID=Poll_0", 
		LAST);

	web_url("elector_doc_type_2", 
		"URL=http://{URL}/gas-cik-rbd/nsi/elector_doc_type", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://{URL}/elector-list", 
		"Snapshot=t22.inf", 
		"Mode=HTML", 
		LAST);

	web_url("custom-settings", 
		"URL=http://{URL}/gas-cik-ukd/search/custom-settings", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://{URL}/elector-list", 
		"Snapshot=t23.inf", 
		"Mode=HTML", 
		LAST);

	web_url("gender_2", 
		"URL=http://{URL}/gas-cik-rbd/nsi/gender", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://{URL}/elector-list", 
		"Snapshot=t24.inf", 
		"Mode=HTML", 
		LAST);

	web_url("{addressId}", 
		"URL=http://{URL}/gas-cik-rbd/addresses/{addressId}", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://{URL}/elector-list", 
		"Snapshot=t25.inf", 
		"Mode=HTML", 
		LAST);

	web_revert_auto_header("X-Auth-Token");

	web_add_header("Origin", "http://{URL}");

	web_add_header("X-Auth-Token",  "{CorrelationParameter}");

	srand(time(NULL));
	indexUIP = rand() % 10;
	lr_save_int(indexUIP,"index");
	
	web_reg_save_param_json(
		"ParamName=changeLogId",
		"QueryString=$.content.[{index}].changeLogId",
		"NotFound=warning",
		SEARCH_FILTERS,
		LAST);
	
	web_reg_save_param_json(
		"ParamName=sysId",
		"QueryString=$.content.[{index}].sysId",
		"NotFound=warning",
		SEARCH_FILTERS,
		LAST);
	
	web_reg_save_param_json(
		"ParamName=versionDate",
		"QueryString=$.content.[{index}].versionDate",
		"NotFound=warning",
		SEARCH_FILTERS,
		LAST);

	web_custom_request("search", 
		"URL=http://{URL}/gas-cik-rbd/electors/search?size=10&page=1&properties=%5B%7B%22name%22:%22lastName%22,%22direction%22:%22ASC%22%7D%5D&statusFilter=ACTUAL_ONLY&isApproved=true", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://{URL}/elector-list", 
		"Snapshot=t26.inf", 
		"Mode=HTML", 
		"EncType=", 
		EXTRARES, 
		"Url=/assets/icons/standard-sprite/svg/symbols.svg", "Referer=http://{URL}/elector-list?statusFilter=ACTUAL_ONLY&isApproved=true&selectedTab=mainAttrs", ENDITEM, 
		"Url=/assets/icons/action-sprite/svg/symbols.svg", "Referer=http://{URL}/elector-list?statusFilter=ACTUAL_ONLY&isApproved=true&selectedTab=mainAttrs", ENDITEM, 
		LAST);
	
	lr_output_message(lr_eval_string("{sysId}"));
	lr_output_message(lr_eval_string("{index}"));

	return 0;
}