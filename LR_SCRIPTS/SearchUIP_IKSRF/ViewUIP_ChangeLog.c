ViewUIP_ChangeLog()
{
	web_add_header("X-Auth-Token", "{CorrelationParameter}");

	web_url("version-history_2", 
		"URL=http://{URL}/gas-cik-rbd/electors/{sysId}/version-history", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://{URL}/elector/version-history/{sysId}/true?statusFilter=ACTUAL_ONLY&isApproved=true&selectedTab=mainAttrs", 
		"Snapshot=t62.inf", 
		"Mode=HTML", 
		LAST);
	
	web_add_header("X-Auth-Token", "{CorrelationParameter}");
	
	web_url("version-difference", 
		"URL=http://{URL}/gas-cik-rbd/electors/{changeLogId}/version-difference", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://{URL}/elector/version-history/{sysId}/true/{changeLogId}?statusFilter=ACTUAL_ONLY&isApproved=true&selectedTab=mainAttrs&isRestricted=false", 
		"Snapshot=t63.inf", 
		"Mode=HTML", 
		LAST);
	
	
	return 0;
}
