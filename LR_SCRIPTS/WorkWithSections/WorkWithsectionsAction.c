WorkWithsectionsAction()
{
	lr_start_transaction("OpeningPage");
	web_add_header("Authorization", "Bearer {ID_TOKEN}");
	
	web_url("history", 
		"URL=http://{URL}/gas-cik-rbd/settings/elector-table", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://{URL}/elector-list", 
		"Snapshot=t8.inf", 
		"Mode=HTML", 
		LAST);
	
	web_add_header("Authorization", "Bearer {ID_TOKEN}");
	web_url("gender", 
		"URL=http://{URL}/gas-cik-rbd/nsi/gender", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://{URL}/elector-list", 
		"Snapshot=t9.inf", 
		"Mode=HTML", 
		LAST);
	
	web_add_header("Authorization", "Bearer {ID_TOKEN}");
	web_url("capacity", 
		"URL=http://{URL}/gas-cik-rbd/nsi/capacity", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://{URL}/elector-list", 
		"Snapshot=t10.inf", 
		"Mode=HTML", 
		LAST);
	
	web_add_header("Authorization", "Bearer {ID_TOKEN}");
	web_url("country", 
		"URL=http://{URL}/gas-cik-rbd/nsi/country", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://{URL}/elector-list", 
		"Snapshot=t11.inf", 
		"Mode=HTML", 
		LAST);
	
	web_add_header("Authorization", "Bearer {ID_TOKEN}");
	web_url("elector_doc_type", 
		"URL=http://{URL}/gas-cik-rbd/nsi/elector_doc_type", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://{URL}/elector-list", 
		"Snapshot=t12.inf", 
		"Mode=HTML", 
		LAST);
	
	web_add_header("Authorization", "Bearer {ID_TOKEN}");
	web_url("nsi.change_univers_type", 
		"URL=http://{URL}/gas-cik-rbd/nsi/nsi.change_univers_type", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://{URL}/elector-list", 
		"Snapshot=t13.inf", 
		"Mode=HTML", 
		LAST);
	
	web_add_header("Authorization", "Bearer {ID_TOKEN}");
	web_url("elector-attributes-types", 
		"URL=http://{URL}/gas-cik-rbd/nsi/elector-attributes-types", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://{URL}/elector-list", 
		"Snapshot=t14.inf", 
		"Mode=HTML", 
		LAST);
	
	web_add_header("Authorization", "Bearer {ID_TOKEN}");
	web_url("nsi.change_basis", 
		"URL=http://{URL}/gas-cik-rbd/nsi/nsi.change_basis", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://{URL}/elector-list", 
		"Snapshot=t15.inf", 
		"Mode=HTML", 
		LAST);
	
	web_add_header("Authorization", "Bearer {ID_TOKEN}");
	web_url("nsi.change_univers_type", 
		"URL=http://{URL}/gas-cik-rbd/nsi/nsi.change_univers_type", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://{URL}/elector-list", 
		"Snapshot=t16.inf", 
		"Mode=HTML", 
		LAST);
	
	web_add_header("Authorization", "Bearer {ID_TOKEN}");
	web_url("elections", 
		"URL=http://{URL}/gas-cik-rbd/electors/elections", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://{URL}/elector-list", 
		"Snapshot=t17.inf", 
		"Mode=HTML", 
		LAST);
	
	web_add_header("Authorization", "Bearer {ID_TOKEN}");
	web_url("add-marks-search-criteria", 
		"URL=http://{URL}/gas-cik-rbd/electors/add-marks-search-criteria", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://{URL}/elector-list", 
		"Snapshot=t18.inf", 
		"Mode=HTML", 
		LAST);
	
	web_add_header("Authorization", "Bearer {ID_TOKEN}");
	web_url("basic-options", 
		"URL=http://{URL}/gas-cik-ukd/search/basic-options", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://{URL}/elector-list", 
		"Snapshot=t19.inf", 
		"Mode=HTML", 
		LAST);
	
	web_add_header("Authorization", "Bearer {ID_TOKEN}");
	web_url("custom-settings", 
		"URL=http://{URL}/gas-cik-ukd/search/custom-settings", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://{URL}/elector-list", 
		"Snapshot=t20.inf", 
		"Mode=HTML", 
		LAST);
	
	web_add_header("Authorization", "Bearer {ID_TOKEN}");
	web_url("elector_doc_type_2", 
		"URL=http://{URL}/gas-cik-rbd/nsi/elector_doc_type", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://{URL}/elector-list", 
		"Snapshot=t21.inf", 
		"Mode=HTML", 
		LAST);
	
	web_add_header("Authorization", "Bearer {ID_TOKEN}");
	web_url("gender_2", 
		"URL=http://{URL}/gas-cik-rbd/nsi/gender", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://{URL}/elector-list", 
		"Snapshot=t22.inf", 
		"Mode=HTML", 
		LAST);
	
	lr_end_transaction("OpeningPage", LR_AUTO);
	
	lr_start_transaction("OpeningPage");

	web_add_header("Authorization", "Bearer {ID_TOKEN}");
	web_url("approve-logs", 
		"URL=http://{URL}/gas-cik-rbd/electors/approve-logs/search?size=10&page=1", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://{URL}/elector-residence-approve", 
		"Snapshot=t23.inf", 
		"Mode=HTML", 
		LAST);
	
	web_add_header("Authorization", "Bearer {ID_TOKEN}");
	web_url("elector_doc_type_3", 
		"URL=http://{URL}/gas-cik-rbd/nsi/elector_doc_type", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://{URL}/elector-residence-approve", 
		"Snapshot=t24.inf", 
		"Mode=HTML", 
		LAST);	
	lr_end_transaction("OpeningPage", LR_AUTO);
	
	lr_start_transaction("OpeningPage");
	web_add_header("Authorization", "Bearer {ID_TOKEN}");
	web_url("history", 
		"URL=http://{URL}/gas-cik-rbd/zags/history", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://{URL}/zags-import", 
		"Snapshot=t25.inf", 
		"Mode=HTML", 
		LAST);
	lr_end_transaction("OpeningPage", LR_AUTO);
	
	lr_start_transaction("OpeningPage");
	web_add_header("Authorization", "Bearer {ID_TOKEN}");
	web_url("docs-for-departured", 
		"URL=http://{URL}/gas-cik-rbd/electors/docs-for-departured/logs", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://{URL}/doc-for-departed-applying-list", 
		"Snapshot=t26.inf", 
		"Mode=HTML", 
		LAST);
	lr_end_transaction("OpeningPage", LR_AUTO);
	
	lr_start_transaction("OpeningPage");
	web_add_header("Authorization", "Bearer {ID_TOKEN}");
	web_url("nearest-child-addresses", 
		"URL=http://{URL}/gas-cik-rbd/addresses/nearest-child-addresses", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://{URL}/address-classifier", 
		"Snapshot=t27.inf", 
		"Mode=HTML", 
		LAST);
	
	web_add_header("Authorization", "Bearer {ID_TOKEN}");
	web_custom_request("has-children", 
		"URL=http://{URL}/gas-cik-rbd/addresses/has-children", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://{URL}/address-classifier", 
		"Snapshot=t27.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body=[968080,1,989200,968125]", 
		LAST);
	
	web_add_header("Authorization", "Bearer {ID_TOKEN}");
	web_url("nearest-child-addresses_2", 
		"URL=http://{URL}/gas-cik-rbd/addresses/nearest-child-addresses?parentAddressId=1", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://{URL}/address-classifier", 
		"Snapshot=t28.inf", 
		"Mode=HTML", 
		LAST);
	
	web_add_header("Authorization", "Bearer {ID_TOKEN}");
	web_custom_request("has-children_2", 
		"URL=http://{URL}/gas-cik-rbd/addresses/has-children", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://{URL}/address-classifier", 
		"Snapshot=t29.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body=[973234,971517,980653,971136,971177,971838,972008,974709,974680,974613,978458,978329,991927,978322,974464,974581,976458,973111,975267,975239,975230,976216,970612,970825,974062,978655,978715,982713,974094,983483,983170,983504,983525,974757,974815,983595,984941,984199,980605,974776,980029,979765,976503,979718,975293,979689,977098,984222,981874,977109,975476,978609,975108,978590,976932,991928,976954,977834,978265,976287,972158,974955,975346,979253,974551,974501,968561,968608,968628,968724,980725"
		",968224,968755,978301,968802,968834,974919,969086,986177,981660,980682,969113,973974,975446,975336,975322,974438]", 
		LAST);
	lr_end_transaction("OpeningPage", LR_AUTO);
	
	lr_start_transaction("OpeningPage");
	web_add_header("Authorization", "Bearer {ID_TOKEN}");
	web_url("levels", 
		"URL=http://{URL}/gas-cik-rbd/addresses/levels?sortByHierarchy=true", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://{URL}/address-level-list", 
		"Snapshot=t30.inf", 
		"Mode=HTML", 
		LAST);
	
	web_add_header("Authorization", "Bearer {ID_TOKEN}");
	web_url("pos-in-address-names", 
		"URL=http://{URL}/gas-cik-rbd/addresses/writing-types/pos-in-address-names", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://{URL}/address-level-list", 
		"Snapshot=t31.inf", 
		"Mode=HTML", 
		LAST);
	lr_end_transaction("OpeningPage", LR_AUTO);
	
	lr_start_transaction("OpeningPage");
	web_add_header("Authorization", "Bearer {ID_TOKEN}");
	web_url("writing-type-short-names", 
		"URL=http://{URL}/gas-cik-rbd/addresses/writing-type-short-names", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://{URL}/address-writing-type-short-name", 
		"Snapshot=t32.inf", 
		"Mode=HTML", 
		LAST);
	
	web_add_header("Authorization", "Bearer {ID_TOKEN}");
	web_url("writing-types", 
		"URL=http://{URL}/gas-cik-rbd/addresses/writing-types", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://{URL}/address-writing-type-short-name", 
		"Snapshot=t33.inf", 
		"Mode=HTML", 
		LAST);
	lr_end_transaction("OpeningPage", LR_AUTO);
	
	lr_start_transaction("OpeningPage");
	web_add_header("Authorization", "Bearer {ID_TOKEN}");
	web_url("election", 
		"URL=http://{URL}/ruip-fsi/election", 
		"Resource=0", 
		"Referer=http://{URL}/fsi/definition-polling-stations", 
		"Snapshot=t34.inf", 
		"Mode=HTML", 
		LAST);
	lr_end_transaction("OpeningPage", LR_AUTO);
	
	return 0;
}