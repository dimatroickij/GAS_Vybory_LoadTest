int Poll_1_ResponseCB(

const char *        aResponseHeadersStr,

int                           aResponseHeadersLen,

const char *        aResponseBodyStr,

int                           aResponseBodyLen,

int                           aHttpStatusCode)

{
	lr_save_param_regexp(
		aResponseBodyStr, 
		aResponseBodyLen, 
		//"RegExp=(.*?)",
		"RegExp=printTaskId:([0-9]+)",
		"ResultParam=printTaskId");
	
	lr_output_message(lr_eval_string("{printTaskId}"));

}

OpenDataOnUIK()
{
	int indexElectionCompanyNameId = 1;
	int indexUIK = 1;
	char* addressArray;

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
		
	web_reg_save_param_json(
		"ParamName=kca",
		"QueryString=$.user.kca",
		SEARCH_FILTERS,
		"Scope=Body",
		LAST);
	
	web_reg_save_param_json(
		"ParamName=userId",
		"QueryString=$.user.id",
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
	
	srand(time(NULL));
	indexElectionCompanyNameId = rand() % 10;
	lr_save_int(indexElectionCompanyNameId,"indexElectionCompanyNameId");
	
	srand(time(NULL));
	indexUIK = rand() % 10;
	lr_save_int(indexUIK,"indexUIK");
	
	lr_start_transaction("OpeningPage");
	web_reg_save_param_json(
		"ParamName=electionCompanyNameId",
		"QueryString=$[{indexElectionCompanyNameId}].electionCompanyNameId",
		SEARCH_FILTERS,
		"Scope=Body",
		LAST);

	web_url("election", 
		"URL=http://172.20.101.50/ruip-fsi/election", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://172.20.101.50/fsi/definition-polling-stations", 
		"Snapshot=t74.inf", 
		"Mode=HTML", 
		LAST);
	
	

	web_url("subjects-rf", 
		"URL=http://172.20.101.50/ruip-fsi/nsi/subjects-rf", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://172.20.101.50/fsi/definition-polling-stations?eventId={electionCompanyNameId}", 
		"Snapshot=t75.inf", 
		"Mode=HTML", 
		LAST);
	
	lr_end_transaction("OpeningPage", LR_AUTO);
	
	lr_start_transaction("OpeningPage");

/*Correlation comment - Do not change!  Original value='4640' Name ='tikId' Type ='ResponseBased'*/
	web_reg_save_param_json(
		"ParamName=tikId",
		"QueryString=$[0].subjectId",
		SEARCH_FILTERS,
		"Scope=Body",
		"IgnoreRedirections=No",
		LAST);

	web_url("tik", 
		"URL=http://172.20.101.50/ruip-fsi/subjects/tik?electionCompanyNameId={electionCompanyNameId}&kca={kca}", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://172.20.101.50/fsi/definition-polling-stations?eventId={electionCompanyNameId}", 
		"Snapshot=t76.inf", 
		"Mode=HTML", 
		LAST);

	web_url("subjects-rf_2", 
		"URL=http://172.20.101.50/ruip-fsi/nsi/subjects-rf", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://172.20.101.50/fsi/definition-polling-stations?eventId={electionCompanyNameId}", 
		"Snapshot=t77.inf", 
		"Mode=HTML", 
		LAST);

/*Correlation comment - Do not change!  Original value='9182' Name ='ids' Type ='ResponseBased'*/
	web_reg_save_param_json(
		"ParamName=ids",
		"QueryString=$.content[0].plotsTerritoriesId",
		SEARCH_FILTERS,
		"Scope=Body",
		"IgnoreRedirections=No",
		LAST);

/*Correlation comment - Do not change!  Original value='9188' Name ='ids_1' Type ='ResponseBased'*/
	web_reg_save_param_json(
		"ParamName=ids_1",
		"QueryString=$.content[1].plotsTerritoriesId",
		SEARCH_FILTERS,
		"Scope=Body",
		"IgnoreRedirections=No",
		LAST);

/*Correlation comment - Do not change!  Original value='9194' Name ='ids_2' Type ='ResponseBased'*/
	web_reg_save_param_json(
		"ParamName=ids_2",
		"QueryString=$.content[2].plotsTerritoriesId",
		SEARCH_FILTERS,
		"Scope=Body",
		"IgnoreRedirections=No",
		LAST);

/*Correlation comment - Do not change!  Original value='9265' Name ='ids_3' Type ='ResponseBased'*/
	web_reg_save_param_json(
		"ParamName=ids_3",
		"QueryString=$.content[3].plotsTerritoriesId",
		SEARCH_FILTERS,
		"Scope=Body",
		"IgnoreRedirections=No",
		LAST);

/*Correlation comment - Do not change!  Original value='9264' Name ='ids_4' Type ='ResponseBased'*/
	web_reg_save_param_json(
		"ParamName=ids_4",
		"QueryString=$.content[4].plotsTerritoriesId",
		SEARCH_FILTERS,
		"Scope=Body",
		"IgnoreRedirections=No",
		LAST);

/*Correlation comment - Do not change!  Original value='9267' Name ='ids_5' Type ='ResponseBased'*/
	web_reg_save_param_json(
		"ParamName=ids_5",
		"QueryString=$.content[5].plotsTerritoriesId",
		SEARCH_FILTERS,
		"Scope=Body",
		"IgnoreRedirections=No",
		LAST);

/*Correlation comment - Do not change!  Original value='9269' Name ='ids_6' Type ='ResponseBased'*/
	web_reg_save_param_json(
		"ParamName=ids_6",
		"QueryString=$.content[6].plotsTerritoriesId",
		SEARCH_FILTERS,
		"Scope=Body",
		"IgnoreRedirections=No",
		LAST);

/*Correlation comment - Do not change!  Original value='9271' Name ='ids_7' Type ='ResponseBased'*/
	web_reg_save_param_json(
		"ParamName=ids_7",
		"QueryString=$.content[7].plotsTerritoriesId",
		SEARCH_FILTERS,
		"Scope=Body",
		"IgnoreRedirections=No",
		LAST);

/*Correlation comment - Do not change!  Original value='9276' Name ='ids_8' Type ='ResponseBased'*/
	web_reg_save_param_json(
		"ParamName=ids_8",
		"QueryString=$.content[8].plotsTerritoriesId",
		SEARCH_FILTERS,
		"Scope=Body",
		"IgnoreRedirections=No",
		LAST);

/*Correlation comment - Do not change!  Original value='9278' Name ='ids_9' Type ='ResponseBased'*/
	web_reg_save_param_json(
		"ParamName=ids_9",
		"QueryString=$.content[9].plotsTerritoriesId",
		SEARCH_FILTERS,
		"Scope=Body",
		"IgnoreRedirections=No",
		LAST);
		
	web_reg_save_param_json(
		"ParamName=subjectId",
		"QueryString=$.content[{indexUIK}].subject.subjectId",
		SEARCH_FILTERS,
		"Scope=Body",
		"IgnoreRedirections=No",
		LAST);

	web_url("plots-territories",
		"URL=http://172.20.101.50/ruip-fsi/plots-territories?tikId={tikId}&kca={kca}&sort=districtNum&size=10&electionCompanyNameId={electionCompanyNameId}",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=http://172.20.101.50/fsi/definition-polling-stations?eventId={electionCompanyNameId}",
		"Snapshot=t78.inf",
		"Mode=HTML",
		LAST);
		
	switch (indexUIK) {
		case 0:
			web_reg_save_param_json(
				"ParamName=countUIP",
				"QueryString=$.{ids}",
				SEARCH_FILTERS,
				"Scope=Body",
				"IgnoreRedirections=No",
				LAST);
  			break;
  		case 1:
  			web_reg_save_param_json(
				"ParamName=countUIP",
				"QueryString=$.{ids_1}",
				SEARCH_FILTERS,
				"Scope=Body",
				"IgnoreRedirections=No",
				LAST);
  			break;
  		case 2:
  			web_reg_save_param_json(
				"ParamName=countUIP",
				"QueryString=$.{ids_2}",
				SEARCH_FILTERS,
				"Scope=Body",
				"IgnoreRedirections=No",
				LAST);
  			break;
  		case 3:
  			web_reg_save_param_json(
				"ParamName=countUIP",
				"QueryString=$.{ids_3}",
				SEARCH_FILTERS,
				"Scope=Body",
				"IgnoreRedirections=No",
				LAST);
  			break;
  		case 4:
  			web_reg_save_param_json(
				"ParamName=countUIP",
				"QueryString=$.{ids_4}",
				SEARCH_FILTERS,
				"Scope=Body",
				"IgnoreRedirections=No",
				LAST);
  			break;
  		case 5:
  			web_reg_save_param_json(
				"ParamName=countUIP",
				"QueryString=$.{ids_5}",
				SEARCH_FILTERS,
				"Scope=Body",
				"IgnoreRedirections=No",
				LAST);
  			break;
  		case 6:
  			web_reg_save_param_json(
				"ParamName=countUIP",
				"QueryString=$.{ids_6}",
				SEARCH_FILTERS,
				"Scope=Body",
				"IgnoreRedirections=No",
				LAST);
  			break;
  		case 7:
  			web_reg_save_param_json(
				"ParamName=countUIP",
				"QueryString=$.{ids_7}",
				SEARCH_FILTERS,
				"Scope=Body",
				"IgnoreRedirections=No",
				LAST);
  			break;
  		case 8:
  			web_reg_save_param_json(
				"ParamName=countUIP",
				"QueryString=$.{ids_8}",
				SEARCH_FILTERS,
				"Scope=Body",
				"IgnoreRedirections=No",
				LAST);
  			break;
  		case 9:
  			web_reg_save_param_json(
				"ParamName=countUIP",
				"QueryString=$.{ids_9}",
				SEARCH_FILTERS,
				"Scope=Body",
				"IgnoreRedirections=No",
				LAST);
  			break;
	}

	web_url("count",
		"URL=http://172.20.101.50/ruip-fsi/plots-territories/count?ids={ids}&ids={ids_1}&ids={ids_2}&ids={ids_3}&ids={ids_4}&ids={ids_5}&ids={ids_6}&ids={ids_7}&ids={ids_8}&ids={ids_9}&electionCompanyNameId={electionCompanyNameId}",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=http://172.20.101.50/fsi/definition-polling-stations?eventId={electionCompanyNameId}",
		"Snapshot=t79.inf",
		"Mode=HTML",
		LAST);


	web_url("check-date",
		"URL=http://172.20.101.50/ruip-fsi/election/8/check-date?subjectId={subjectId}",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=http://172.20.101.50/fsi/definition-polling-stations?eventId={electionCompanyNameId}",
		"Snapshot=t86.inf",
		"Mode=HTML",
		LAST);
		
	lr_end_transaction("OpeningPage", LR_AUTO);
	
	lr_start_transaction("OpeningPage");

	web_url("plots-territories_5",
		"URL=http://172.20.101.50/ruip-fsi/plots-territories?subjectId={subjectId}&sort=districtNum&electionCompanyNameId={electionCompanyNameId}",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=http://172.20.101.50/fsi/definition-polling-stations?eventId={electionCompanyNameId}&uikId={subjectId}",
		"Snapshot=t87.inf",
		"Mode=HTML",
		LAST);

	web_url("addresses",
		"URL=http://172.20.101.50/ruip-fsi/subjects/uik/{subjectId}/addresses",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=http://172.20.101.50/fsi/definition-polling-stations?eventId={electionCompanyNameId}&uikId={subjectId}",
		"Snapshot=t88.inf",
		"Mode=HTML",
		LAST);

	web_url("global-settings",
		"URL=http://172.20.101.50/ruip-fsi/global-settings",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=http://172.20.101.50/fsi/setting-up-elector-list?eventId={electionCompanyNameId}&uikId={subjectId}",
		"Snapshot=t89.inf",
		"Mode=HTML",
		LAST);

	web_url("global-settings_2",
		"URL=http://172.20.101.50/ruip-fsi/global-settings",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=http://172.20.101.50/fsi/setting-up-elector-list?eventId={electionCompanyNameId}&uikId={subjectId}",
		"Snapshot=t90.inf",
		"Mode=HTML",
		LAST);

	web_url("check-date_2",
		"URL=http://172.20.101.50/ruip-fsi/election/8/check-date?subjectId={subjectId}",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=http://172.20.101.50/fsi/setting-up-elector-list?eventId=8&uikId={subjectId}",
		"Snapshot=t91.inf",
		"Mode=HTML",
		LAST);

	web_url("global-settings_3",
		"URL=http://172.20.101.50/ruip-fsi/global-settings",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=http://172.20.101.50/fsi/setting-up-elector-list?eventId={electionCompanyNameId}&uikId={subjectId}",
		"Snapshot=t92.inf",
		"Mode=HTML",
		LAST);

	web_url("report-template",
		"URL=http://172.20.101.50/ruip-fsi/report-template?companyNameId={electionCompanyNameId}&mode=33",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=http://172.20.101.50/fsi/setting-up-elector-list?eventId={electionCompanyNameId}&uikId={subjectId}",
		"Snapshot=t93.inf",
		"Mode=HTML",
		LAST);

	web_url("report-template_2",
		"URL=http://172.20.101.50/ruip-fsi/report-template?companyNameId={electionCompanyNameId}&mode=9",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=http://172.20.101.50/fsi/setting-up-elector-list?eventId={electionCompanyNameId}&uikId={subjectId}",
		"Snapshot=t94.inf",
		"Mode=HTML",
		LAST);
		
	web_url("report-template_3",
		"URL=http://172.20.101.50/ruip-fsi/report-template?companyNameId={electionCompanyNameId}&mode=2",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=http://172.20.101.50/fsi/setting-up-elector-list?eventId={electionCompanyNameId}&uikId={subjectId}",
		"Snapshot=t94.inf",
		"Mode=HTML",
		LAST);

	web_url("addresses-list-contain",
		"URL=http://172.20.101.50/ruip-fsi/subjects/uik/{subjectId}/addresses-list-contain",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=http://172.20.101.50/fsi/setting-up-elector-list?eventId={electionCompanyNameId}&uikId={subjectId}",
		"Snapshot=t95.inf",
		"Mode=HTML",
		LAST);
	
	

	web_add_header("Origin", 
		"http://172.20.101.50");
	
	web_reg_save_param_json(
		"ParamName=pointIssueListId",
		"QueryString=$.[0].pointIssueListId",
		SEARCH_FILTERS,
		"Scope=Body",
		"IgnoreRedirections=No",
		LAST);

	web_custom_request("point-issue-list",
		"URL=http://172.20.101.50/ruip-fsi/point-issue-list",
		"Method=POST",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=http://172.20.101.50/fsi/setting-up-elector-list?eventId={electionCompanyNameId}&uikId={subjectId}",
		"Snapshot=t96.inf",
		"Mode=HTML",
		"EncType=application/json",
		"BodyBinary=[{\"namePoint\":\"\\xD0\\x9A\\xD0\\xBD\\xD0\\xB8\\xD0\\xB3\\xD0\\xB0 \\xE2\\x84\\x961\",\"pointNumber\":1,\"subjectId\":\"{subjectId}\"}]",
		LAST);

	web_url("report-template_3",
		"URL=http://172.20.101.50/ruip-fsi/report-template?companyNameId={electionCompanyNameId}&mode=2",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=http://172.20.101.50/fsi/setting-up-elector-list?eventId={electionCompanyNameId}&uikId={subjectId}",
		"Snapshot=t97.inf",
		"Mode=HTML",
		LAST);

	web_add_header("Origin", 
		"http://172.20.101.50");

	web_custom_request("link",
		"URL=http://172.20.101.50/ruip-fsi/point-issue-list/link",
		"Method=POST",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=http://172.20.101.50/fsi/setting-up-elector-list?eventId={electionCompanyNameId}&uikId={subjectId}",
		"Snapshot=t98.inf",
		"Mode=HTML",
		"EncType=application/json",
		"BodyBinary=[{\"from\":\"\\xD0\\x90\",\"nodeId\":\"320495\",\"pointIssueId\":\"93\",\"to\":\"\\xD0\\xAF\"},{\"from\":\"\\xD0\\x90\",\"nodeId\":\"320784\",\"pointIssueId\":\"93\",\"to\":\"\\xD0\\xAF\"},{\"from\":\"\\xD0\\x90\",\"nodeId\":\"320776\",\"pointIssueId\":\"93\",\"to\":\"\\xD0\\xAF\"},{\"from\":\"\\xD0\\x90\",\"nodeId\":\"320779\",\"pointIssueId\":\"93\",\"to\":\"\\xD0\\xAF\"},{\"from\":\"\\xD0\\x90\",\"nodeId\":\"320781\",\"pointIssueId\":\"93\",\"to\":\"\\xD0\\xAF\"},{\"from\":\"\\xD0\\x90\",\"nodeId\":\"320788\",\"pointIssueId\":\"93\",\"to\":\"\\xD0\\xAF\"},{\"from\":\"\\xD0\\x90\",\"nodeId\":\"320512\",\"pointIssueId\":\"93\",\"to\":\"\\xD0\\xAF\"},{\"from\":\"\\xD0\\x90\",\"nodeId\":\"320513\",\"pointIssueId\":\"93\",\"to\":\"\\xD0\\xAF\"},{\"from\":\"\\xD0\\x90\",\"nodeId\":\"320791\",\"pointIssueId\":\"93\",\"to\":\"\\xD0\\xAF\"},{\"from\":\"\\xD0\\x90\",\"nodeId\":\"320790\",\"pointIssueId\":\"93\",\"to\":\"\\xD0\\xAF\"},{\"from\":\"\\xD0\\x90\",\"nodeId\":\"320789\",\"pointIssueId\":\"93\","
		"\"to\":\"\\xD0\\xAF\"},{\"from\":\"\\xD0\\x90\",\"nodeId\":\"320530\",\"pointIssueId\":\"93\",\"to\":\"\\xD0\\xAF\"},{\"from\":\"\\xD0\\x90\",\"nodeId\":\"320792\",\"pointIssueId\":\"93\",\"to\":\"\\xD0\\xAF\"},{\"from\":\"\\xD0\\x90\",\"nodeId\":\"320547\",\"pointIssueId\":\"93\",\"to\":\"\\xD0\\xAF\"},{\"from\":\"\\xD0\\x90\",\"nodeId\":\"320566\",\"pointIssueId\":\"93\",\"to\":\"\\xD0\\xAF\"},{\"from\":\"\\xD0\\x90\",\"nodeId\":\"320569\",\"pointIssueId\":\"93\",\"to\":\"\\xD0\\xAF\"},{\"from\":\"\\xD0\\x90\",\"nodeId\":\"320640\",\"pointIssueId\":\"93\",\"to\":\"\\xD0\\xAF\"},{\"from\":\"\\xD0\\x90\",\"nodeId\":\"320659\",\"pointIssueId\":\"93\",\"to\":\"\\xD0\\xAF\"},{\"from\":\"\\xD0\\x90\",\"nodeId\":\"320720\",\"pointIssueId\":\"93\",\"to\":\"\\xD0\\xAF\"},{\"from\":\"\\xD0\\x90\",\"nodeId\":\"320748\",\"pointIssueId\":\"93\",\"to\":\"\\xD0\\xAF\"},{\"from\":\"\\xD0\\x90\",\"nodeId\":\"320794\",\"pointIssueId\":\"93\",\"to\":\"\\xD0\\xAF\"},{\"from\":\"\\xD0\\x90\",\"nodeId\":\"320795\",\"pointIssue"
		"Id\":\"93\",\"to\":\"\\xD0\\xAF\"},{\"from\":\"\\xD0\\x90\",\"nodeId\":\"320478\",\"pointIssueId\":\"93\",\"to\":\"\\xD0\\xAF\"},{\"from\":\"\\xD0\\x90\",\"nodeId\":\"320438\",\"pointIssueId\":\"93\",\"to\":\"\\xD0\\xAF\"},{\"from\":\"\\xD0\\x90\",\"nodeId\":\"320443\",\"pointIssueId\":\"93\",\"to\":\"\\xD0\\xAF\"},{\"from\":\"\\xD0\\x90\",\"nodeId\":\"320481\",\"pointIssueId\":\"93\",\"to\":\"\\xD0\\xAF\"},{\"from\":\"\\xD0\\x90\",\"nodeId\":\"320476\",\"pointIssueId\":\"93\",\"to\":\"\\xD0\\xAF\"},{\"from\":\"\\xD0\\x90\",\"nodeId\":\"320477\",\"pointIssueId\":\"93\",\"to\":\"\\xD0\\xAF\"},{\"from\":\"\\xD0\\x90\",\"nodeId\":\"320480\",\"pointIssueId\":\"93\",\"to\":\"\\xD0\\xAF\"},{\"from\":\"\\xD0\\x90\",\"nodeId\":\"320439\",\"pointIssueId\":\"93\",\"to\":\"\\xD0\\xAF\"},{\"from\":\"\\xD0\\x90\",\"nodeId\":\"320456\",\"pointIssueId\":\"93\",\"to\":\"\\xD0\\xAF\"},{\"from\":\"\\xD0\\x90\",\"nodeId\":\"320441\",\"pointIssueId\":\"93\",\"to\":\"\\xD0\\xAF\"},{\"from\":\"\\xD0\\x90\",\"nodeId\":\"320472\","
		"\"pointIssueId\":\"93\",\"to\":\"\\xD0\\xAF\"},{\"from\":\"\\xD0\\x90\",\"nodeId\":\"320444\",\"pointIssueId\":\"93\",\"to\":\"\\xD0\\xAF\"},{\"from\":\"\\xD0\\x90\",\"nodeId\":\"320482\",\"pointIssueId\":\"93\",\"to\":\"\\xD0\\xAF\"},{\"from\":\"\\xD0\\x90\",\"nodeId\":\"320484\",\"pointIssueId\":\"93\",\"to\":\"\\xD0\\xAF\"},{\"from\":\"\\xD0\\x90\",\"nodeId\":\"320492\",\"pointIssueId\":\"93\",\"to\":\"\\xD0\\xAF\"},{\"from\":\"\\xD0\\x90\",\"nodeId\":\"320490\",\"pointIssueId\":\"93\",\"to\":\"\\xD0\\xAF\"},{\"from\":\"\\xD0\\x90\",\"nodeId\":\"320458\",\"pointIssueId\":\"93\",\"to\":\"\\xD0\\xAF\"},{\"from\":\"\\xD0\\x90\",\"nodeId\":\"320488\",\"pointIssueId\":\"93\",\"to\":\"\\xD0\\xAF\"},{\"from\":\"\\xD0\\x90\",\"nodeId\":\"320800\",\"pointIssueId\":\"93\",\"to\":\"\\xD0\\xAF\"},{\"from\":\"\\xD0\\x90\",\"nodeId\":\"320797\",\"pointIssueId\":\"93\",\"to\":\"\\xD0\\xAF\"},{\"from\":\"\\xD0\\x90\",\"nodeId\":\"320801\",\"pointIssueId\":\"93\",\"to\":\"\\xD0\\xAF\"},{\"from\":\"\\xD0\\x90\",\"nodeId\""
		":\"320799\",\"pointIssueId\":\"93\",\"to\":\"\\xD0\\xAF\"},{\"from\":\"\\xD0\\x90\",\"nodeId\":\"320798\",\"pointIssueId\":\"93\",\"to\":\"\\xD0\\xAF\"}]",
		LAST);

	web_url("addresses-list-contain_2",
		"URL=http://172.20.101.50/ruip-fsi/subjects/uik/{subjectId}/addresses-list-contain",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=http://172.20.101.50/fsi/setting-up-elector-list?eventId={electionCompanyNameId}&uikId={subjectId}",
		"Snapshot=t100.inf",
		"Mode=HTML",
		LAST);
		
	

	web_url("point-issue",
		"URL=http://172.20.101.50/ruip-fsi/subjects/uik/{subjectId}/point-issue",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=http://172.20.101.50/fsi/setting-up-elector-list?eventId={electionCompanyNameId}&uikId={subjectId}",
		"Snapshot=t101.inf",
		"Mode=HTML",
		LAST);
	
	lr_end_transaction("OpeningPage", LR_AUTO);
	
	lr_start_transaction("OpeningPage");
	
	web_custom_request("history-voters",
		"URL=http://172.20.101.50/ruip-fsi/print-document/history-voters",
		"Method=POST",
		"Resource=0",
		"Referer=http://172.20.101.50/fsi/setting-up-elector-list?eventId={electionCompanyNameId}&uikId={subjectId}",
		"Snapshot=t103.inf",
		"Mode=HTML",
		"EncType=application/json",
		"Body=[{\"additionalForm\":false,\"electionCompanyNameId\":{electionCompanyNameId},\"electorsCounts\":[{countUIP}],\"emptyFormAmount\":0,\"globalSettingsName\":\"TEMPLATE_VOTER_LIST_FORM\",\"kca\":\"{kca}\",\"numerationMode\":\"THROUGH\",\"pointId\":\"{pointIssueListId}\",\"printType\":\"{\\\"additionalForm\\\":false,\\\"electionCompanyNameId\\\":{electionCompanyNameId},\\\"electorsCounts\\\":[{countUIP}],\\\"emptyFormAmount\\\":0,\\\"globalSettingsName\\\":\\\"TEMPLATE_VOTER_LIST_FORM\\\",\\\"kca\\\":\\\"{kca}\\\",\\\"numerationMode\\\":\\\"THROUGH\\\",\\\"pointId\\\":\\\"{pointIssueListId}\\\",\\\"printType\\\":\\\"\\\",\\\"registerMode\\\":\\\"WITH_CAPITAL\\\",\\\"tempalteId\\\":38,\\\"templateIndividualForm\\\":false,\\\"templateVoterListForm\\\":true,\\\"userId\\\":\\\"{userId}\\\"}\",\"registerMode\":\"WITH_CAPITAL\",\"tempalteId\":38,\"templateIndividualForm\":false,\"templateVoterListForm\":true,\"userId\":\"{userId}\"}]",
		LAST);

	web_url("hasIntersections",
		"URL=http://172.20.101.50/ruip-fsi/plots-territories/hasIntersections?id={subjectId}",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=http://172.20.101.50/fsi/setting-up-elector-list?eventId={electionCompanyNameId}&uikId={subjectId}",
		"Snapshot=t104.inf",
		"Mode=HTML",
		LAST);
	
	lr_end_transaction("OpeningPage", LR_AUTO);

	web_add_auto_header("Origin", 
		"http://172.20.101.50");

	lr_start_transaction("createListUIP");

/* Added by Async CodeGen.
ID=Poll_1
ScanType = Recording

The following URLs are considered part of this conversation:
	http://172.20.101.50/ruip-fsi/print-document/status

TODO - The following callbacks have been added to AsyncCallbacks.c.
Add your code to the callback implementations as necessary.
	Poll_1_RequestCB
	Poll_1_ResponseCB
 */
	web_reg_async_attributes("ID=Poll_1", 
		"Pattern=Poll", 
		"URL=http://172.20.101.50/ruip-fsi/print-document/status", 
		"PollIntervalMs=3000", 
//		"RequestCB=Poll_1_RequestCB", 
		"ResponseCB=Poll_1_ResponseCB", 
		LAST);	
//		
//		web_reg_save_param_json(
//		"ParamName=printTaskId",
//		"QueryString=$.[0].printTaskId",
//		SEARCH_FILTERS,
//		"Scope=Body",
//		"IgnoreRedirections=No",
//		LAST);
	
	web_custom_request("status",
		"URL=http://172.20.101.50/ruip-fsi/print-document/status",
		"Method=POST",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=http://172.20.101.50/fsi/setting-up-elector-list?eventId=8&uikId={subjectId}",
		"Snapshot=t106.inf",
		"Mode=HTML",
		"EncType=application/json",
		"Body=[{\"electionCompanyNameId\":{electionCompanyNameId},\"kca\":\"{kca}\",\"printType\":\"{\\\"additionalForm\\\":false,\\\"electionCompanyNameId\\\":{electionCompanyNameId},\\\"electorsCounts\\\":[{countUIP}],\\\"emptyFormAmount\\\":0,\\\"globalSettingsName\\\":\\\"TEMPLATE_VOTER_LIST_FORM\\\",\\\"kca\\\":\\\"{kca}\\\",\\\"numerationMode\\\":\\\"THROUGH\\\",\\\"pointId\\\":\\\"{pointIssueListId}\\\",\\\"printType\\\":\\\"\\\",\\\"registerMode\\\":\\\"WITH_CAPITAL\\\",\\\"tempalteId\\\":38,\\\"templateIndividualForm\\\":false,\\\"templateVoterListForm\\\":true,\\\"userId\\\":\\\"{userId}\\\"}\",\"subjectGlobalId\":\"{subjectId}\",\"templateId\":38,\"userId\":\"{userId}\"}]",
		LAST);

	web_custom_request("print-document",
		"URL=http://172.20.101.50/ruip-fsi/print-document",
		"Method=POST",
		"Resource=0",
		"Referer=http://172.20.101.50/fsi/setting-up-elector-list?eventId=8&uikId={subjectId}",
		"Snapshot=t107.inf",
		"Mode=HTML",
		"EncType=application/json",
		"Body=[{\"additionalForm\":false,\"electionCompanyNameId\":{electionCompanyNameId},\"electorsCounts\":[{countUIP}],\"emptyFormAmount\":0,\"globalSettingsName\":\"TEMPLATE_VOTER_LIST_FORM\",\"kca\":\"{kca}\",\"numerationMode\":\"THROUGH\",\"pointId\":\"{pointIssueListId}\",\"printType\":\"{\\\"additionalForm\\\":false,\\\"electionCompanyNameId\\\":{electionCompanyNameId},\\\"electorsCounts\\\":[{countUIP}],\\\"emptyFormAmount\\\":0,\\\"globalSettingsName\\\":\\\"TEMPLATE_VOTER_LIST_FORM\\\",\\\"kca\\\":\\\"{kca}\\\",\\\"numerationMode\\\":\\\"THROUGH\\\",\\\"pointId\\\":\\\"{pointIssueListId}\\\",\\\"printType\\\":\\\"\\\",\\\"registerMode\\\":\\\"WITH_CAPITAL\\\",\\\"tempalteId\\\":38,\\\"templateIndividualForm\\\":false,\\\"templateVoterListForm\\\":true,\\\"userId\\\":\\\"{userId}\\\"}\",\"registerMode\":\"WITH_CAPITAL\",\"tempalteId\":38,\"templateIndividualForm\":false,\"templateVoterListForm\":true,\"userId\":\"{userId}\"}]",
		LAST);
		
		
	web_stop_async("ID=Poll_1", 
		LAST);

	web_custom_request("document",
		"URL=http://172.20.101.50/ruip-fsi/print-document/document?ids={printTaskId}",
		"Method=POST",
		"Resource=0",
		"RecContentType=application/octet-stream",
		"Referer=http://172.20.101.50/fsi/setting-up-elector-list?eventId={electionCompanyNameId}&uikId={subjectId}",
		"Snapshot=t119.inf",
		"Mode=HTML",
		"EncType=application/json",
		LAST);
		
	lr_end_transaction("createListUIP", LR_AUTO);

	return 0;
}