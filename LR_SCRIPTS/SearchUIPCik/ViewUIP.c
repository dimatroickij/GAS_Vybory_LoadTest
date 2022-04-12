ViewUIP()
{
	
	web_add_header("X-Auth-Token", "{CorrelationParameter}");

	web_url("{sysId}", 
		"URL=http://{URL}/gas-cik-rbd/electors/docs-for-departured/{sysId}", 
		"Resource=0", 
		"Referer=http://{URL}/elector/{sysId}/true?statusFilter=ACTUAL_ONLY&isApproved=true&selectedTab=mainAttrs", 
		"Snapshot=t45.inf", 
		"Mode=HTML", 
		LAST);
	
	web_add_header("X-Auth-Token",
		"{CorrelationParameter}");
	
	
	web_reg_save_param_json(
		"ParamName=changeDate",
		"QueryString=$.changeDate",
		"NotFound=warning",
		SEARCH_FILTERS,
		LAST);
	
	web_reg_save_param_json(
		"ParamName=electorDoc",
		"QueryString=$.electorDoc",
		"NotFound=warning",
		SEARCH_FILTERS,
		LAST);
	
//	web_reg_save_param("last-active","LB=","RB=","Search=Body",LAST);
	
	web_url("last-active", 
		"URL=http://{URL}/gas-cik-rbd/electors/{sysId}/last-active", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://{URL}/elector/{sysId}/true?statusFilter=ACTUAL_ONLY&isApproved=true&selectedTab=mainAttrs", 
		"Snapshot=t48.inf", 
		"Mode=HTML", 
		LAST);
	
	
	lr_output_message(lr_eval_string("{last-active}"));
	
	lr_output_message(lr_eval_string("{changeDate}"));

	
	
	web_add_header("X-Auth-Token",
		"{CorrelationParameter}");
	
	web_reg_save_param("version-history","LB=","RB=","Search=Body",LAST);
	
	web_reg_save_param_json(
		"ParamName=isActual",
		"QueryString=$.isActual",
		"NotFound=warning",
		SEARCH_FILTERS,
		LAST);
	
//	lr_output_message(lr_eval_string("{version-history}"));
	
//	lr_eval_json("Buffer={version-history}",
//                 "JsonObject=jsonVersionHistory", LAST);
//	
//	lr_json_get_values("JsonObject=jsonVersionHistory",
//                       "ValueParam=CA",
//                       "QueryString=$.logs",
//                       LAST);
//	
	web_url("version-history", 
		"URL=http://{URL}/gas-cik-rbd/electors/{sysId}/version-history", 
		"Resource=0",
		"RecContentType=application/json", 
		"Referer=http://{URL}/elector/{sysId}/true?statusFilter=ACTUAL_ONLY&isApproved=true&selectedTab=mainAttrs", 
		"Snapshot=t47.inf", 
		"Mode=HTML", 
		LAST);
	
	web_add_header("X-Auth-Token",
		"{CorrelationParameter}");

	web_url("nsi.change_basis_2", 
		"URL=http://{URL}/gas-cik-rbd/nsi/nsi.change_basis?isDeprecated=false", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://{URL}/elector/{sysId}/true?statusFilter=ACTUAL_ONLY&isApproved=true&selectedTab=mainAttrs", 
		"Snapshot=t46.inf", 
		"Mode=HTML", 
		LAST);
	
	web_add_header("X-Auth-Token",
		"{CorrelationParameter}");

	web_url("gender_3", 
		"URL=http://{URL}/gas-cik-rbd/nsi/gender", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://{URL}/elector/{sysId}/true?statusFilter=ACTUAL_ONLY&isApproved=true&selectedTab=mainAttrs", 
		"Snapshot=t49.inf", 
		"Mode=HTML", 
		LAST);
	
	web_add_header("X-Auth-Token",
		"{CorrelationParameter}");

	web_url("capacity_2", 
		"URL=http://{URL}/gas-cik-rbd/nsi/capacity", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://{URL}/elector/{sysId}/true?statusFilter=ACTUAL_ONLY&isApproved=true&selectedTab=mainAttrs", 
		"Snapshot=t50.inf", 
		"Mode=HTML", 
		LAST);
	
	web_add_header("X-Auth-Token",
		"{CorrelationParameter}");

	web_url("elector_doc_type_3", 
		"URL=http://{URL}/gas-cik-rbd/nsi/elector_doc_type", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://{URL}/elector/{sysId}/true?statusFilter=ACTUAL_ONLY&isApproved=true&selectedTab=mainAttrs", 
		"Snapshot=t51.inf", 
		"Mode=HTML", 
		LAST);
	
	web_add_header("X-Auth-Token",
		"{CorrelationParameter}");

	web_url("country_2", 
		"URL=http://{URL}/gas-cik-rbd/nsi/country", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://{URL}/elector/{sysId}/true?statusFilter=ACTUAL_ONLY&isApproved=true&selectedTab=mainAttrs", 
		"Snapshot=t52.inf", 
		"Mode=HTML", 
		LAST);
	
	web_add_header("X-Auth-Token",
		"{CorrelationParameter}");

	web_url("residence-kinds", 
		"URL=http://{URL}/gas-cik-rbd/nsi/residence-kinds", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://{URL}/elector/{sysId}/true?statusFilter=ACTUAL_ONLY&isApproved=true&selectedTab=mainAttrs", 
		"Snapshot=t53.inf", 
		"Mode=HTML", 
		LAST);
	
	web_add_header("X-Auth-Token",
		"{CorrelationParameter}");

	web_url("elector-kinds", 
		"URL=http://{URL}/gas-cik-rbd/nsi/elector-kinds", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://{URL}/elector/{sysId}/true?statusFilter=ACTUAL_ONLY&isApproved=true&selectedTab=mainAttrs", 
		"Snapshot=t54.inf", 
		"Mode=HTML", 
		LAST);
	
	web_add_header("X-Auth-Token",
		"{CorrelationParameter}");
//
//	web_reg_save_param("add-attributes","LB=","RB=","Search=Body",LAST);
	
	web_url("add-attributes", 
		"URL=http://{URL}/gas-cik-rbd/electors/{sysId}/add-attributes", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://{URL}/elector/{sysId}/true?statusFilter=ACTUAL_ONLY&isApproved=true&selectedTab=mainAttrs", 
		"Snapshot=t55.inf", 
		"Mode=HTML", 
		LAST);
	
//	lr_eval_json("Buffer={add-attributes}",
//                 "JsonObject=jsonAddAttributes", LAST);
	
//	lr_json_get_values("JsonObject=json_listCA",
//                       "ValueParam=CA",
//                       "QueryString=$.data.[{index}].Œ√–Õ",
//                       LAST);
//	
	web_add_header("X-Auth-Token",
		"{CorrelationParameter}");

	web_url("elector-attributes-types_2", 
		"URL=http://{URL}/gas-cik-rbd/nsi/elector-attributes-types", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://{URL}/elector/{sysId}/true?statusFilter=ACTUAL_ONLY&isApproved=true&selectedTab=mainAttrs", 
		"Snapshot=t56.inf", 
		"Mode=HTML", 
		LAST);
	
	web_add_header("X-Auth-Token",
		"{CorrelationParameter}");

	web_url("nsi.change_basis_3", 
		"URL=http://{URL}/gas-cik-rbd/nsi/nsi.change_basis?prevId=1&isDeprecated=false", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://{URL}/elector/{sysId}/true?statusFilter=ACTUAL_ONLY&isApproved=true&selectedTab=mainAttrs", 
		"Snapshot=t57.inf", 
		"Mode=HTML", 
		LAST);
	
	web_add_header("X-Auth-Token",
		"{CorrelationParameter}");

	web_url("add-attributes_2", 
		"URL=http://{URL}/gas-cik-rbd/electors/{sysId}/add-attributes", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://{URL}/elector/{sysId}/true?statusFilter=ACTUAL_ONLY&isApproved=true&selectedTab=mainAttrs", 
		"Snapshot=t58.inf", 
		"Mode=HTML", 
		LAST);
	
	return 0;
}
