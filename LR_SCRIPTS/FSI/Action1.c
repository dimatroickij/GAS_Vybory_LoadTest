Action1()
{
//
//	web_add_header("Upgrade-Insecure-Requests", 
//		"1");
//
//	web_url("172.20.101.50", 
//		"URL=http://172.20.101.50/", 
//		"Resource=0", 
//		"Referer=", 
//		"Snapshot=t71.inf", 
//		"Mode=HTML", 
//		LAST);
//
//	web_set_sockets_option("SSL_VERSION", "2&3");
//
//	web_url("get", 
//		"URL=https://sputnik-lab.com/api-config/settings/get?AppID=browser-b2c-win-id&BrandCode=SPTK&Channel=b2c-common&brandcode=SPTK&company_id=sputnik-lab-b2c-common&domain=voskhod.local&group_id=b2c-common", 
//		"Resource=0", 
//		"RecContentType=application/json", 
//		"Referer=", 
//		"Snapshot=t72.inf", 
//		"Mode=HTML", 
//		LAST);
//
//	web_add_header("Upgrade-Insecure-Requests", 
//		"1");
//
//	web_url("172.20.101.50_2", 
//		"URL=http://172.20.101.50/", 
//		"Resource=0", 
//		"Referer=", 
//		"Snapshot=t73.inf", 
//		"Mode=HTML", 
//		EXTRARES, 
//		"Url=/assets/img/favicon.png", ENDITEM, 
//		LAST);
//
//	web_url("election", 
//		"URL=http://172.20.101.50/ruip-fsi/election", 
//		"Resource=0", 
//		"RecContentType=application/json", 
//		"Referer=http://172.20.101.50/fsi/definition-polling-stations", 
//		"Snapshot=t74.inf", 
//		"Mode=HTML", 
//		LAST);
//
//	web_url("subjects-rf", 
//		"URL=http://172.20.101.50/ruip-fsi/nsi/subjects-rf", 
//		"Resource=0", 
//		"RecContentType=application/json", 
//		"Referer=http://172.20.101.50/fsi/definition-polling-stations?eventId=8", 
//		"Snapshot=t75.inf", 
//		"Mode=HTML", 
//		LAST);
//
//	web_url("tik", 
//		"URL=http://172.20.101.50/ruip-fsi/subjects/tik?electionCompanyNameId=8&kca=62T013", 
//		"Resource=0", 
//		"RecContentType=application/json", 
//		"Referer=http://172.20.101.50/fsi/definition-polling-stations?eventId=8", 
//		"Snapshot=t76.inf", 
//		"Mode=HTML", 
//		LAST);
//
//	web_url("subjects-rf_2", 
//		"URL=http://172.20.101.50/ruip-fsi/nsi/subjects-rf", 
//		"Resource=0", 
//		"RecContentType=application/json", 
//		"Referer=http://172.20.101.50/fsi/definition-polling-stations?eventId=8", 
//		"Snapshot=t77.inf", 
//		"Mode=HTML", 
//		LAST);
//
//	web_url("plots-territories", 
//		"URL=http://172.20.101.50/ruip-fsi/plots-territories?tikId=4640&kca=62T013&sort=districtNum&size=10&electionCompanyNameId=8", 
//		"Resource=0", 
//		"RecContentType=application/json", 
//		"Referer=http://172.20.101.50/fsi/definition-polling-stations?eventId=8", 
//		"Snapshot=t78.inf", 
//		"Mode=HTML", 
//		LAST);
//
//	web_url("count", 
//		"URL=http://172.20.101.50/ruip-fsi/plots-territories/count?ids=9182&ids=9188&ids=9194&ids=9265&ids=9264&ids=9267&ids=9269&ids=9271&ids=9276&ids=9278&electionCompanyNameId=8", 
//		"Resource=0", 
//		"RecContentType=application/json", 
//		"Referer=http://172.20.101.50/fsi/definition-polling-stations?eventId=8", 
//		"Snapshot=t79.inf", 
//		"Mode=HTML", 
//		LAST);
//
//	web_url("plots-territories_2", 
//		"URL=http://172.20.101.50/ruip-fsi/plots-territories?tikId=4640&kca=62T013&page=1&sort=districtNum&size=10&electionCompanyNameId=8", 
//		"Resource=0", 
//		"RecContentType=application/json", 
//		"Referer=http://172.20.101.50/fsi/definition-polling-stations?eventId=8", 
//		"Snapshot=t80.inf", 
//		"Mode=HTML", 
//		LAST);
//
//	web_url("count_2", 
//		"URL=http://172.20.101.50/ruip-fsi/plots-territories/count?ids=9280&ids=9282&ids=9284&ids=9286&ids=9289&ids=9292&ids=9295&ids=9298&ids=9304&ids=9306&electionCompanyNameId=8", 
//		"Resource=0", 
//		"RecContentType=application/json", 
//		"Referer=http://172.20.101.50/fsi/definition-polling-stations?eventId=8", 
//		"Snapshot=t81.inf", 
//		"Mode=HTML", 
//		LAST);
//
//	web_url("plots-territories_3", 
//		"URL=http://172.20.101.50/ruip-fsi/plots-territories?tikId=4640&kca=62T013&page=2&sort=districtNum&size=10&electionCompanyNameId=8", 
//		"Resource=0", 
//		"RecContentType=application/json", 
//		"Referer=http://172.20.101.50/fsi/definition-polling-stations?eventId=8", 
//		"Snapshot=t82.inf", 
//		"Mode=HTML", 
//		LAST);
//
//	web_url("count_3", 
//		"URL=http://172.20.101.50/ruip-fsi/plots-territories/count?ids=9308&ids=9310&ids=9312&ids=9314&ids=9316&ids=9319&ids=9321&ids=9323&ids=9325&ids=9327&electionCompanyNameId=8", 
//		"Resource=0", 
//		"RecContentType=application/json", 
//		"Referer=http://172.20.101.50/fsi/definition-polling-stations?eventId=8", 
//		"Snapshot=t83.inf", 
//		"Mode=HTML", 
//		LAST);
//
//	web_url("plots-territories_4", 
//		"URL=http://172.20.101.50/ruip-fsi/plots-territories?tikId=4640&kca=62T013&page=3&sort=districtNum&size=10&electionCompanyNameId=8", 
//		"Resource=0", 
//		"RecContentType=application/json", 
//		"Referer=http://172.20.101.50/fsi/definition-polling-stations?eventId=8", 
//		"Snapshot=t84.inf", 
//		"Mode=HTML", 
//		LAST);
//
//	web_url("count_4", 
//		"URL=http://172.20.101.50/ruip-fsi/plots-territories/count?ids=9329&ids=9331&ids=9333&ids=9336&ids=9339&ids=9342&ids=9345&ids=9348&ids=9352&ids=9355&electionCompanyNameId=8", 
//		"Resource=0", 
//		"RecContentType=application/json", 
//		"Referer=http://172.20.101.50/fsi/definition-polling-stations?eventId=8", 
//		"Snapshot=t85.inf", 
//		"Mode=HTML", 
//		LAST);
//
//	web_url("check-date", 
//		"URL=http://172.20.101.50/ruip-fsi/election/8/check-date?subjectId=9197", 
//		"Resource=0", 
//		"RecContentType=application/json", 
//		"Referer=http://172.20.101.50/fsi/definition-polling-stations?eventId=8", 
//		"Snapshot=t86.inf", 
//		"Mode=HTML", 
//		LAST);
//
//	web_url("plots-territories_5", 
//		"URL=http://172.20.101.50/ruip-fsi/plots-territories?subjectId=9197&sort=districtNum&electionCompanyNameId=8", 
//		"Resource=0", 
//		"RecContentType=application/json", 
//		"Referer=http://172.20.101.50/fsi/definition-polling-stations?eventId=8&uikId=9197", 
//		"Snapshot=t87.inf", 
//		"Mode=HTML", 
//		LAST);
//
//	web_url("addresses", 
//		"URL=http://172.20.101.50/ruip-fsi/subjects/uik/9197/addresses", 
//		"Resource=0", 
//		"RecContentType=application/json", 
//		"Referer=http://172.20.101.50/fsi/definition-polling-stations?eventId=8&uikId=9197", 
//		"Snapshot=t88.inf", 
//		"Mode=HTML", 
//		LAST);
//
//	web_url("global-settings", 
//		"URL=http://172.20.101.50/ruip-fsi/global-settings", 
//		"Resource=0", 
//		"RecContentType=application/json", 
//		"Referer=http://172.20.101.50/fsi/setting-up-elector-list?eventId=8&uikId=9197", 
//		"Snapshot=t89.inf", 
//		"Mode=HTML", 
//		LAST);
//
//	web_url("global-settings_2", 
//		"URL=http://172.20.101.50/ruip-fsi/global-settings", 
//		"Resource=0", 
//		"RecContentType=application/json", 
//		"Referer=http://172.20.101.50/fsi/setting-up-elector-list?eventId=8&uikId=9197", 
//		"Snapshot=t90.inf", 
//		"Mode=HTML", 
//		LAST);
//
//	web_url("check-date_2", 
//		"URL=http://172.20.101.50/ruip-fsi/election/8/check-date?subjectId=9197", 
//		"Resource=0", 
//		"RecContentType=application/json", 
//		"Referer=http://172.20.101.50/fsi/setting-up-elector-list?eventId=8&uikId=9197", 
//		"Snapshot=t91.inf", 
//		"Mode=HTML", 
//		LAST);
//
//	web_url("global-settings_3", 
//		"URL=http://172.20.101.50/ruip-fsi/global-settings", 
//		"Resource=0", 
//		"RecContentType=application/json", 
//		"Referer=http://172.20.101.50/fsi/setting-up-elector-list?eventId=8&uikId=9197", 
//		"Snapshot=t92.inf", 
//		"Mode=HTML", 
//		LAST);
//
//	web_url("report-template", 
//		"URL=http://172.20.101.50/ruip-fsi/report-template?companyNameId=8&mode=33", 
//		"Resource=0", 
//		"RecContentType=application/json", 
//		"Referer=http://172.20.101.50/fsi/setting-up-elector-list?eventId=8&uikId=9197", 
//		"Snapshot=t93.inf", 
//		"Mode=HTML", 
//		LAST);
//
//	web_url("report-template_2", 
//		"URL=http://172.20.101.50/ruip-fsi/report-template?companyNameId=8&mode=9", 
//		"Resource=0", 
//		"RecContentType=application/json", 
//		"Referer=http://172.20.101.50/fsi/setting-up-elector-list?eventId=8&uikId=9197", 
//		"Snapshot=t94.inf", 
//		"Mode=HTML", 
//		LAST);
//
//	web_url("addresses-list-contain", 
//		"URL=http://172.20.101.50/ruip-fsi/subjects/uik/9197/addresses-list-contain", 
//		"Resource=0", 
//		"RecContentType=application/json", 
//		"Referer=http://172.20.101.50/fsi/setting-up-elector-list?eventId=8&uikId=9197", 
//		"Snapshot=t95.inf", 
//		"Mode=HTML", 
//		LAST);
//
//	web_add_header("Origin", 
//		"http://172.20.101.50");
//
//	web_custom_request("point-issue-list", 
//		"URL=http://172.20.101.50/ruip-fsi/point-issue-list", 
//		"Method=POST", 
//		"Resource=0", 
//		"RecContentType=application/json", 
//		"Referer=http://172.20.101.50/fsi/setting-up-elector-list?eventId=8&uikId=9197", 
//		"Snapshot=t96.inf", 
//		"Mode=HTML", 
//		"EncType=application/json", 
//		"BodyBinary=[{\"namePoint\":\"\\xD0\\x9A\\xD0\\xBD\\xD0\\xB8\\xD0\\xB3\\xD0\\xB0 \\xE2\\x84\\x961\",\"pointNumber\":1,\"subjectId\":\"9197\"}]", 
//		LAST);
//
//	web_url("report-template_3", 
//		"URL=http://172.20.101.50/ruip-fsi/report-template?companyNameId=8&mode=2", 
//		"Resource=0", 
//		"RecContentType=application/json", 
//		"Referer=http://172.20.101.50/fsi/setting-up-elector-list?eventId=8&uikId=9197", 
//		"Snapshot=t97.inf", 
//		"Mode=HTML", 
//		LAST);
//
//	web_add_header("Origin", 
//		"http://172.20.101.50");
//
//	web_custom_request("link", 
//		"URL=http://172.20.101.50/ruip-fsi/point-issue-list/link", 
//		"Method=POST", 
//		"Resource=0", 
//		"RecContentType=application/json", 
//		"Referer=http://172.20.101.50/fsi/setting-up-elector-list?eventId=8&uikId=9197", 
//		"Snapshot=t98.inf", 
//		"Mode=HTML", 
//		"EncType=application/json", 
//		"BodyBinary=[{\"from\":\"\\xD0\\x90\",\"nodeId\":\"320495\",\"pointIssueId\":\"93\",\"to\":\"\\xD0\\xAF\"},{\"from\":\"\\xD0\\x90\",\"nodeId\":\"320784\",\"pointIssueId\":\"93\",\"to\":\"\\xD0\\xAF\"},{\"from\":\"\\xD0\\x90\",\"nodeId\":\"320776\",\"pointIssueId\":\"93\",\"to\":\"\\xD0\\xAF\"},{\"from\":\"\\xD0\\x90\",\"nodeId\":\"320779\",\"pointIssueId\":\"93\",\"to\":\"\\xD0\\xAF\"},{\"from\":\"\\xD0\\x90\",\"nodeId\":\"320781\",\"pointIssueId\":\"93\",\"to\":\"\\xD0\\xAF\"},{\"from\":\""
//		"\\xD0\\x90\",\"nodeId\":\"320788\",\"pointIssueId\":\"93\",\"to\":\"\\xD0\\xAF\"},{\"from\":\"\\xD0\\x90\",\"nodeId\":\"320512\",\"pointIssueId\":\"93\",\"to\":\"\\xD0\\xAF\"},{\"from\":\"\\xD0\\x90\",\"nodeId\":\"320513\",\"pointIssueId\":\"93\",\"to\":\"\\xD0\\xAF\"},{\"from\":\"\\xD0\\x90\",\"nodeId\":\"320791\",\"pointIssueId\":\"93\",\"to\":\"\\xD0\\xAF\"},{\"from\":\"\\xD0\\x90\",\"nodeId\":\"320790\",\"pointIssueId\":\"93\",\"to\":\"\\xD0\\xAF\"},{\"from\":\"\\xD0\\x90\",\"nodeId\":\""
//		"320789\",\"pointIssueId\":\"93\",\"to\":\"\\xD0\\xAF\"},{\"from\":\"\\xD0\\x90\",\"nodeId\":\"320530\",\"pointIssueId\":\"93\",\"to\":\"\\xD0\\xAF\"},{\"from\":\"\\xD0\\x90\",\"nodeId\":\"320792\",\"pointIssueId\":\"93\",\"to\":\"\\xD0\\xAF\"},{\"from\":\"\\xD0\\x90\",\"nodeId\":\"320547\",\"pointIssueId\":\"93\",\"to\":\"\\xD0\\xAF\"},{\"from\":\"\\xD0\\x90\",\"nodeId\":\"320566\",\"pointIssueId\":\"93\",\"to\":\"\\xD0\\xAF\"},{\"from\":\"\\xD0\\x90\",\"nodeId\":\"320569\",\"pointIssueId\":\"93\""
//		",\"to\":\"\\xD0\\xAF\"},{\"from\":\"\\xD0\\x90\",\"nodeId\":\"320640\",\"pointIssueId\":\"93\",\"to\":\"\\xD0\\xAF\"},{\"from\":\"\\xD0\\x90\",\"nodeId\":\"320659\",\"pointIssueId\":\"93\",\"to\":\"\\xD0\\xAF\"},{\"from\":\"\\xD0\\x90\",\"nodeId\":\"320720\",\"pointIssueId\":\"93\",\"to\":\"\\xD0\\xAF\"},{\"from\":\"\\xD0\\x90\",\"nodeId\":\"320748\",\"pointIssueId\":\"93\",\"to\":\"\\xD0\\xAF\"},{\"from\":\"\\xD0\\x90\",\"nodeId\":\"320794\",\"pointIssueId\":\"93\",\"to\":\"\\xD0\\xAF\"},{\"from"
//		"\":\"\\xD0\\x90\",\"nodeId\":\"320795\",\"pointIssueId\":\"93\",\"to\":\"\\xD0\\xAF\"},{\"from\":\"\\xD0\\x90\",\"nodeId\":\"320478\",\"pointIssueId\":\"93\",\"to\":\"\\xD0\\xAF\"},{\"from\":\"\\xD0\\x90\",\"nodeId\":\"320438\",\"pointIssueId\":\"93\",\"to\":\"\\xD0\\xAF\"},{\"from\":\"\\xD0\\x90\",\"nodeId\":\"320443\",\"pointIssueId\":\"93\",\"to\":\"\\xD0\\xAF\"},{\"from\":\"\\xD0\\x90\",\"nodeId\":\"320481\",\"pointIssueId\":\"93\",\"to\":\"\\xD0\\xAF\"},{\"from\":\"\\xD0\\x90\",\"nodeId\":\""
//		"320476\",\"pointIssueId\":\"93\",\"to\":\"\\xD0\\xAF\"},{\"from\":\"\\xD0\\x90\",\"nodeId\":\"320477\",\"pointIssueId\":\"93\",\"to\":\"\\xD0\\xAF\"},{\"from\":\"\\xD0\\x90\",\"nodeId\":\"320480\",\"pointIssueId\":\"93\",\"to\":\"\\xD0\\xAF\"},{\"from\":\"\\xD0\\x90\",\"nodeId\":\"320439\",\"pointIssueId\":\"93\",\"to\":\"\\xD0\\xAF\"},{\"from\":\"\\xD0\\x90\",\"nodeId\":\"320456\",\"pointIssueId\":\"93\",\"to\":\"\\xD0\\xAF\"},{\"from\":\"\\xD0\\x90\",\"nodeId\":\"320441\",\"pointIssueId\":\"93\""
//		",\"to\":\"\\xD0\\xAF\"},{\"from\":\"\\xD0\\x90\",\"nodeId\":\"320472\",\"pointIssueId\":\"93\",\"to\":\"\\xD0\\xAF\"},{\"from\":\"\\xD0\\x90\",\"nodeId\":\"320444\",\"pointIssueId\":\"93\",\"to\":\"\\xD0\\xAF\"},{\"from\":\"\\xD0\\x90\",\"nodeId\":\"320482\",\"pointIssueId\":\"93\",\"to\":\"\\xD0\\xAF\"},{\"from\":\"\\xD0\\x90\",\"nodeId\":\"320484\",\"pointIssueId\":\"93\",\"to\":\"\\xD0\\xAF\"},{\"from\":\"\\xD0\\x90\",\"nodeId\":\"320492\",\"pointIssueId\":\"93\",\"to\":\"\\xD0\\xAF\"},{\"from"
//		"\":\"\\xD0\\x90\",\"nodeId\":\"320490\",\"pointIssueId\":\"93\",\"to\":\"\\xD0\\xAF\"},{\"from\":\"\\xD0\\x90\",\"nodeId\":\"320458\",\"pointIssueId\":\"93\",\"to\":\"\\xD0\\xAF\"},{\"from\":\"\\xD0\\x90\",\"nodeId\":\"320488\",\"pointIssueId\":\"93\",\"to\":\"\\xD0\\xAF\"},{\"from\":\"\\xD0\\x90\",\"nodeId\":\"320800\",\"pointIssueId\":\"93\",\"to\":\"\\xD0\\xAF\"},{\"from\":\"\\xD0\\x90\",\"nodeId\":\"320797\",\"pointIssueId\":\"93\",\"to\":\"\\xD0\\xAF\"},{\"from\":\"\\xD0\\x90\",\"nodeId\":\""
//		"320801\",\"pointIssueId\":\"93\",\"to\":\"\\xD0\\xAF\"},{\"from\":\"\\xD0\\x90\",\"nodeId\":\"320799\",\"pointIssueId\":\"93\",\"to\":\"\\xD0\\xAF\"},{\"from\":\"\\xD0\\x90\",\"nodeId\":\"320798\",\"pointIssueId\":\"93\",\"to\":\"\\xD0\\xAF\"}]", 
//		LAST);
//
//	web_add_header("X-Chrome-UMA-Log-SHA1", 
//		"7DAF55733F2AF52EACC4A7E8B933982AD99EF323");
//
//	web_add_header("X-Chrome-UMA-ReportingInfo", 
//		"CAE=");
//
///* Added by Async CodeGen.
//ID=Poll_2
//ScanType = Recording
//
//The following URLs are considered part of this conversation:
//	https://sputnik-lab.com/api-logs/desktop
//
//TODO - The following callbacks have been added to AsyncCallbacks.c.
//Add your code to the callback implementations as necessary.
//	Poll_2_RequestCB
//	Poll_2_ResponseCB
// */
//	web_reg_async_attributes("ID=Poll_2", 
//		"Pattern=Poll", 
//		"URL=https://sputnik-lab.com/api-logs/desktop", 
//		"PollIntervalMs=3000", 
//		"RequestCB=Poll_2_RequestCB", 
//		"ResponseCB=Poll_2_ResponseCB", 
//		LAST);
//
//	web_custom_request("desktop", 
//		"URL=https://sputnik-lab.com/api-logs/desktop", 
//		"Method=POST", 
//		"Resource=0", 
//		"RecContentType=text/xml, application/xml", 
//		"Referer=", 
//		"Snapshot=t99.inf", 
//		"ContentEncoding=gzip", 
//		"Mode=HTML", 
//		"EncType=application/vnd.chrome.uma", 
//		"BodyBinary=\t\\x9D\\x01z\\xCC\n\\xE2\\xE1\\x1D\\x10\\x1B\\x1A\\xE3\\x10\\x08\\xD0\\xD2\\xDE\\xFC\\x05\\x12\n4.5.4512.0\\x18\\x90\\xC1\\xEB\\xFB\\x05\"\\x02ru*\\x18\n\nWindows NT\\x12\n10.0.177632\\x8A\\x01\n\\x06x86_64\\x10\\xCE}\\x18\\x80\\x80\\xD4\\xA0\\x01\"\\x00(\\x020\\x80\\x0F8\\xB8\\x08B>\\x08\\x86\\x81\\x02\\x10\\x92\\xB2\\x01\\x1A\\x073.3.0.2\"\n2017/04/072\\x0BGoogle Inc.:\\x12Google SwiftShaderM\\xEB\\x13\\xB9BU\\xF2Y\\xB9Be\\x00\\x00\\x80?j\\x14\n"
//		"\\x0CGenuineIntel\\x10\\xE9\\x8D$\\x18\\x04\\x82\\x01\\x02\\x08\\x00\\x8A\\x01\\x02\\x08\\x00:=\n\\x13Chromium PDF Viewer\\x12 mhjfbmdgcfjbbpaeojofohoefgiehjai\\x1A\\x00 \\x00(\\x00:B\n\\x0FShockwave Flash\\x12\\x1Fpepflashplayer32_32_0_0_453.dll\\x1A\n32.0.0.453 \\x00(\\x01:0\n\\x13Chromium PDF Plugin\\x12\\x13internal-pdf-viewer\\x1A\\x00 \\x00(\\x01B\\x00J\n\r.u4\\xC1\\x15\\x88,\\xB7\\xB8J\n\r\\x8D\\x8D\\x88\\xB3\\x15\\x91\\x0F\\xBA\\xAFJ\n\r\\x9D\\xBA\\x18l\\x15\\x02\\xB3\\x98=J\n\r"
//		"\\x82Uxt\\x15\\xDF\\x17J?J\n\rl\\xFF\\x1F$\\x15W\\x1C\\xDANJ\n\r\\x0F\\x8FR\\x1E\\x15\\xA2\\x05S\\x01J\n\r\\xB8\\xEC0\\xB1\\x15\\xB8\\xEC0\\xB1J\n\r\\xF7O,\\xD5\\x15\\xF7O,\\xD5J\n\r8\\xBC\\xED\\xB1\\x15\\xADnO\\xCFJ\n\r\\xDF\\xEA\\xD7\\xCD\\x15\\xC9Q\\xAE\\xF5J\n\r\\xE9,u\\x1C\\x15\\xE9,u\\x1CJ\n\r\\xE5\\xF3;\\xD4\\x15\\xE5\\xF3;\\xD4J\n\r\\xDA\\x87?\\xBA\\x15V\\xA6\\xBDEJ\n\r\\x90\\x85\\xCB\\xA5\\x15\\xDF\\x17J?J\n\raOll\\x15\\xDF\\x17J?J\n\r\\xB8\\x8A\\xB4v\\x15\\\\x10\\xBD\\xD4J\n\r"
//		"\\xC8A\\x08\\xC7\\x15\\x07pV\\xA2J\n\r`\\xA0{\\xED\\x15\\xDF\\x17J?J\n\r\\xDC*!'\\x15\\xDC*!'J\n\r\\xC8v\\x15Y\\x15\\xDF\\x17J?J\n\r\t\\xEBtR\\x15\\xDF\\x17J?J\n\r{l\\xC9D\\x15\\xDF\\x17J?J\n\r\\xBBu\\xF5W\\x15\\xDF\\x17J?J\n\r\\x85(\\x81h\\x15\\x87\\xAC/MJ\n\r\\xE9i/\\xB7\\x15\\xDF\\x17J?J\n\r\\x0C\\x91G\\xF3\\x15\\xDF\\x17J?J\n\r\\xDC\\xDD\\xBBw\\x15\\xDF\\x17J?J\n\r\\xBD\\xD3s\\x97\\x15\\x10\\xA1~|J\n\r\\xCA\\x1Ds\\x93\\x15\\xDF\\x17J?J\n\r\\xE0\\x04\\xA6\\x8F\\x158\\xE1\\xE4\\xACJ\n\r\\xC5-;"
//		"\\x8E\\x15\\x90%p\\x93J\n\rw\\x95b\\x1E\\x15\\xDF\\x17J?J\n\r\\xF2\\xFB\\xE1=\\x15\\xDF\\x17J?J\n\r\\xC2\\xDF\\xCBd\\x15\\xDF\\x17J?J\n\r|\\x839Q\\x15\\xDF\\x17J?J\n\r\\xD9v\\x81\\x7F\\x15\\xDF\\x17J?J\n\r{\\xB7\\x9C\\xF7\\x15\\xF4\\xF4G=J\n\rqz!\\xF7\\x15xq\\x04\\xB2J\n\r\\xEB\\x98\\xA8#\\x15t\\xCF\\x93\\xFCJ\n\r\\x90\\xDA\\x8B\\x86\\x15\\xDF\\x17J?J\n\r\\xA6\\x03\\xA3N\\x15\\xDF\\x17J?J\n\r\\x81\"\\xBE\\x12\\x15\\xE5X\\xB1\\xE3J\n\r\\xA9b%\\xD9\\x15\\xBA\\x0E\\xDD\\xE1J\n\r)"
//		"b\\xA2\\xF4\\x15\\x7F\\xB3aLJ\n\r\\x8AH\\xFC%\\x15\\x87\\xAC/MJ\n\rtO\"d\\x15J\\xFA\\x87PJ\n\r\\x8C/0V\\x15p.\\x88/J\n\r\\xCF\\xA1si\\x15\\xDF\\x17J?J\n\rOl`r\\x15\\xDF\\x17J?J\n\rB\\xB8\\xEC\\x1A\\x15\\xDF\\x17J?J\n\r\\x1C\\xA9\\xC0\\xCA\\x15\\xDF\\x17J?J\n\r\\xA3\\xD4\\xCE\\x1B\\x15\\xF8C\\x1B\\xD6J\n\rR\\x04n\\xF5\\x15\\xDF\\x17J?J\n\r\\xA00\\xEA\\xF3\\x15\\xDF\\x17J?J\n\r\\x86\\x00/\\x0B\\x15G>\\x05\\x93J\n\r\\xCE7\\xC3K\\x15C\\x18LPJ\n\r[N/\\x9A\\x15\\xDF\\x17J?J\n\r"
//		"o\\x91G\\xD7\\x15o\\x91G\\xD7J\n\r\\xAA\\xD8Dh\\x15\\xE0\\x04\\x9AfJ\n\r`\\x87MI\\x15\\xDF\\x17J?J\n\r\\x02\\xA3\\xBA4\\x15\\xADnO\\xCFJ\n\r\\xA2\\xF3\\xFF\\xF5\\x15\\xA2\\xF3\\xFF\\xF5J\n\r\\xB2\\xA7\\x7FX\\x15\\xCE\\x8AmrJ\n\r\\x11\\xF8\\xB8\\xBB\\x15\\xDF\\x17J?J\n\r$\\x86\\xE6\\x94\\x15\\xC4\\x8F?\\x80J\n\r\\xB8\\x1D\\xD9\\x11\\x15 \\x06:\\xD9J\n\r\\xB2\\x88\\xF0>\\x15\\xDF\\x17J?J\n\r\\xC5\\xC2:I\\x15\\xDF\\x17J?J\n\r\\x01\\xAAJ\\xDA\\x15\\xDF\\x17J?"
//		"P\\x00b\\x04SPTKj\\x0C\\x08\\x00\\x10\\x00\\x18\\x00 \\x008\\x05@\\x05\\x80\\x01\\x90\\xC1\\xEB\\xFB\\x05\\x90\\x01\\x14\\x90\\x01/\\x90\\x01\\xA6\\x01\\x90\\x01\\x9E\\x03\\x90\\x01\\xA0\\x03\\x90\\x01\\xBA\\x04\\x90\\x01\\xBD\\x05\\x90\\x01\\xFC\\x05\\x90\\x01\\x97\\x06\\x90\\x01\\xD9\\x07\\x98\\x01\\x00\\xBA\\x01\\x07\\x15\\x11')\\xD2(\\x01\\xBA\\x01\\x0C\\x15\\x9E\\x0Che%X\\xDF\\xA2\\x84(\\x00\\xC2\\x01\\x0F\\x08\\x0B\\x12\\x069.18.0\\x1D\\xCEAz<\\xC2\\x01\n\\x08\\x08\\x12\\x017\\x1D\\xC0^"
//		"Q\\xFD\\xC2\\x01\r\\x08\n\\x12\\x046279\\x1D\\xBC\\x9C\\x05\\xE8\\xC2\\x01\\x0B\\x08\\x02\\x12\\x0243\\x1D\\xD7\\xD2\\xD1\\xFF\\xC2\\x01\\x10\\x08\\x03\\x12\\x070.0.0.0\\x1D\\x00\\x00\\x00\\x00\\xC2\\x01\r\\x08\t\\x12\\x041256\\x1DB|&{\\xCA\\x01\\x1F\\x08\\x04\\x10\\x05\\x18\\x01 \\x00(\\x000\\x008\\x00@\\x00H\\x00P\\x00X\\x00`\\x00h\\x00x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x01\\x10\n\\x18\\x02 \\x01"
//		"(\\x000\\x008\\x01@\\x00H\\x00P\\x00X\\x01`\\x00h\\x01x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x01\\x10\n\\x18\\x02 \\x01(\\x000\\x008\\x01@\\x00H\\x00P\\x00X\\x01`\\x00h\\x01x\\x00\\x80\\x01\\x00\\xCA\\x01!\\x08\\x01\\x10\n\\x18\\x02 \\x01(\\x000\\x008\\x01@\\x00H\\x00P\\x00X\\x01`\\x00h\\x00p\\x00x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x06\\x10\n\\x18\\x02 \\x00(\\x000\\x008\\x01@\\x00H\\x00P\\x00X\\x01`\\x00h\\x02x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x01\\x10\\x05\\x18\\x02 \\x00"
//		"(\\x000\\x008\\x00@\\x00H\\x00P\\x00X\\x00`\\x00h\\x01x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x01\\x10\\x05\\x18\\x02 \\x00(\\x000\\x008\\x00@\\x00H\\x00P\\x00X\\x00`\\x00h\\x02x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x01\\x10\\x05\\x18\\x02 \\x01(\\x000\\x008\\x00@\\x00H\\x00P\\x00X\\x00`\\x00h\\x01x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x04\\x10\\x05\\x18\\x01 \\x00(\\x000\\x008\\x00@\\x00H\\x00P\\x00X\\x00`\\x00h\\x00x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x01\\x10\\x05\\x18\\x02 "
//		"\\x00(\\x000\\x008\\x00@\\x00H\\x00P\\x00X\\x00`\\x00h\\x00x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x04\\x10\\x05\\x18\\x01 \\x00(\\x000\\x008\\x00@\\x00H\\x00P\\x00X\\x00`\\x00h\\x00x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x01\\x10\\x05\\x18\\x02 \\x00(\\x000\\x008\\x00@\\x00H\\x00P\\x00X\\x00`\\x00h\\x01x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x01\\x10\\x05\\x18\\x02 \\x00"
//		"(\\x000\\x008\\x00@\\x00H\\x00P\\x00X\\x00`\\x00h\\x02x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x01\\x10\\x05\\x18\\x02 \\x01(\\x000\\x008\\x00@\\x00H\\x00P\\x00X\\x00`\\x00h\\x01x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x04\\x10\\x05\\x18\\x01 \\x00(\\x000\\x008\\x00@\\x00H\\x00P\\x00X\\x00`\\x00h\\x00x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x01\\x10\\x05\\x18\\x02 \\x00(\\x000\\x008\\x00@\\x00H\\x00P\\x00X\\x00`\\x00h\\x00x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x04\\x10\\x05\\x18\\x01 "
//		"\\x00(\\x000\\x008\\x00@\\x00H\\x00P\\x00X\\x00`\\x00h\\x00x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x01\\x10\\x05\\x18\\x02 \\x00(\\x000\\x008\\x00@\\x00H\\x00P\\x00X\\x00`\\x00h\\x01x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x01\\x10\\x05\\x18\\x02 \\x00(\\x000\\x008\\x00@\\x00H\\x00P\\x00X\\x00`\\x00h\\x02x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x01\\x10\\x05\\x18\\x02 \\x01"
//		"(\\x000\\x008\\x00@\\x00H\\x00P\\x00X\\x00`\\x00h\\x01x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x04\\x10\\x05\\x18\\x01 \\x00(\\x000\\x008\\x00@\\x00H\\x00P\\x00X\\x00`\\x00h\\x00x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x01\\x10\\x05\\x18\\x02 \\x00(\\x000\\x008\\x00@\\x00H\\x00P\\x00X\\x00`\\x00h\\x00x\\x00\\x80\\x01\\x00P\\x00\\x92\\x01$F321ACBF-8699-4C0D-9720-ED1F8C58E840\\xA2\\x01\\x00", 
//		LAST);
//
//	web_url("addresses-list-contain_2", 
//		"URL=http://172.20.101.50/ruip-fsi/subjects/uik/9197/addresses-list-contain", 
//		"Resource=0", 
//		"RecContentType=application/json", 
//		"Referer=http://172.20.101.50/fsi/setting-up-elector-list?eventId=8&uikId=9197", 
//		"Snapshot=t100.inf", 
//		"Mode=HTML", 
//		LAST);
//
//	web_url("point-issue", 
//		"URL=http://172.20.101.50/ruip-fsi/subjects/uik/9197/point-issue", 
//		"Resource=0", 
//		"RecContentType=application/json", 
//		"Referer=http://172.20.101.50/fsi/setting-up-elector-list?eventId=8&uikId=9197", 
//		"Snapshot=t101.inf", 
//		"Mode=HTML", 
//		LAST);
//
//	web_add_header("X-Chrome-UMA-Log-SHA1", 
//		"85A82D879DCB9B1DEB9A1FD9FCF5BB9FDF49029F");
//
//	web_add_header("X-Chrome-UMA-ReportingInfo", 
//		"CAEQyAEYACAB");
//
///* Removed by Async CodeGen.
//ID = Poll_2
// */
//	/*
// web_custom_request("desktop_2",
//		"URL=https://sputnik-lab.com/api-logs/desktop",
//		"Method=POST",
//		"Resource=0",
//		"RecContentType=text/xml, application/xml",
//		"Referer=",
//		"Snapshot=t102.inf",
//		"Mode=HTML",
//		"EncType=application/vnd.chrome.uma",
//		"ContentEncoding=gzip",
//		"BodyBinary=\t\\x9D\\x01z\\xCC\n"
//		"\\xE2\\xE1\\x1D\\x10\\x1C\\x1A\\x9F\\x11\\x08\\xD0\\xD2\\xDE\\xFC\\x05\\x12\n"
//		"4.5.4512.0\\x18\\x90\\xC1\\xEB\\xFB\\x05\"\\x02ru*\\x18\n"
//		"\n"
//		"Windows NT\\x12\n"
//		"10.0.177632\\x8A\\x01\n"
//		"\\x06x86_64\\x10\\xCE}\\x18\\x80\\x80\\xD4\\xA0\\x01\"\\x00(\\x020\\x80\\x0F8\\xB8\\x08B>\\x08\\x86\\x81\\x02\\x10\\x92\\xB2\\x01\\x1A\\x073.3.0.2\"\n"
//		"2017/04/072\\x0BGoogle Inc.:\\x12Google SwiftShaderM\\xEB\\x13\\xB9BU\\xF2Y\\xB9Be\\x00\\x00\\x80?j\\x14\n"
//		"\\x0CGenuineIntel\\x10\\xE9\\x8D$\\x18\\x04\\x82\\x01\\x02\\x08\\x00\\x8A\\x01\\x02\\x08\\x00:=\n"
//		"\\x13Chromium PDF Viewer\\x12 mhjfbmdgcfjbbpaeojofohoefgiehjai\\x1A\\x00 \\x00(\\x00:B\n"
//		"\\x0FShockwave Flash\\x12\\x1Fpepflashplayer32_32_0_0_453.dll\\x1A\n"
//		"32.0.0.453 \\x00(\\x01:0\n"
//		"\\x13Chromium PDF Plugin\\x12\\x13internal-pdf-viewer\\x1A\\x00 \\x00(\\x01B\\x0C\\x10\t \\x010\\x08\\xD0\\x01\\x01\\xD8\\x01\\x04J\n"
//		"\r.u4\\xC1\\x15\\x88,\\xB7\\xB8J\n"
//		"\r\\x8D\\x8D\\x88\\xB3\\x15\\x91\\x0F\\xBA\\xAFJ\n"
//		"\r\\x9D\\xBA\\x18l\\x15\\x02\\xB3\\x98=J\n"
//		"\r\\x82Uxt\\x15\\xDF\\x17J?J\n"
//		"\rl\\xFF\\x1F$\\x15W\\x1C\\xDANJ\n"
//		"\r\\x0F\\x8FR\\x1E\\x15\\xA2\\x05S\\x01J\n"
//		"\r\\xB8\\xEC0\\xB1\\x15\\xB8\\xEC0\\xB1J\n"
//		"\r\\xF7O,\\xD5\\x15\\xF7O,\\xD5J\n"
//		"\r8\\xBC\\xED\\xB1\\x15\\xADnO\\xCFJ\n"
//		"\r\\xDF\\xEA\\xD7\\xCD\\x15\\xC9Q\\xAE\\xF5J\n"
//		"\r\\xE9,u\\x1C\\x15\\xE9,u\\x1CJ\n"
//		"\r\\xE5\\xF3;\\xD4\\x15\\xE5\\xF3;\\xD4J\n"
//		"\r\\xDA\\x87?\\xBA\\x15V\\xA6\\xBDEJ\n"
//		"\r\\x90\\x85\\xCB\\xA5\\x15\\xDF\\x17J?J\n"
//		"\raOll\\x15\\xDF\\x17J?J\n"
//		"\r\\xB8\\x8A\\xB4v\\x15\\\\x10\\xBD\\xD4J\n"
//		"\r\\xC8A\\x08\\xC7\\x15\\x07pV\\xA2J\n"
//		"\r`\\xA0{\\xED\\x15\\xDF\\x17J?J\n"
//		"\r\\xAA2\\xB4n\\x15\\xDF\\x17J?J\n"
//		"\r\\xDC*!'\\x15\\xDC*!'J\n"
//		"\r\\xC8v\\x15Y\\x15\\xDF\\x17J?J\n"
//		"\r\t\\xEBtR\\x15\\xDF\\x17J?J\n"
//		"\r{l\\xC9D\\x15\\xDF\\x17J?J\n"
//		"\r\\xBBu\\xF5W\\x15\\xDF\\x17J?J\n"
//		"\r\\x85(\\x81h\\x15\\x87\\xAC/MJ\n"
//		"\r\\xE9i/\\xB7\\x15\\xDF\\x17J?J\n"
//		"\r\\x0C\\x91G\\xF3\\x15\\xDF\\x17J?J\n"
//		"\r\\xDC\\xDD\\xBBw\\x15\\xDF\\x17J?J\n"
//		"\r\\xBD\\xD3s\\x97\\x15\\x10\\xA1~|J\n"
//		"\r\\xCA\\x1Ds\\x93\\x15\\xDF\\x17J?J\n"
//		"\r\\xE0\\x04\\xA6\\x8F\\x158\\xE1\\xE4\\xACJ\n"
//		"\r\\xC5-;\\x8E\\x15\\x90%p\\x93J\n"
//		"\rw\\x95b\\x1E\\x15\\xDF\\x17J?J\n"
//		"\r\\xF2\\xFB\\xE1=\\x15\\xDF\\x17J?J\n"
//		"\r\\xC2\\xDF\\xCBd\\x15\\xDF\\x17J?J\n"
//		"\r|\\x839Q\\x15\\xDF\\x17J?J\n"
//		"\r\\xD9v\\x81\\x7F\\x15\\xDF\\x17J?J\n"
//		"\r{\\xB7\\x9C\\xF7\\x15\\xF4\\xF4G=J\n"
//		"\rqz!\\xF7\\x15xq\\x04\\xB2J\n"
//		"\r\\xEB\\x98\\xA8#\\x15t\\xCF\\x93\\xFCJ\n"
//		"\r\\x90\\xDA\\x8B\\x86\\x15\\xDF\\x17J?J\n"
//		"\r\\xA6\\x03\\xA3N\\x15\\xDF\\x17J?J\n"
//		"\r\\x81\"\\xBE\\x12\\x15\\xE5X\\xB1\\xE3J\n"
//		"\r\\xA9b%\\xD9\\x15\\xBA\\x0E\\xDD\\xE1J\n"
//		"\r)b\\xA2\\xF4\\x15\\x7F\\xB3aLJ\n"
//		"\r\\x8AH\\xFC%\\x15\\x87\\xAC/MJ\n"
//		"\rtO\"d\\x15J\\xFA\\x87PJ\n"
//		"\r\\x8C/0V\\x15p.\\x88/J\n"
//		"\r\\xCF\\xA1si\\x15\\xDF\\x17J?J\n"
//		"\rOl`r\\x15\\xDF\\x17J?J\n"
//		"\rB\\xB8\\xEC\\x1A\\x15\\xDF\\x17J?J\n"
//		"\r\\x1C\\xA9\\xC0\\xCA\\x15\\xDF\\x17J?J\n"
//		"\r\\xA3\\xD4\\xCE\\x1B\\x15\\xF8C\\x1B\\xD6J\n"
//		"\rR\\x04n\\xF5\\x15\\xDF\\x17J?J\n"
//		"\r\\xA00\\xEA\\xF3\\x15\\xDF\\x17J?J\n"
//		"\r\\x86\\x00/\\x0B\\x15G>\\x05\\x93J\n"
//		"\r\\xCE7\\xC3K\\x15C\\x18LPJ\n"
//		"\r[N/\\x9A\\x15\\xDF\\x17J?J\n"
//		"\ro\\x91G\\xD7\\x15o\\x91G\\xD7J\n"
//		"\rv|P\\x17\\x15\\xDF\\x17J?J\n"
//		"\r\\xAA\\xD8Dh\\x15\\xE0\\x04\\x9AfJ\n"
//		"\r`\\x87MI\\x15\\xDF\\x17J?J\n"
//		"\r\\x02\\xA3\\xBA4\\x15\\xADnO\\xCFJ\n"
//		"\r\\xA2\\xF3\\xFF\\xF5\\x15\\xA2\\xF3\\xFF\\xF5J\n"
//		"\r\\xB2\\xA7\\x7FX\\x15\\xCE\\x8AmrJ\n"
//		"\r\\x11\\xF8\\xB8\\xBB\\x15\\xDF\\x17J?J\n"
//		"\r$\\x86\\xE6\\x94\\x15\\xC4\\x8F?\\x80J\n"
//		"\r\\xB8\\x1D\\xD9\\x11\\x15 \\x06:\\xD9J\n"
//		"\r\\xB2\\x88\\xF0>\\x15\\xDF\\x17J?J\n"
//		"\r\\xC5\\xC2:I\\x15\\xDF\\x17J?J\n"
//		"\r\\x01\\xAAJ\\xDA\\x15\\xDF\\x17J?J\n"
//		"\r1\\x90U\\x0C\\x15\\xF4\\xF4G=J\n"
//		"\r\\x9E\\xB0X\\xE2\\x15\\xDF\\x17J?P\\x00b\\x04SPTKj\\x0C\\x08\\x00\\x10\\x00\\x18\\x00 \\x008\\x05@\\x06\\x80\\x01\\x90\\xC1\\xEB\\xFB\\x05\\x90\\x01\\x14\\x90\\x01/\\x90\\x01\\xA6\\x01\\x90\\x01\\x9E\\x03\\x90\\x01\\xA0\\x03\\x90\\x01\\xBA\\x04\\x90\\x01\\xBD\\x05\\x90\\x01\\xFC\\x05\\x90\\x01\\x97\\x06\\x90\\x01\\xD9\\x07\\x98\\x01\\x00\\xBA\\x01\\x07\\x15\\x11')\\xD2(\\x01\\xBA\\x01\\x0C\\x15\\x9E\\x0Che%X\\xDF\\xA2\\x84(\\x00\\xC2\\x01\\x0F\\x08\\x0B\\x12\\x069.18.0\\x1D\\xCEAz<\\xC2\\x01\n"
//		"\\x08\\x08\\x12\\x017\\x1D\\xC0^Q\\xFD\\xC2\\x01\r\\x08\n"
//		"\\x12\\x046279\\x1D\\xBC\\x9C\\x05\\xE8\\xC2\\x01\\x0B\\x08\\x02\\x12\\x0243\\x1D\\xD7\\xD2\\xD1\\xFF\\xC2\\x01\\x10\\x08\\x03\\x12\\x070.0.0.0\\x1D\\x00\\x00\\x00\\x00\\xC2\\x01\r\\x08\t\\x12\\x041256\\x1DB|&{\\xCA\\x01\\x1F\\x08\\x04\\x10\\x05\\x18\\x01 \\x00(\\x000\\x008\\x00@\\x00H\\x00P\\x00X\\x00`\\x00h\\x00x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x01\\x10\n"
//		"\\x18\\x02 \\x01(\\x000\\x008\\x01@\\x00H\\x00P\\x00X\\x01`\\x00h\\x01x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x01\\x10\n"
//		"\\x18\\x02 \\x01(\\x000\\x008\\x01@\\x00H\\x00P\\x00X\\x01`\\x00h\\x01x\\x00\\x80\\x01\\x00\\xCA\\x01!\\x08\\x01\\x10\n"
//		"\\x18\\x02 \\x01(\\x000\\x008\\x01@\\x00H\\x00P\\x00X\\x01`\\x00h\\x00p\\x00x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x06\\x10\n"
//		"\\x18\\x02 \\x00(\\x000\\x008\\x01@\\x00H\\x00P\\x00X\\x01`\\x00h\\x02x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x01\\x10\\x05\\x18\\x02 \\x00(\\x000\\x008\\x00@\\x00H\\x00P\\x00X\\x00`\\x00h\\x01x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x01\\x10\\x05\\x18\\x02 \\x00(\\x000\\x008\\x00@\\x00H\\x00P\\x00X\\x00`\\x00h\\x02x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x01\\x10\\x05\\x18\\x02 \\x01(\\x000\\x008\\x00@\\x00H\\x00P\\x00X\\x00`\\x00h\\x01x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x04\\x10\\x05\\x18\\x01 \\x00(\\x000\\x008\\x00@\\x00H\\x00P\\x00X\\x00`\\x00h\\x00x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x01\\x10\\x05\\x18\\x02 \\x00(\\x000\\x008\\x00@\\x00H\\x00P\\x00X\\x00`\\x00h\\x00x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x04\\x10\\x05\\x18\\x01 \\x00(\\x000\\x008\\x00@\\x00H\\x00P\\x00X\\x00`\\x00h\\x00x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x01\\x10\\x05\\x18\\x02 \\x00(\\x000\\x008\\x00@\\x00H\\x00P\\x00X\\x00`\\x00h\\x01x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x01\\x10\\x05\\x18\\x02 "
//		"\\x00(\\x000\\x008\\x00@\\x00H\\x00P\\x00X\\x00`\\x00h\\x02x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x01\\x10\\x05\\x18\\x02 \\x01(\\x000\\x008\\x00@\\x00H\\x00P\\x00X\\x00`\\x00h\\x01x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x04\\x10\\x05\\x18\\x01 \\x00(\\x000\\x008\\x00@\\x00H\\x00P\\x00X\\x00`\\x00h\\x00x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x01\\x10\\x05\\x18\\x02 \\x00(\\x000\\x008\\x00@\\x00H\\x00P\\x00X\\x00`\\x00h\\x00x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x04\\x10\\x05\\x18\\x01 \\x00(\\x000\\x008\\x00@\\x00H\\x00P\\x00X\\x00`\\x00h\\x00x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x01\\x10\\x05\\x18\\x02 \\x00(\\x000\\x008\\x00@\\x00H\\x00P\\x00X\\x00`\\x00h\\x01x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x01\\x10\\x05\\x18\\x02 \\x00(\\x000\\x008\\x00@\\x00H\\x00P\\x00X\\x00`\\x00h\\x02x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x01\\x10\\x05\\x18\\x02 \\x01(\\x000\\x008\\x00@\\x00H\\x00P\\x00X\\x00`\\x00h\\x01x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x04\\x10\\x05\\x18\\x01 \\x00(\\x000"
//		"\\x008\\x00@\\x00H\\x00P\\x00X\\x00`\\x00h\\x00x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x01\\x10\\x05\\x18\\x02 \\x00(\\x000\\x008\\x00@\\x00H\\x00P\\x00X\\x00`\\x00h\\x00x\\x00\\x80\\x01\\x00P\\x00\\x92\\x01$F321ACBF-8699-4C0D-9720-ED1F8C58E840\\x9A\\x01:\n"
//		"\tUser.Info\\x12\\x16\n"
//		"\\x08UserName\\x12\n"
//		"d.troickiy\\x12\\x15\n"
//		"\n"
//		"DomainName\\x12\\x07VOSKHOD\\x9A\\x01\\x90\\x01\n"
//		"\\x17browser.page_transition\\x12\\x0C\n"
//		"\\x08url_from\\x12\\x00\\x12\\x18\n"
//		"\\x06url_to\\x12\\x0E172.20.101.50/\\x12\\x1A\n"
//		"\ttimestamp\\x12\r1607153545102\\x121\n"
//		"\\x0Ftransition_type\\x12\\x1EPAGE_TRANSITION_AUTO_TOPLEVEL,\\x9A\\x01\\x89\\x01\n"
//		"\\x17browser.page_transition\\x12\\x0C\n"
//		"\\x08url_from\\x12\\x00\\x12\\x18\n"
//		"\\x06url_to\\x12\\x0E172.20.101.50/\\x12\\x1A\n"
//		"\ttimestamp\\x12\r1607153545192\\x12*\n"
//		"\\x0Ftransition_type\\x12\\x17PAGE_TRANSITION_RELOAD,\\x9A\\x01\\x95\\x01\n"
//		"\\x17browser.page_transition\\x12\\x1A\n"
//		"\\x08url_from\\x12\\x0E172.20.101.50/\\x12\\x18\n"
//		"\\x06url_to\\x12\\x0E172.20.101.50/\\x12\\x1A\n"
//		"\ttimestamp\\x12\r1607153546003\\x12(\n"
//		"\\x0Ftransition_type\\x12\\x15PAGE_TRANSITION_LINK,\\x9A\\x01\\xB4\\x01\n"
//		"\\x17browser.page_transition\\x12\\x1A\n"
//		"\\x08url_from\\x12\\x0E172.20.101.50/\\x127\n"
//		"\\x06url_to\\x12-172.20.101.50/fsi/definition-polling-stations\\x12\\x1A\n"
//		"\ttimestamp\\x12\r1607153551490\\x12(\n"
//		"\\x0Ftransition_type\\x12\\x15PAGE_TRANSITION_LINK,\\x9A\\x01\\xDD\\x01\n"
//		"\\x17browser.page_transition\\x129\n"
//		"\\x08url_from\\x12-172.20.101.50/fsi/definition-polling-stations\\x12A\n"
//		"\\x06url_to\\x127172.20.101.50/fsi/definition-polling-stations?eventId=8\\x12\\x1A\n"
//		"\ttimestamp\\x12\r1607153553728\\x12(\n"
//		"\\x0Ftransition_type\\x12\\x15PAGE_TRANSITION_LINK,\\x9A\\x01\\xF2\\x01\n"
//		"\\x17browser.page_transition\\x12C\n"
//		"\\x08url_from\\x127172.20.101.50/fsi/definition-polling-stations?eventId=8\\x12L\n"
//		"\\x06url_to\\x12B172.20.101.50/fsi/definition-polling-stations?eventId=8&uikId=9197\\x12\\x1A\n"
//		"\ttimestamp\\x12\r1607153564712\\x12(\n"
//		"\\x0Ftransition_type\\x12\\x15PAGE_TRANSITION_LINK,\\x9A\\x01\\xF9\\x01\n"
//		"\\x17browser.page_transition\\x12N\n"
//		"\\x08url_from\\x12B172.20.101.50/fsi/definition-polling-stations?eventId=8&uikId=9197\\x12H\n"
//		"\\x06url_to\\x12>172.20.101.50/fsi/setting-up-elector-list?eventId=8&uikId=9197\\x12\\x1A\n"
//		"\ttimestamp\\x12\r1607153566529\\x12(\n"
//		"\\x0Ftransition_type\\x12\\x15PAGE_TRANSITION_LINK,\\x9A\\x01d\n"
//		"\\x08branding\\x12#\n"
//		"\tCompanyID\\x12\\x16sputnik-lab-b2c-common\\x12\\x17\n"
//		"\tSegmentID\\x12\n"
//		"b2c-common\\x12\\x1A\n"
//		"\ttimestamp\\x12\r1607153571062\\xA2\\x01\\x00",
//		LAST); 
//	*/
//
//	web_add_header("Origin", 
//		"http://172.20.101.50");
//
//	web_custom_request("history-voters", 
//		"URL=http://172.20.101.50/ruip-fsi/print-document/history-voters", 
//		"Method=POST", 
//		"Resource=0", 
//		"Referer=http://172.20.101.50/fsi/setting-up-elector-list?eventId=8&uikId=9197", 
//		"Snapshot=t103.inf", 
//		"Mode=HTML", 
//		"EncType=application/json", 
//		"Body=[{\"additionalForm\":false,\"electionCompanyNameId\":8,\"electorsCounts\":[1120],\"emptyFormAmount\":0,\"globalSettingsName\":\"TEMPLATE_VOTER_LIST_FORM\",\"kca\":\"62T013\",\"numerationMode\":\"THROUGH\",\"pointId\":\"93\",\"printType\":\"{\\\"additionalForm\\\":false,\\\"electionCompanyNameId\\\":8,\\\"electorsCounts\\\":[1120],\\\"emptyFormAmount\\\":0,\\\"globalSettingsName\\\":\\\"TEMPLATE_VOTER_LIST_FORM\\\",\\\"kca\\\":\\\"62T013\\\",\\\"numerationMode\\\":\\\"THROUGH\\\",\\\""
//		"pointId\\\":\\\"93\\\",\\\"printType\\\":\\\"\\\",\\\"registerMode\\\":\\\"WITH_CAPITAL\\\",\\\"tempalteId\\\":38,\\\"templateIndividualForm\\\":false,\\\"templateVoterListForm\\\":true,\\\"userId\\\":\\\"749bc037-9184-4562-b75e-6405edde3d22\\\"}\",\"registerMode\":\"WITH_CAPITAL\",\"tempalteId\":38,\"templateIndividualForm\":false,\"templateVoterListForm\":true,\"userId\":\"749bc037-9184-4562-b75e-6405edde3d22\"}]", 
//		LAST);
//
//	web_url("hasIntersections", 
//		"URL=http://172.20.101.50/ruip-fsi/plots-territories/hasIntersections?id=9197", 
//		"Resource=0", 
//		"RecContentType=application/json", 
//		"Referer=http://172.20.101.50/fsi/setting-up-elector-list?eventId=8&uikId=9197", 
//		"Snapshot=t104.inf", 
//		"Mode=HTML", 
//		LAST);
//
//	web_add_header("X-Chrome-UMA-Log-SHA1", 
//		"37D49C42FF7C9464E0B021AA466D56395FB6B2DB");
//
//	web_add_header("X-Chrome-UMA-ReportingInfo", 
//		"CAEQyAEYACAB");
//
///* Removed by Async CodeGen.
//ID = Poll_2
// */
//	/*
// web_custom_request("desktop_3",
//		"URL=https://sputnik-lab.com/api-logs/desktop",
//		"Method=POST",
//		"Resource=0",
//		"RecContentType=text/xml, application/xml",
//		"Referer=",
//		"Snapshot=t105.inf",
//		"Mode=HTML",
//		"EncType=application/vnd.chrome.uma",
//		"ContentEncoding=gzip",
//		"BodyBinary=\t\\x9D\\x01z\\xCC\n"
//		"\\xE2\\xE1\\x1D\\x10\\x1B\\x1A\\xEA\\x10\\x08\\xD0\\xD2\\xDE\\xFC\\x05\\x12\n"
//		"4.5.4512.0\\x18\\x90\\xC1\\xEB\\xFB\\x05\"\\x02ru*\\x18\n"
//		"\n"
//		"Windows NT\\x12\n"
//		"10.0.177632\\x8A\\x01\n"
//		"\\x06x86_64\\x10\\xCE}\\x18\\x80\\x80\\xD4\\xA0\\x01\"\\x00(\\x020\\x80\\x0F8\\xB8\\x08B>\\x08\\x86\\x81\\x02\\x10\\x92\\xB2\\x01\\x1A\\x073.3.0.2\"\n"
//		"2017/04/072\\x0BGoogle Inc.:\\x12Google SwiftShaderM\\xEB\\x13\\xB9BU\\xF2Y\\xB9Be\\x00\\x00\\x80?j\\x14\n"
//		"\\x0CGenuineIntel\\x10\\xE9\\x8D$\\x18\\x04\\x82\\x01\\x02\\x08\\x00\\x8A\\x01\\x02\\x08\\x00:=\n"
//		"\\x13Chromium PDF Viewer\\x12 mhjfbmdgcfjbbpaeojofohoefgiehjai\\x1A\\x00 \\x00(\\x00:B\n"
//		"\\x0FShockwave Flash\\x12\\x1Fpepflashplayer32_32_0_0_453.dll\\x1A\n"
//		"32.0.0.453 \\x00(\\x01:0\n"
//		"\\x13Chromium PDF Plugin\\x12\\x13internal-pdf-viewer\\x1A\\x00 \\x00(\\x01B\\x07\\x08\\x02\\x18\\x01\\xB8\\x01>J\n"
//		"\r.u4\\xC1\\x15\\x88,\\xB7\\xB8J\n"
//		"\r\\x8D\\x8D\\x88\\xB3\\x15\\x91\\x0F\\xBA\\xAFJ\n"
//		"\r\\x9D\\xBA\\x18l\\x15\\x02\\xB3\\x98=J\n"
//		"\r\\x82Uxt\\x15\\xDF\\x17J?J\n"
//		"\rl\\xFF\\x1F$\\x15W\\x1C\\xDANJ\n"
//		"\r\\x0F\\x8FR\\x1E\\x15\\xA2\\x05S\\x01J\n"
//		"\r\\xB8\\xEC0\\xB1\\x15\\xB8\\xEC0\\xB1J\n"
//		"\r\\xF7O,\\xD5\\x15\\xF7O,\\xD5J\n"
//		"\r8\\xBC\\xED\\xB1\\x15\\xADnO\\xCFJ\n"
//		"\r\\xDF\\xEA\\xD7\\xCD\\x15\\xC9Q\\xAE\\xF5J\n"
//		"\r\\xE9,u\\x1C\\x15\\xE9,u\\x1CJ\n"
//		"\r\\xE5\\xF3;\\xD4\\x15\\xE5\\xF3;\\xD4J\n"
//		"\r\\xDA\\x87?\\xBA\\x15V\\xA6\\xBDEJ\n"
//		"\r\\x90\\x85\\xCB\\xA5\\x15\\xDF\\x17J?J\n"
//		"\raOll\\x15\\xDF\\x17J?J\n"
//		"\r\\xB8\\x8A\\xB4v\\x15\\\\x10\\xBD\\xD4J\n"
//		"\r\\xC8A\\x08\\xC7\\x15\\x07pV\\xA2J\n"
//		"\r`\\xA0{\\xED\\x15\\xDF\\x17J?J\n"
//		"\r\\xDC*!'\\x15\\xDC*!'J\n"
//		"\r\\xC8v\\x15Y\\x15\\xDF\\x17J?J\n"
//		"\r\t\\xEBtR\\x15\\xDF\\x17J?J\n"
//		"\r{l\\xC9D\\x15\\xDF\\x17J?J\n"
//		"\r\\xBBu\\xF5W\\x15\\xDF\\x17J?J\n"
//		"\r\\x85(\\x81h\\x15\\x87\\xAC/MJ\n"
//		"\r\\xE9i/\\xB7\\x15\\xDF\\x17J?J\n"
//		"\r\\x0C\\x91G\\xF3\\x15\\xDF\\x17J?J\n"
//		"\r\\xDC\\xDD\\xBBw\\x15\\xDF\\x17J?J\n"
//		"\r\\xBD\\xD3s\\x97\\x15\\x10\\xA1~|J\n"
//		"\r\\xCA\\x1Ds\\x93\\x15\\xDF\\x17J?J\n"
//		"\r\\xE0\\x04\\xA6\\x8F\\x158\\xE1\\xE4\\xACJ\n"
//		"\r\\xC5-;\\x8E\\x15\\x90%p\\x93J\n"
//		"\rw\\x95b\\x1E\\x15\\xDF\\x17J?J\n"
//		"\r\\xF2\\xFB\\xE1=\\x15\\xDF\\x17J?J\n"
//		"\r\\xC2\\xDF\\xCBd\\x15\\xDF\\x17J?J\n"
//		"\r|\\x839Q\\x15\\xDF\\x17J?J\n"
//		"\r\\xD9v\\x81\\x7F\\x15\\xDF\\x17J?J\n"
//		"\r{\\xB7\\x9C\\xF7\\x15\\xF4\\xF4G=J\n"
//		"\rqz!\\xF7\\x15xq\\x04\\xB2J\n"
//		"\r\\xEB\\x98\\xA8#\\x15t\\xCF\\x93\\xFCJ\n"
//		"\r\\x90\\xDA\\x8B\\x86\\x15\\xDF\\x17J?J\n"
//		"\r\\xA6\\x03\\xA3N\\x15\\xDF\\x17J?J\n"
//		"\r\\x81\"\\xBE\\x12\\x15\\xE5X\\xB1\\xE3J\n"
//		"\r\\xA9b%\\xD9\\x15\\xBA\\x0E\\xDD\\xE1J\n"
//		"\r)b\\xA2\\xF4\\x15\\x7F\\xB3aLJ\n"
//		"\r\\x8AH\\xFC%\\x15\\x87\\xAC/MJ\n"
//		"\rtO\"d\\x15J\\xFA\\x87PJ\n"
//		"\r\\x8C/0V\\x15p.\\x88/J\n"
//		"\r\\xCF\\xA1si\\x15\\xDF\\x17J?J\n"
//		"\rOl`r\\x15\\xDF\\x17J?J\n"
//		"\rB\\xB8\\xEC\\x1A\\x15\\xDF\\x17J?J\n"
//		"\r\\x1C\\xA9\\xC0\\xCA\\x15\\xDF\\x17J?J\n"
//		"\r\\xA3\\xD4\\xCE\\x1B\\x15\\xF8C\\x1B\\xD6J\n"
//		"\rR\\x04n\\xF5\\x15\\xDF\\x17J?J\n"
//		"\r\\xA00\\xEA\\xF3\\x15\\xDF\\x17J?J\n"
//		"\r\\x86\\x00/\\x0B\\x15G>\\x05\\x93J\n"
//		"\r\\xCE7\\xC3K\\x15C\\x18LPJ\n"
//		"\r[N/\\x9A\\x15\\xDF\\x17J?J\n"
//		"\ro\\x91G\\xD7\\x15o\\x91G\\xD7J\n"
//		"\r\\xAA\\xD8Dh\\x15\\xE0\\x04\\x9AfJ\n"
//		"\r`\\x87MI\\x15\\xDF\\x17J?J\n"
//		"\r\\x02\\xA3\\xBA4\\x15\\xADnO\\xCFJ\n"
//		"\r\\xA2\\xF3\\xFF\\xF5\\x15\\xA2\\xF3\\xFF\\xF5J\n"
//		"\r\\xB2\\xA7\\x7FX\\x15\\xCE\\x8AmrJ\n"
//		"\r\\x11\\xF8\\xB8\\xBB\\x15\\xDF\\x17J?J\n"
//		"\r$\\x86\\xE6\\x94\\x15\\xC4\\x8F?\\x80J\n"
//		"\r\\xB8\\x1D\\xD9\\x11\\x15 \\x06:\\xD9J\n"
//		"\r\\xB2\\x88\\xF0>\\x15\\xDF\\x17J?J\n"
//		"\r\\xC5\\xC2:I\\x15\\xDF\\x17J?J\n"
//		"\r\\x01\\xAAJ\\xDA\\x15\\xDF\\x17J?P\\x00b\\x04SPTKj\\x0C\\x08\\x00\\x10\\x00\\x18\\x00 \\x008\\x05@\\x05\\x80\\x01\\x90\\xC1\\xEB\\xFB\\x05\\x90\\x01\\x14\\x90\\x01/\\x90\\x01\\xA6\\x01\\x90\\x01\\x9E\\x03\\x90\\x01\\xA0\\x03\\x90\\x01\\xBA\\x04\\x90\\x01\\xBD\\x05\\x90\\x01\\xFC\\x05\\x90\\x01\\x97\\x06\\x90\\x01\\xD9\\x07\\x98\\x01\\x00\\xBA\\x01\\x07\\x15\\x11')\\xD2(\\x01\\xBA\\x01\\x0C\\x15\\x9E\\x0Che%X\\xDF\\xA2\\x84(\\x00\\xC2\\x01\\x0F\\x08\\x0B\\x12\\x069.18.0\\x1D\\xCEAz<\\xC2\\x01\n"
//		"\\x08\\x08\\x12\\x017\\x1D\\xC0^Q\\xFD\\xC2\\x01\r\\x08\n"
//		"\\x12\\x046279\\x1D\\xBC\\x9C\\x05\\xE8\\xC2\\x01\\x0B\\x08\\x02\\x12\\x0243\\x1D\\xD7\\xD2\\xD1\\xFF\\xC2\\x01\\x10\\x08\\x03\\x12\\x070.0.0.0\\x1D\\x00\\x00\\x00\\x00\\xC2\\x01\r\\x08\t\\x12\\x041256\\x1DB|&{\\xCA\\x01\\x1F\\x08\\x04\\x10\\x05\\x18\\x01 \\x00(\\x000\\x008\\x00@\\x00H\\x00P\\x00X\\x00`\\x00h\\x00x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x01\\x10\n"
//		"\\x18\\x02 \\x01(\\x000\\x008\\x01@\\x00H\\x00P\\x00X\\x01`\\x00h\\x01x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x01\\x10\n"
//		"\\x18\\x02 \\x01(\\x000\\x008\\x01@\\x00H\\x00P\\x00X\\x01`\\x00h\\x01x\\x00\\x80\\x01\\x00\\xCA\\x01!\\x08\\x01\\x10\n"
//		"\\x18\\x02 \\x01(\\x000\\x008\\x01@\\x00H\\x00P\\x00X\\x01`\\x00h\\x00p\\x00x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x06\\x10\n"
//		"\\x18\\x02 \\x00(\\x000\\x008\\x01@\\x00H\\x00P\\x00X\\x01`\\x00h\\x02x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x01\\x10\\x05\\x18\\x02 \\x00(\\x000\\x008\\x00@\\x00H\\x00P\\x00X\\x00`\\x00h\\x01x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x01\\x10\\x05\\x18\\x02 \\x00(\\x000\\x008\\x00@\\x00H\\x00P\\x00X\\x00`\\x00h\\x02x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x01\\x10\\x05\\x18\\x02 \\x01(\\x000\\x008\\x00@\\x00H\\x00P\\x00X\\x00`\\x00h\\x01x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x04\\x10\\x05\\x18\\x01 \\x00(\\x000\\x008\\x00@\\x00H\\x00P\\x00X\\x00`\\x00h\\x00x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x01\\x10\\x05\\x18\\x02 \\x00(\\x000\\x008\\x00@\\x00H\\x00P\\x00X\\x00`\\x00h\\x00x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x04\\x10\\x05\\x18\\x01 \\x00(\\x000\\x008\\x00@\\x00H\\x00P\\x00X\\x00`\\x00h\\x00x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x01\\x10\\x05\\x18\\x02 \\x00(\\x000\\x008\\x00@\\x00H\\x00P\\x00X\\x00`\\x00h\\x01x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x01\\x10\\x05\\x18\\x02 "
//		"\\x00(\\x000\\x008\\x00@\\x00H\\x00P\\x00X\\x00`\\x00h\\x02x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x01\\x10\\x05\\x18\\x02 \\x01(\\x000\\x008\\x00@\\x00H\\x00P\\x00X\\x00`\\x00h\\x01x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x04\\x10\\x05\\x18\\x01 \\x00(\\x000\\x008\\x00@\\x00H\\x00P\\x00X\\x00`\\x00h\\x00x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x01\\x10\\x05\\x18\\x02 \\x00(\\x000\\x008\\x00@\\x00H\\x00P\\x00X\\x00`\\x00h\\x00x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x04\\x10\\x05\\x18\\x01 \\x00(\\x000\\x008\\x00@\\x00H\\x00P\\x00X\\x00`\\x00h\\x00x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x01\\x10\\x05\\x18\\x02 \\x00(\\x000\\x008\\x00@\\x00H\\x00P\\x00X\\x00`\\x00h\\x01x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x01\\x10\\x05\\x18\\x02 \\x00(\\x000\\x008\\x00@\\x00H\\x00P\\x00X\\x00`\\x00h\\x02x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x01\\x10\\x05\\x18\\x02 \\x01(\\x000\\x008\\x00@\\x00H\\x00P\\x00X\\x00`\\x00h\\x01x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x04\\x10\\x05\\x18\\x01 \\x00(\\x000"
//		"\\x008\\x00@\\x00H\\x00P\\x00X\\x00`\\x00h\\x00x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x01\\x10\\x05\\x18\\x02 \\x00(\\x000\\x008\\x00@\\x00H\\x00P\\x00X\\x00`\\x00h\\x00x\\x00\\x80\\x01\\x00\"\\x10\t|\\x9C\\x0B\\x12?\\xC1\\xC0\\xC2\\x10\\xB5\\xFD\\xBC\\x8E\\xE3.\"\\x10\t|\\x9C\\x0B\\x12?\\xC1\\xC0\\xC2\\x10\\xDF\\xFD\\xBC\\x8E\\xE3.\"\\x10\t|\\x9C\\x0B\\x12?\\xC1\\xC0\\xC2\\x10\\xF5\\xFD\\xBC\\x8E\\xE3.\"\\x10\t\\xDF\\xBE\\x11\\x7F\\xEB{/\\xB5\\x10\\xFE\\xFE\\xBC\\x8E\\xE3.\"\\x10\t\\x15\\x93[i\\x01#r\\xAC\\x10\\xC3\\xFF\\xBC\\x8E\\xE3.\"\\x10\t\\xA8HH\\xA3\\xA8\\x88j\\xE8\\x10\\xE2\\xFF\\xBC\\x8E\\xE3.\"\\x10\t\\x15\\x93[i\\x01#r\\xAC\\x10\\x85\\x80\\xBD\\x8E\\xE3.\"\\x10\t\\xDF\\xBE\\x11\\x7F\\xEB{/\\xB5\\x10\\x86\\x80\\xBD\\x8E\\xE3.\"\\x10\t\\x15\\x93[i\\x01#r\\xAC\\x10\\x8D\\x86\\xBD\\x8E\\xE3.\"\\x10\t\\x15\\x93[i\\x01#r\\xAC\\x10\\x8F\\x86\\xBD\\x8E\\xE3.\"\\x10\t\\x15\\x93[i\\x01#r\\xAC\\x10\\x90\\x86\\xBD\\x8E\\xE3.\"\\x10\t\\x15\\x93[i\\x01#r\\xAC\\x10\\x92\\x86\\xBD\\x8E\\xE3.\"\\x10\t\\x14m3"
//		"\\xADs\\xA5\\xB0\\x08\\x10\\x8C\\x8B\\xBD\\x8E\\xE3.\"\\x10\t\\x14m3\\xADs\\xA5\\xB0\\x08\\x10\\xBB\\x8B\\xBD\\x8E\\xE3.\"\\x10\t\\x14m3\\xADs\\xA5\\xB0\\x08\\x10\\xE2\\x8B\\xBD\\x8E\\xE3.\"\\x10\t\\x14m3\\xADs\\xA5\\xB0\\x08\\x10\\x9B\\xFF\\xBE\\x8E\\xE3.\"\\x10\t\\x14m3\\xADs\\xA5\\xB0\\x08\\x10\\x9B\\xFF\\xBE\\x8E\\xE3.\"\\x10\t\\x14m3\\xADs\\xA5\\xB0\\x08\\x10\\x9E\\xFF\\xBE\\x8E\\xE3.\"\\x10\t\\xA8HH\\xA3\\xA8\\x88j\\xE8\\x10\\xAF\\xD7\\xBF\\x8E\\xE3.\"\\x10\t\\xA8HH\\xA3\\xA8\\x88j\\xE8\\x10\\x85\\xE5\\xBF\\x8E\\xE3.\"\\x10\t\\xA8HH\\xA3\\xA8\\x88j\\xE8\\x10\\xAE\\xEA\\xBF\\x8E\\xE3.\"\\x10\t\\xA8HH\\xA3\\xA8\\x88j\\xE8\\x10\\x95\\xB2\\xC0\\x8E\\xE3.\"\\x10\tk\\xF6\\x91\\x07\\x11d\\xC1\\x99\\x10\\x8B\\xBA\\xC0\\x8E\\xE3.P\\x00\\x92\\x01$F321ACBF-8699-4C0D-9720-ED1F8C58E840\\x9A\\x01:\n"
//		"\tUser.Info\\x12\\x16\n"
//		"\\x08UserName\\x12\n"
//		"d.troickiy\\x12\\x15\n"
//		"\n"
//		"DomainName\\x12\\x07VOSKHOD\\x9A\\x01=\n"
//		"\\x07metrics\\x12\\x16\n"
//		"\\x0Eenable_metrics\\x12\\x04true\\x12\\x1A\n"
//		"\ttimestamp\\x12\r1607153434420\\x9A\\x01=\n"
//		"\\x07metrics\\x12\\x16\n"
//		"\\x0Eenable_metrics\\x12\\x04true\\x12\\x1A\n"
//		"\ttimestamp\\x12\r1607153434492\\x9A\\x01d\n"
//		"\\x08branding\\x12#\n"
//		"\tCompanyID\\x12\\x16sputnik-lab-b2c-common\\x12\\x17\n"
//		"\tSegmentID\\x12\n"
//		"b2c-common\\x12\\x1A\n"
//		"\ttimestamp\\x12\r1607153494292\\xA2\\x01\\x00",
//		LAST); 
//	*/
//
//	web_add_auto_header("Origin", 
//		"http://172.20.101.50");
//
///* Added by Async CodeGen.
//ID=Poll_1
//ScanType = Recording
//
//The following URLs are considered part of this conversation:
//	http://172.20.101.50/ruip-fsi/print-document/status
//
//TODO - The following callbacks have been added to AsyncCallbacks.c.
//Add your code to the callback implementations as necessary.
//	Poll_1_RequestCB
//	Poll_1_ResponseCB
// */
//	web_reg_async_attributes("ID=Poll_1", 
//		"Pattern=Poll", 
//		"URL=http://172.20.101.50/ruip-fsi/print-document/status", 
//		"PollIntervalMs=3000", 
//		"RequestCB=Poll_1_RequestCB", 
//		"ResponseCB=Poll_1_ResponseCB", 
//		LAST);
//
//	web_custom_request("status", 
//		"URL=http://172.20.101.50/ruip-fsi/print-document/status", 
//		"Method=POST", 
//		"Resource=0", 
//		"RecContentType=application/json", 
//		"Referer=http://172.20.101.50/fsi/setting-up-elector-list?eventId=8&uikId=9197", 
//		"Snapshot=t106.inf", 
//		"Mode=HTML", 
//		"EncType=application/json", 
//		"Body=[{\"electionCompanyNameId\":8,\"kca\":\"62T013\",\"printType\":\"{\\\"additionalForm\\\":false,\\\"electionCompanyNameId\\\":8,\\\"electorsCounts\\\":[1120],\\\"emptyFormAmount\\\":0,\\\"globalSettingsName\\\":\\\"TEMPLATE_VOTER_LIST_FORM\\\",\\\"kca\\\":\\\"62T013\\\",\\\"numerationMode\\\":\\\"THROUGH\\\",\\\"pointId\\\":\\\"93\\\",\\\"printType\\\":\\\"\\\",\\\"registerMode\\\":\\\"WITH_CAPITAL\\\",\\\"tempalteId\\\":38,\\\"templateIndividualForm\\\":false,\\\"templateVoterListForm\\\""
//		":true,\\\"userId\\\":\\\"749bc037-9184-4562-b75e-6405edde3d22\\\"}\",\"subjectGlobalId\":\"9197\",\"templateId\":38,\"userId\":\"749bc037-9184-4562-b75e-6405edde3d22\"}]", 
//		LAST);
//
//	web_custom_request("print-document", 
//		"URL=http://172.20.101.50/ruip-fsi/print-document", 
//		"Method=POST", 
//		"Resource=0", 
//		"Referer=http://172.20.101.50/fsi/setting-up-elector-list?eventId=8&uikId=9197", 
//		"Snapshot=t107.inf", 
//		"Mode=HTML", 
//		"EncType=application/json", 
//		"Body=[{\"additionalForm\":false,\"electionCompanyNameId\":8,\"electorsCounts\":[1120],\"emptyFormAmount\":0,\"globalSettingsName\":\"TEMPLATE_VOTER_LIST_FORM\",\"kca\":\"62T013\",\"numerationMode\":\"THROUGH\",\"pointId\":\"93\",\"printType\":\"{\\\"additionalForm\\\":false,\\\"electionCompanyNameId\\\":8,\\\"electorsCounts\\\":[1120],\\\"emptyFormAmount\\\":0,\\\"globalSettingsName\\\":\\\"TEMPLATE_VOTER_LIST_FORM\\\",\\\"kca\\\":\\\"62T013\\\",\\\"numerationMode\\\":\\\"THROUGH\\\",\\\""
//		"pointId\\\":\\\"93\\\",\\\"printType\\\":\\\"\\\",\\\"registerMode\\\":\\\"WITH_CAPITAL\\\",\\\"tempalteId\\\":38,\\\"templateIndividualForm\\\":false,\\\"templateVoterListForm\\\":true,\\\"userId\\\":\\\"749bc037-9184-4562-b75e-6405edde3d22\\\"}\",\"registerMode\":\"WITH_CAPITAL\",\"tempalteId\":38,\"templateIndividualForm\":false,\"templateVoterListForm\":true,\"userId\":\"749bc037-9184-4562-b75e-6405edde3d22\"}]", 
//		LAST);
//
//	web_revert_auto_header("Origin");
//
//	web_add_header("X-Chrome-UMA-Log-SHA1", 
//		"ADCC60B5B955CD230E6005C69A7B86AFD7CD506C");
//
//	web_add_header("X-Chrome-UMA-ReportingInfo", 
//		"CAEQyAEYACAB");
//
///* Removed by Async CodeGen.
//ID = Poll_2
// */
//	/*
// web_custom_request("desktop_4",
//		"URL=https://sputnik-lab.com/api-logs/desktop",
//		"Method=POST",
//		"Resource=0",
//		"RecContentType=text/xml, application/xml",
//		"Referer=",
//		"Snapshot=t108.inf",
//		"Mode=HTML",
//		"EncType=application/vnd.chrome.uma",
//		"ContentEncoding=gzip",
//		"BodyBinary=\t\\x9D\\x01z\\xCC\n"
//		"\\xE2\\xE1\\x1D\\x10\\x1B\\x1A\\x87\\x11\\x08\\xD0\\xD2\\xDE\\xFC\\x05\\x12\n"
//		"4.5.4512.0\\x18\\x90\\xC1\\xEB\\xFB\\x05\"\\x02ru*\\x18\n"
//		"\n"
//		"Windows NT\\x12\n"
//		"10.0.177632\\x8A\\x01\n"
//		"\\x06x86_64\\x10\\xCE}\\x18\\x80\\x80\\xD4\\xA0\\x01\"\\x00(\\x020\\x80\\x0F8\\xB8\\x08B>\\x08\\x86\\x81\\x02\\x10\\x92\\xB2\\x01\\x1A\\x073.3.0.2\"\n"
//		"2017/04/072\\x0BGoogle Inc.:\\x12Google SwiftShaderM\\xEB\\x13\\xB9BU\\xF2Y\\xB9Be\\x00\\x00\\x80?j\\x14\n"
//		"\\x0CGenuineIntel\\x10\\xE9\\x8D$\\x18\\x04\\x82\\x01\\x02\\x08\\x00\\x8A\\x01\\x02\\x08\\x00:=\n"
//		"\\x13Chromium PDF Viewer\\x12 mhjfbmdgcfjbbpaeojofohoefgiehjai\\x1A\\x00 \\x00(\\x00:B\n"
//		"\\x0FShockwave Flash\\x12\\x1Fpepflashplayer32_32_0_0_453.dll\\x1A\n"
//		"32.0.0.453 \\x00(\\x01:0\n"
//		"\\x13Chromium PDF Plugin\\x12\\x13internal-pdf-viewer\\x1A\\x00 \\x00(\\x01B\\x0C\\x10\\x06 \\x010\\x08\\xD0\\x01\\x01\\xD8\\x01\\x04J\n"
//		"\r.u4\\xC1\\x15\\x88,\\xB7\\xB8J\n"
//		"\r\\x8D\\x8D\\x88\\xB3\\x15\\x91\\x0F\\xBA\\xAFJ\n"
//		"\r\\x9D\\xBA\\x18l\\x15\\x02\\xB3\\x98=J\n"
//		"\r\\x82Uxt\\x15\\xDF\\x17J?J\n"
//		"\rl\\xFF\\x1F$\\x15W\\x1C\\xDANJ\n"
//		"\r\\x0F\\x8FR\\x1E\\x15\\xA2\\x05S\\x01J\n"
//		"\r\\xB8\\xEC0\\xB1\\x15\\xB8\\xEC0\\xB1J\n"
//		"\r\\xF7O,\\xD5\\x15\\xF7O,\\xD5J\n"
//		"\r8\\xBC\\xED\\xB1\\x15\\xADnO\\xCFJ\n"
//		"\r\\xDF\\xEA\\xD7\\xCD\\x15\\xC9Q\\xAE\\xF5J\n"
//		"\r\\xE9,u\\x1C\\x15\\xE9,u\\x1CJ\n"
//		"\r\\xE5\\xF3;\\xD4\\x15\\xE5\\xF3;\\xD4J\n"
//		"\r\\xDA\\x87?\\xBA\\x15V\\xA6\\xBDEJ\n"
//		"\r\\x90\\x85\\xCB\\xA5\\x15\\xDF\\x17J?J\n"
//		"\raOll\\x15\\xDF\\x17J?J\n"
//		"\r\\xB8\\x8A\\xB4v\\x15\\\\x10\\xBD\\xD4J\n"
//		"\r\\xC8A\\x08\\xC7\\x15\\x07pV\\xA2J\n"
//		"\r`\\xA0{\\xED\\x15\\xDF\\x17J?J\n"
//		"\r\\xDC*!'\\x15\\xDC*!'J\n"
//		"\r\\xC8v\\x15Y\\x15\\xDF\\x17J?J\n"
//		"\r\t\\xEBtR\\x15\\xDF\\x17J?J\n"
//		"\r{l\\xC9D\\x15\\xDF\\x17J?J\n"
//		"\r\\xBBu\\xF5W\\x15\\xDF\\x17J?J\n"
//		"\r\\x85(\\x81h\\x15\\x87\\xAC/MJ\n"
//		"\r\\xE9i/\\xB7\\x15\\xDF\\x17J?J\n"
//		"\r\\x0C\\x91G\\xF3\\x15\\xDF\\x17J?J\n"
//		"\r\\xDC\\xDD\\xBBw\\x15\\xDF\\x17J?J\n"
//		"\r\\xBD\\xD3s\\x97\\x15\\x10\\xA1~|J\n"
//		"\r\\xCA\\x1Ds\\x93\\x15\\xDF\\x17J?J\n"
//		"\r\\xE0\\x04\\xA6\\x8F\\x158\\xE1\\xE4\\xACJ\n"
//		"\r\\xC5-;\\x8E\\x15\\x90%p\\x93J\n"
//		"\rw\\x95b\\x1E\\x15\\xDF\\x17J?J\n"
//		"\r\\xF2\\xFB\\xE1=\\x15\\xDF\\x17J?J\n"
//		"\r\\xC2\\xDF\\xCBd\\x15\\xDF\\x17J?J\n"
//		"\r|\\x839Q\\x15\\xDF\\x17J?J\n"
//		"\r\\xD9v\\x81\\x7F\\x15\\xDF\\x17J?J\n"
//		"\r{\\xB7\\x9C\\xF7\\x15\\xF4\\xF4G=J\n"
//		"\rqz!\\xF7\\x15xq\\x04\\xB2J\n"
//		"\r\\xEB\\x98\\xA8#\\x15t\\xCF\\x93\\xFCJ\n"
//		"\r\\x90\\xDA\\x8B\\x86\\x15\\xDF\\x17J?J\n"
//		"\r\\xA6\\x03\\xA3N\\x15\\xDF\\x17J?J\n"
//		"\r\\x81\"\\xBE\\x12\\x15\\xE5X\\xB1\\xE3J\n"
//		"\r\\xA9b%\\xD9\\x15\\xBA\\x0E\\xDD\\xE1J\n"
//		"\r)b\\xA2\\xF4\\x15\\x7F\\xB3aLJ\n"
//		"\r\\x8AH\\xFC%\\x15\\x87\\xAC/MJ\n"
//		"\rtO\"d\\x15J\\xFA\\x87PJ\n"
//		"\r\\x8C/0V\\x15p.\\x88/J\n"
//		"\r\\xCF\\xA1si\\x15\\xDF\\x17J?J\n"
//		"\rOl`r\\x15\\xDF\\x17J?J\n"
//		"\rB\\xB8\\xEC\\x1A\\x15\\xDF\\x17J?J\n"
//		"\r\\x1C\\xA9\\xC0\\xCA\\x15\\xDF\\x17J?J\n"
//		"\r\\xA3\\xD4\\xCE\\x1B\\x15\\xF8C\\x1B\\xD6J\n"
//		"\rR\\x04n\\xF5\\x15\\xDF\\x17J?J\n"
//		"\r\\xA00\\xEA\\xF3\\x15\\xDF\\x17J?J\n"
//		"\r\\x86\\x00/\\x0B\\x15G>\\x05\\x93J\n"
//		"\r\\xCE7\\xC3K\\x15C\\x18LPJ\n"
//		"\r[N/\\x9A\\x15\\xDF\\x17J?J\n"
//		"\ro\\x91G\\xD7\\x15o\\x91G\\xD7J\n"
//		"\r\\xAA\\xD8Dh\\x15\\xE0\\x04\\x9AfJ\n"
//		"\r`\\x87MI\\x15\\xDF\\x17J?J\n"
//		"\r\\x02\\xA3\\xBA4\\x15\\xADnO\\xCFJ\n"
//		"\r\\xA2\\xF3\\xFF\\xF5\\x15\\xA2\\xF3\\xFF\\xF5J\n"
//		"\r\\xB2\\xA7\\x7FX\\x15\\xCE\\x8AmrJ\n"
//		"\r\\x11\\xF8\\xB8\\xBB\\x15\\xDF\\x17J?J\n"
//		"\r$\\x86\\xE6\\x94\\x15\\xC4\\x8F?\\x80J\n"
//		"\r\\xB8\\x1D\\xD9\\x11\\x15 \\x06:\\xD9J\n"
//		"\r\\xB2\\x88\\xF0>\\x15\\xDF\\x17J?J\n"
//		"\r\\xC5\\xC2:I\\x15\\xDF\\x17J?J\n"
//		"\r\\x01\\xAAJ\\xDA\\x15\\xDF\\x17J?J\n"
//		"\r1\\x90U\\x0C\\x15\\xF4\\xF4G=J\n"
//		"\r\\x9E\\xB0X\\xE2\\x15\\xDF\\x17J?P\\x00b\\x04SPTKj\\x0C\\x08\\x00\\x10\\x00\\x18\\x00 \\x008\\x05@\\x06\\x80\\x01\\x90\\xC1\\xEB\\xFB\\x05\\x90\\x01\\x14\\x90\\x01/\\x90\\x01\\xA6\\x01\\x90\\x01\\x9E\\x03\\x90\\x01\\xA0\\x03\\x90\\x01\\xBA\\x04\\x90\\x01\\xBD\\x05\\x90\\x01\\xFC\\x05\\x90\\x01\\x97\\x06\\x90\\x01\\xD9\\x07\\x98\\x01\\x00\\xBA\\x01\\x07\\x15\\x11')\\xD2(\\x01\\xBA\\x01\\x0C\\x15\\x9E\\x0Che%X\\xDF\\xA2\\x84(\\x00\\xC2\\x01\\x0F\\x08\\x0B\\x12\\x069.18.0\\x1D\\xCEAz<\\xC2\\x01\n"
//		"\\x08\\x08\\x12\\x017\\x1D\\xC0^Q\\xFD\\xC2\\x01\r\\x08\n"
//		"\\x12\\x046279\\x1D\\xBC\\x9C\\x05\\xE8\\xC2\\x01\\x0B\\x08\\x02\\x12\\x0243\\x1D\\xD7\\xD2\\xD1\\xFF\\xC2\\x01\\x10\\x08\\x03\\x12\\x070.0.0.0\\x1D\\x00\\x00\\x00\\x00\\xC2\\x01\r\\x08\t\\x12\\x041256\\x1DB|&{\\xCA\\x01\\x1F\\x08\\x04\\x10\\x05\\x18\\x01 \\x00(\\x000\\x008\\x00@\\x00H\\x00P\\x00X\\x00`\\x00h\\x00x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x01\\x10\n"
//		"\\x18\\x02 \\x01(\\x000\\x008\\x01@\\x00H\\x00P\\x00X\\x01`\\x00h\\x01x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x01\\x10\n"
//		"\\x18\\x02 \\x01(\\x000\\x008\\x01@\\x00H\\x00P\\x00X\\x01`\\x00h\\x01x\\x00\\x80\\x01\\x00\\xCA\\x01!\\x08\\x01\\x10\n"
//		"\\x18\\x02 \\x01(\\x000\\x008\\x01@\\x00H\\x00P\\x00X\\x01`\\x00h\\x00p\\x00x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x06\\x10\n"
//		"\\x18\\x02 \\x00(\\x000\\x008\\x01@\\x00H\\x00P\\x00X\\x01`\\x00h\\x02x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x01\\x10\\x05\\x18\\x02 \\x00(\\x000\\x008\\x00@\\x00H\\x00P\\x00X\\x00`\\x00h\\x01x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x01\\x10\\x05\\x18\\x02 \\x00(\\x000\\x008\\x00@\\x00H\\x00P\\x00X\\x00`\\x00h\\x02x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x01\\x10\\x05\\x18\\x02 \\x01(\\x000\\x008\\x00@\\x00H\\x00P\\x00X\\x00`\\x00h\\x01x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x04\\x10\\x05\\x18\\x01 \\x00(\\x000\\x008\\x00@\\x00H\\x00P\\x00X\\x00`\\x00h\\x00x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x01\\x10\\x05\\x18\\x02 \\x00(\\x000\\x008\\x00@\\x00H\\x00P\\x00X\\x00`\\x00h\\x00x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x04\\x10\\x05\\x18\\x01 \\x00(\\x000\\x008\\x00@\\x00H\\x00P\\x00X\\x00`\\x00h\\x00x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x01\\x10\\x05\\x18\\x02 \\x00(\\x000\\x008\\x00@\\x00H\\x00P\\x00X\\x00`\\x00h\\x01x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x01\\x10\\x05\\x18\\x02 "
//		"\\x00(\\x000\\x008\\x00@\\x00H\\x00P\\x00X\\x00`\\x00h\\x02x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x01\\x10\\x05\\x18\\x02 \\x01(\\x000\\x008\\x00@\\x00H\\x00P\\x00X\\x00`\\x00h\\x01x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x04\\x10\\x05\\x18\\x01 \\x00(\\x000\\x008\\x00@\\x00H\\x00P\\x00X\\x00`\\x00h\\x00x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x01\\x10\\x05\\x18\\x02 \\x00(\\x000\\x008\\x00@\\x00H\\x00P\\x00X\\x00`\\x00h\\x00x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x04\\x10\\x05\\x18\\x01 \\x00(\\x000\\x008\\x00@\\x00H\\x00P\\x00X\\x00`\\x00h\\x00x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x01\\x10\\x05\\x18\\x02 \\x00(\\x000\\x008\\x00@\\x00H\\x00P\\x00X\\x00`\\x00h\\x01x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x01\\x10\\x05\\x18\\x02 \\x00(\\x000\\x008\\x00@\\x00H\\x00P\\x00X\\x00`\\x00h\\x02x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x01\\x10\\x05\\x18\\x02 \\x01(\\x000\\x008\\x00@\\x00H\\x00P\\x00X\\x00`\\x00h\\x01x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x04\\x10\\x05\\x18\\x01 \\x00(\\x000"
//		"\\x008\\x00@\\x00H\\x00P\\x00X\\x00`\\x00h\\x00x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x01\\x10\\x05\\x18\\x02 \\x00(\\x000\\x008\\x00@\\x00H\\x00P\\x00X\\x00`\\x00h\\x00x\\x00\\x80\\x01\\x00P\\x00\\x92\\x01$F321ACBF-8699-4C0D-9720-ED1F8C58E840\\x9A\\x01:\n"
//		"\tUser.Info\\x12\\x16\n"
//		"\\x08UserName\\x12\n"
//		"d.troickiy\\x12\\x15\n"
//		"\n"
//		"DomainName\\x12\\x07VOSKHOD\\x9A\\x01d\n"
//		"\\x08branding\\x12#\n"
//		"\tCompanyID\\x12\\x16sputnik-lab-b2c-common\\x12\\x17\n"
//		"\tSegmentID\\x12\n"
//		"b2c-common\\x12\\x1A\n"
//		"\ttimestamp\\x12\r1607153494292\\xA2\\x01\\x00",
//		LAST); 
//	*/
//
//	web_add_header("Origin", 
//		"http://172.20.101.50");
//
///* Removed by Async CodeGen.
//ID = Poll_1
// */
//	/*
// web_custom_request("status_2",
//		"URL=http://172.20.101.50/ruip-fsi/print-document/status",
//		"Method=POST",
//		"Resource=0",
//		"RecContentType=application/json",
//		"Referer=http://172.20.101.50/fsi/setting-up-elector-list?eventId=8&uikId=9197",
//		"Snapshot=t109.inf",
//		"Mode=HTML",
//		"EncType=application/json",
//		"Body=[{\"electionCompanyNameId\":8,\"kca\":\"62T013\",\"printType\":\"{\\\"additionalForm\\\":false,\\\"electionCompanyNameId\\\":8,\\\"electorsCounts\\\":[1120],\\\"emptyFormAmount\\\":0,\\\"globalSettingsName\\\":\\\"TEMPLATE_VOTER_LIST_FORM\\\",\\\"kca\\\":\\\"62T013\\\",\\\"numerationMode\\\":\\\"THROUGH\\\",\\\"pointId\\\":\\\"93\\\",\\\"printType\\\":\\\"\\\",\\\"registerMode\\\":\\\"WITH_CAPITAL\\\",\\\"tempalteId\\\":38,\\\"templateIndividualForm\\\":false,\\\"templateVoterListForm\\\":true,\\\"userId\\\":\\\"749bc037-9184-4562-b75e-6405edde3d22\\\"}\",\"subjectGlobalId\":\"9197\",\"templateId\":38,\"userId\":\"749bc037-9184-4562-b75e-6405edde3d22\"}]",
//		LAST); 
//	*/
//
//	web_add_header("X-Chrome-UMA-Log-SHA1", 
//		"76C1BC8D02474AA0FF1F7BA11568D3DB05B54D06");
//
//	web_add_header("X-Chrome-UMA-ReportingInfo", 
//		"CAEQyAEYACAB");
//
///* Removed by Async CodeGen.
//ID = Poll_2
// */
//	/*
// web_custom_request("desktop_5",
//		"URL=https://sputnik-lab.com/api-logs/desktop",
//		"Method=POST",
//		"Resource=0",
//		"RecContentType=text/xml, application/xml",
//		"Referer=",
//		"Snapshot=t110.inf",
//		"Mode=HTML",
//		"EncType=application/vnd.chrome.uma",
//		"ContentEncoding=gzip",
//		"BodyBinary=\t\\x9D\\x01z\\xCC\n"
//		"\\xE2\\xE1\\x1D\\x10\\x1A\\x1A\\xFD\\x11\\x08\\xD0\\xD2\\xDE\\xFC\\x05\\x12\n"
//		"4.5.4512.0\\x18\\x90\\xC1\\xEB\\xFB\\x05\"\\x02ru*\\x18\n"
//		"\n"
//		"Windows NT\\x12\n"
//		"10.0.177632\\x8A\\x01\n"
//		"\\x06x86_64\\x10\\xCE}\\x18\\x80\\x80\\xD4\\xA0\\x01\"\\x00(\\x020\\x80\\x0F8\\xB8\\x08B>\\x08\\x86\\x81\\x02\\x10\\x92\\xB2\\x01\\x1A\\x073.3.0.2\"\n"
//		"2017/04/072\\x0BGoogle Inc.:\\x12Google SwiftShaderM\\xEB\\x13\\xB9BU\\xF2Y\\xB9Be\\x00\\x00\\x80?j\\x14\n"
//		"\\x0CGenuineIntel\\x10\\xE9\\x8D$\\x18\\x04\\x82\\x01\\x02\\x08\\x00\\x8A\\x01\\x02\\x08\\x00:=\n"
//		"\\x13Chromium PDF Viewer\\x12 mhjfbmdgcfjbbpaeojofohoefgiehjai\\x1A\\x00 \\x00(\\x00:B\n"
//		"\\x0FShockwave Flash\\x12\\x1Fpepflashplayer32_32_0_0_453.dll\\x1A\n"
//		"32.0.0.453 \\x00(\\x01:0\n"
//		"\\x13Chromium PDF Plugin\\x12\\x13internal-pdf-viewer\\x1A\\x00 \\x00(\\x01B\n"
//		"\\x08\\xBD\\x14\\x10\\x01\\xB8\\x01\\xF1\\xB1\\x02J\n"
//		"\r.u4\\xC1\\x15\\x88,\\xB7\\xB8J\n"
//		"\r>\\x9F\\xEE\\x98\\x15>\\x9F\\xEE\\x98J\n"
//		"\rp\\xDD\\xE0\\x16\\x15\\xDF\\x17J?J\n"
//		"\r\\x8D\\x8D\\x88\\xB3\\x15\\x91\\x0F\\xBA\\xAFJ\n"
//		"\r\\x9D\\xBA\\x18l\\x15\\x02\\xB3\\x98=J\n"
//		"\rEH\\xDB\\x02\\x158\\xE1\\xE4\\xACJ\n"
//		"\r\\x82Uxt\\x15\\xDF\\x17J?J\n"
//		"\rl\\xFF\\x1F$\\x15W\\x1C\\xDANJ\n"
//		"\r\\x0F\\x8FR\\x1E\\x15\\xA2\\x05S\\x01J\n"
//		"\r\\xB8\\xEC0\\xB1\\x15\\xB8\\xEC0\\xB1J\n"
//		"\r\\xF7O,\\xD5\\x15\\xF7O,\\xD5J\n"
//		"\r8\\xBC\\xED\\xB1\\x15\\xADnO\\xCFJ\n"
//		"\r\\xDF\\xEA\\xD7\\xCD\\x15\\xC9Q\\xAE\\xF5J\n"
//		"\r\\xE9,u\\x1C\\x15\\xE9,u\\x1CJ\n"
//		"\r\\xE5\\xF3;\\xD4\\x15\\xE5\\xF3;\\xD4J\n"
//		"\r\\xDA\\x87?\\xBA\\x15V\\xA6\\xBDEJ\n"
//		"\r\\x90\\x85\\xCB\\xA5\\x15\\xDF\\x17J?J\n"
//		"\raOll\\x15\\xDF\\x17J?J\n"
//		"\r\\xB8\\x8A\\xB4v\\x15\\\\x10\\xBD\\xD4J\n"
//		"\r\\xC8A\\x08\\xC7\\x15\\x07pV\\xA2J\n"
//		"\r`\\xA0{\\xED\\x15\\xDF\\x17J?J\n"
//		"\r+\\x1A \\x9E\\x15\\xDF\\x17J?J\n"
//		"\r\\xAA2\\xB4n\\x15\\xDF\\x17J?J\n"
//		"\r\\xDC*!'\\x15\\xDC*!'J\n"
//		"\r\\xC8v\\x15Y\\x15\\xDF\\x17J?J\n"
//		"\r\t\\xEBtR\\x15\\xDF\\x17J?J\n"
//		"\r{l\\xC9D\\x15\\xDF\\x17J?J\n"
//		"\r\\xBBu\\xF5W\\x15\\xDF\\x17J?J\n"
//		"\r\\x85(\\x81h\\x15\\x87\\xAC/MJ\n"
//		"\r\\xE9i/\\xB7\\x15\\xDF\\x17J?J\n"
//		"\r\\x0C\\x91G\\xF3\\x15\\xDF\\x17J?J\n"
//		"\r\\xDC\\xDD\\xBBw\\x15\\xDF\\x17J?J\n"
//		"\r\\xBD\\xD3s\\x97\\x15\\x10\\xA1~|J\n"
//		"\r\\xCA\\x1Ds\\x93\\x15\\xDF\\x17J?J\n"
//		"\r\\xE0\\x04\\xA6\\x8F\\x158\\xE1\\xE4\\xACJ\n"
//		"\r\\xC5-;\\x8E\\x15\\x90%p\\x93J\n"
//		"\rw\\x95b\\x1E\\x15\\xDF\\x17J?J\n"
//		"\r\\xF2\\xFB\\xE1=\\x15\\xDF\\x17J?J\n"
//		"\r\\xC2\\xDF\\xCBd\\x15\\xDF\\x17J?J\n"
//		"\r|\\x839Q\\x15\\xDF\\x17J?J\n"
//		"\r\\xD9v\\x81\\x7F\\x15\\xDF\\x17J?J\n"
//		"\r{\\xB7\\x9C\\xF7\\x15\\xF4\\xF4G=J\n"
//		"\r\\xF1\\xD7\\xA8s\\x15\\x08y\\x1A\\x1BJ\n"
//		"\rqz!\\xF7\\x15xq\\x04\\xB2J\n"
//		"\r\\xEB\\x98\\xA8#\\x15t\\xCF\\x93\\xFCJ\n"
//		"\r\\x90\\xDA\\x8B\\x86\\x15\\xDF\\x17J?J\n"
//		"\r\\xA6\\x03\\xA3N\\x15\\xDF\\x17J?J\n"
//		"\r\\x81\"\\xBE\\x12\\x15\\xE5X\\xB1\\xE3J\n"
//		"\r\\xA9b%\\xD9\\x15\\xBA\\x0E\\xDD\\xE1J\n"
//		"\r)b\\xA2\\xF4\\x15\\x7F\\xB3aLJ\n"
//		"\r\\x8AH\\xFC%\\x15\\x87\\xAC/MJ\n"
//		"\rtO\"d\\x15J\\xFA\\x87PJ\n"
//		"\r\\x8C/0V\\x15p.\\x88/J\n"
//		"\r\\xCF\\xA1si\\x15\\xDF\\x17J?J\n"
//		"\rOl`r\\x15\\xDF\\x17J?J\n"
//		"\rB\\xB8\\xEC\\x1A\\x15\\xDF\\x17J?J\n"
//		"\r\\x1C\\xA9\\xC0\\xCA\\x15\\xDF\\x17J?J\n"
//		"\r\\xA3\\xD4\\xCE\\x1B\\x15\\xF8C\\x1B\\xD6J\n"
//		"\rR\\x04n\\xF5\\x15\\xDF\\x17J?J\n"
//		"\r\\xA00\\xEA\\xF3\\x15\\xDF\\x17J?J\n"
//		"\r\\x86\\x00/\\x0B\\x15G>\\x05\\x93J\n"
//		"\r\\xCE7\\xC3K\\x15C\\x18LPJ\n"
//		"\r[N/\\x9A\\x15\\xDF\\x17J?J\n"
//		"\ro\\x91G\\xD7\\x15o\\x91G\\xD7J\n"
//		"\rv|P\\x17\\x15\\xDF\\x17J?J\n"
//		"\r\\xAA\\xD8Dh\\x15\\xE0\\x04\\x9AfJ\n"
//		"\r`\\x87MI\\x15\\xDF\\x17J?J\n"
//		"\r\\x02\\xA3\\xBA4\\x15\\xADnO\\xCFJ\n"
//		"\r\\xA2\\xF3\\xFF\\xF5\\x15\\xA2\\xF3\\xFF\\xF5J\n"
//		"\r\\xB2\\xA7\\x7FX\\x15\\xCE\\x8AmrJ\n"
//		"\r\\x11\\xF8\\xB8\\xBB\\x15\\xDF\\x17J?J\n"
//		"\r$\\x86\\xE6\\x94\\x15\\xC4\\x8F?\\x80J\n"
//		"\r\\xB8\\x1D\\xD9\\x11\\x15 \\x06:\\xD9J\n"
//		"\rB\\x07\\x14q\\x15\\xDF\\x17J?J\n"
//		"\r\\xD7\\xBD\\x0E\\x9F\\x15\\xDF\\x17J?J\n"
//		"\r\\xC1c\\xCE\\xE9\\x15\\xA2\t\\xAB6J\n"
//		"\r\\xB2\\x88\\xF0>\\x15\\xDF\\x17J?J\n"
//		"\r\\xC5\\xC2:I\\x15\\xDF\\x17J?J\n"
//		"\r\\x01\\xAAJ\\xDA\\x15\\xDF\\x17J?J\n"
//		"\r1\\x90U\\x0C\\x15\\xF4\\xF4G=J\n"
//		"\r\\x9E\\xB0X\\xE2\\x15\\xDF\\x17J?P\\x00b\\x04SPTKj\\x0C\\x08\\x01\\x10\\x00\\x18\\x00 \\x008\\x05@\\x06\\x80\\x01\\x90\\xC1\\xEB\\xFB\\x05\\x90\\x01\\x14\\x90\\x01/\\x90\\x01\\xA6\\x01\\x90\\x01\\x9E\\x03\\x90\\x01\\xA0\\x03\\x90\\x01\\xBA\\x04\\x90\\x01\\xBD\\x05\\x90\\x01\\xFC\\x05\\x90\\x01\\x97\\x06\\x90\\x01\\xD9\\x07\\x98\\x01\\x00\\xBA\\x01\\x07\\x15\\x11')\\xD2(\\x01\\xBA\\x01\\x0C\\x15\\x9E\\x0Che%X\\xDF\\xA2\\x84(\\x00\\xC2\\x01\\x0F\\x08\\x0B\\x12\\x069.18.0\\x1D\\xCEAz<\\xC2\\x01\n"
//		"\\x08\\x08\\x12\\x017\\x1D\\xC0^Q\\xFD\\xC2\\x01\r\\x08\n"
//		"\\x12\\x046279\\x1D\\xBC\\x9C\\x05\\xE8\\xC2\\x01\\x0B\\x08\\x02\\x12\\x0243\\x1D\\xD7\\xD2\\xD1\\xFF\\xC2\\x01\\x10\\x08\\x03\\x12\\x070.0.0.0\\x1D\\x00\\x00\\x00\\x00\\xC2\\x01\r\\x08\t\\x12\\x041256\\x1DB|&{\\xCA\\x01\\x1F\\x08\\x04\\x10\\x05\\x18\\x01 \\x00(\\x000\\x008\\x00@\\x00H\\x00P\\x00X\\x00`\\x00h\\x00x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x01\\x10\n"
//		"\\x18\\x02 \\x01(\\x000\\x008\\x01@\\x00H\\x00P\\x00X\\x01`\\x00h\\x01x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x01\\x10\n"
//		"\\x18\\x02 \\x01(\\x000\\x008\\x01@\\x00H\\x00P\\x00X\\x01`\\x00h\\x01x\\x00\\x80\\x01\\x00\\xCA\\x01!\\x08\\x01\\x10\n"
//		"\\x18\\x02 \\x01(\\x000\\x008\\x01@\\x00H\\x00P\\x00X\\x01`\\x00h\\x00p\\x00x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x06\\x10\n"
//		"\\x18\\x02 \\x00(\\x000\\x008\\x01@\\x00H\\x00P\\x00X\\x01`\\x00h\\x02x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x01\\x10\\x05\\x18\\x02 \\x00(\\x000\\x008\\x00@\\x00H\\x00P\\x00X\\x00`\\x00h\\x01x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x01\\x10\\x05\\x18\\x02 \\x00(\\x000\\x008\\x00@\\x00H\\x00P\\x00X\\x00`\\x00h\\x02x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x01\\x10\\x05\\x18\\x02 \\x01(\\x000\\x008\\x00@\\x00H\\x00P\\x00X\\x00`\\x00h\\x01x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x04\\x10\\x05\\x18\\x01 \\x00(\\x000\\x008\\x00@\\x00H\\x00P\\x00X\\x00`\\x00h\\x00x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x01\\x10\\x05\\x18\\x02 \\x00(\\x000\\x008\\x00@\\x00H\\x00P\\x00X\\x00`\\x00h\\x00x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x04\\x10\\x05\\x18\\x01 \\x00(\\x000\\x008\\x00@\\x00H\\x00P\\x00X\\x00`\\x00h\\x00x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x01\\x10\\x05\\x18\\x02 \\x00(\\x000\\x008\\x00@\\x00H\\x00P\\x00X\\x00`\\x00h\\x01x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x01\\x10\\x05\\x18\\x02 "
//		"\\x00(\\x000\\x008\\x00@\\x00H\\x00P\\x00X\\x00`\\x00h\\x02x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x01\\x10\\x05\\x18\\x02 \\x01(\\x000\\x008\\x00@\\x00H\\x00P\\x00X\\x00`\\x00h\\x01x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x04\\x10\\x05\\x18\\x01 \\x00(\\x000\\x008\\x00@\\x00H\\x00P\\x00X\\x00`\\x00h\\x00x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x01\\x10\\x05\\x18\\x02 \\x00(\\x000\\x008\\x00@\\x00H\\x00P\\x00X\\x00`\\x00h\\x00x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x04\\x10\\x05\\x18\\x01 \\x00(\\x000\\x008\\x00@\\x00H\\x00P\\x00X\\x00`\\x00h\\x00x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x01\\x10\\x05\\x18\\x02 \\x00(\\x000\\x008\\x00@\\x00H\\x00P\\x00X\\x00`\\x00h\\x01x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x01\\x10\\x05\\x18\\x02 \\x00(\\x000\\x008\\x00@\\x00H\\x00P\\x00X\\x00`\\x00h\\x02x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x01\\x10\\x05\\x18\\x02 \\x01(\\x000\\x008\\x00@\\x00H\\x00P\\x00X\\x00`\\x00h\\x01x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x04\\x10\\x05\\x18\\x01 \\x00(\\x000"
//		"\\x008\\x00@\\x00H\\x00P\\x00X\\x00`\\x00h\\x00x\\x00\\x80\\x01\\x00\\xCA\\x01\\x1F\\x08\\x01\\x10\\x05\\x18\\x02 \\x00(\\x000\\x008\\x00@\\x00H\\x00P\\x00X\\x00`\\x00h\\x00x\\x00\\x80\\x01\\x00\"\\x10\tk\\xF6\\x91\\x07\\x11d\\xC1\\x99\\x10\\x89\\xDC\\xBB\\x8E\\xE3.\"\\x10\t\\xDF\\xBE\\x11\\x7F\\xEB{/\\xB5\\x10\\xC0\\xDC\\xBB\\x8E\\xE3.\"\\x10\tk\\xF6\\x91\\x07\\x11d\\xC1\\x99\\x10\\xA9\\xE1\\xBB\\x8E\\xE3.\"\\x10\t\\x15\\x93[i\\x01#r\\xAC\\x10\\xC7\\xE1\\xBB\\x8E\\xE3.\"\\x10\t\\xDF\\xBE\\x11\\x7F\\xEB{/\\xB5\\x10\\xCA\\xE1\\xBB\\x8E\\xE3.\"\\x10\t\\xE1:\\xEB\\x1D%+\\xDDZ\\x10\\xCF\\xE1\\xBB\\x8E\\xE3.\"\\x10\t\\x8F\\xDA\\x03 \\x1Ca{Z\\x10\\xCF\\xE1\\xBB\\x8E\\xE3.\"\\x10\t\\x14m3\\xADs\\xA5\\xB0\\x08\\x10\\xE0\\xE1\\xBB\\x8E\\xE3.P\\x00\\x92\\x01$F321ACBF-8699-4C0D-9720-ED1F8C58E840\\x9A\\x01d\n"
//		"\\x08branding\\x12#\n"
//		"\tCompanyID\\x12\\x16sputnik-lab-b2c-common\\x12\\x17\n"
//		"\tSegmentID\\x12\n"
//		"b2c-common\\x12\\x1A\n"
//		"\ttimestamp\\x12\r1607150798339\\xA2\\x01\\x00",
//		LAST); 
//	*/
//
///* Added by Async CodeGen.
//ID = Poll_2
// */
//	web_stop_async("ID=Poll_2", 
//		LAST);
//
//	web_add_auto_header("Origin", 
//		"http://172.20.101.50");
//
///* Removed by Async CodeGen.
//ID = Poll_1
// */
//	/*
// web_custom_request("status_3",
//		"URL=http://172.20.101.50/ruip-fsi/print-document/status",
//		"Method=POST",
//		"Resource=0",
//		"RecContentType=application/json",
//		"Referer=http://172.20.101.50/fsi/setting-up-elector-list?eventId=8&uikId=9197",
//		"Snapshot=t111.inf",
//		"Mode=HTML",
//		"EncType=application/json",
//		"Body=[{\"electionCompanyNameId\":8,\"kca\":\"62T013\",\"printType\":\"{\\\"additionalForm\\\":false,\\\"electionCompanyNameId\\\":8,\\\"electorsCounts\\\":[1120],\\\"emptyFormAmount\\\":0,\\\"globalSettingsName\\\":\\\"TEMPLATE_VOTER_LIST_FORM\\\",\\\"kca\\\":\\\"62T013\\\",\\\"numerationMode\\\":\\\"THROUGH\\\",\\\"pointId\\\":\\\"93\\\",\\\"printType\\\":\\\"\\\",\\\"registerMode\\\":\\\"WITH_CAPITAL\\\",\\\"tempalteId\\\":38,\\\"templateIndividualForm\\\":false,\\\"templateVoterListForm\\\":true,\\\"userId\\\":\\\"749bc037-9184-4562-b75e-6405edde3d22\\\"}\",\"subjectGlobalId\":\"9197\",\"templateId\":38,\"userId\":\"749bc037-9184-4562-b75e-6405edde3d22\"}]",
//		LAST); 
//	*/
//
///* Removed by Async CodeGen.
//ID = Poll_1
// */
//	/*
// web_custom_request("status_4",
//		"URL=http://172.20.101.50/ruip-fsi/print-document/status",
//		"Method=POST",
//		"Resource=0",
//		"RecContentType=application/json",
//		"Referer=http://172.20.101.50/fsi/setting-up-elector-list?eventId=8&uikId=9197",
//		"Snapshot=t112.inf",
//		"Mode=HTML",
//		"EncType=application/json",
//		"Body=[{\"electionCompanyNameId\":8,\"kca\":\"62T013\",\"printType\":\"{\\\"additionalForm\\\":false,\\\"electionCompanyNameId\\\":8,\\\"electorsCounts\\\":[1120],\\\"emptyFormAmount\\\":0,\\\"globalSettingsName\\\":\\\"TEMPLATE_VOTER_LIST_FORM\\\",\\\"kca\\\":\\\"62T013\\\",\\\"numerationMode\\\":\\\"THROUGH\\\",\\\"pointId\\\":\\\"93\\\",\\\"printType\\\":\\\"\\\",\\\"registerMode\\\":\\\"WITH_CAPITAL\\\",\\\"tempalteId\\\":38,\\\"templateIndividualForm\\\":false,\\\"templateVoterListForm\\\":true,\\\"userId\\\":\\\"749bc037-9184-4562-b75e-6405edde3d22\\\"}\",\"subjectGlobalId\":\"9197\",\"templateId\":38,\"userId\":\"749bc037-9184-4562-b75e-6405edde3d22\"}]",
//		LAST); 
//	*/
//
///* Removed by Async CodeGen.
//ID = Poll_1
// */
//	/*
// web_custom_request("status_5",
//		"URL=http://172.20.101.50/ruip-fsi/print-document/status",
//		"Method=POST",
//		"Resource=0",
//		"RecContentType=application/json",
//		"Referer=http://172.20.101.50/fsi/setting-up-elector-list?eventId=8&uikId=9197",
//		"Snapshot=t113.inf",
//		"Mode=HTML",
//		"EncType=application/json",
//		"Body=[{\"electionCompanyNameId\":8,\"kca\":\"62T013\",\"printType\":\"{\\\"additionalForm\\\":false,\\\"electionCompanyNameId\\\":8,\\\"electorsCounts\\\":[1120],\\\"emptyFormAmount\\\":0,\\\"globalSettingsName\\\":\\\"TEMPLATE_VOTER_LIST_FORM\\\",\\\"kca\\\":\\\"62T013\\\",\\\"numerationMode\\\":\\\"THROUGH\\\",\\\"pointId\\\":\\\"93\\\",\\\"printType\\\":\\\"\\\",\\\"registerMode\\\":\\\"WITH_CAPITAL\\\",\\\"tempalteId\\\":38,\\\"templateIndividualForm\\\":false,\\\"templateVoterListForm\\\":true,\\\"userId\\\":\\\"749bc037-9184-4562-b75e-6405edde3d22\\\"}\",\"subjectGlobalId\":\"9197\",\"templateId\":38,\"userId\":\"749bc037-9184-4562-b75e-6405edde3d22\"}]",
//		LAST); 
//	*/
//
///* Removed by Async CodeGen.
//ID = Poll_1
// */
//	/*
// web_custom_request("status_6",
//		"URL=http://172.20.101.50/ruip-fsi/print-document/status",
//		"Method=POST",
//		"Resource=0",
//		"RecContentType=application/json",
//		"Referer=http://172.20.101.50/fsi/setting-up-elector-list?eventId=8&uikId=9197",
//		"Snapshot=t114.inf",
//		"Mode=HTML",
//		"EncType=application/json",
//		"Body=[{\"electionCompanyNameId\":8,\"kca\":\"62T013\",\"printType\":\"{\\\"additionalForm\\\":false,\\\"electionCompanyNameId\\\":8,\\\"electorsCounts\\\":[1120],\\\"emptyFormAmount\\\":0,\\\"globalSettingsName\\\":\\\"TEMPLATE_VOTER_LIST_FORM\\\",\\\"kca\\\":\\\"62T013\\\",\\\"numerationMode\\\":\\\"THROUGH\\\",\\\"pointId\\\":\\\"93\\\",\\\"printType\\\":\\\"\\\",\\\"registerMode\\\":\\\"WITH_CAPITAL\\\",\\\"tempalteId\\\":38,\\\"templateIndividualForm\\\":false,\\\"templateVoterListForm\\\":true,\\\"userId\\\":\\\"749bc037-9184-4562-b75e-6405edde3d22\\\"}\",\"subjectGlobalId\":\"9197\",\"templateId\":38,\"userId\":\"749bc037-9184-4562-b75e-6405edde3d22\"}]",
//		LAST); 
//	*/
//
///* Removed by Async CodeGen.
//ID = Poll_1
// */
//	/*
// web_custom_request("status_7",
//		"URL=http://172.20.101.50/ruip-fsi/print-document/status",
//		"Method=POST",
//		"Resource=0",
//		"RecContentType=application/json",
//		"Referer=http://172.20.101.50/fsi/setting-up-elector-list?eventId=8&uikId=9197",
//		"Snapshot=t115.inf",
//		"Mode=HTML",
//		"EncType=application/json",
//		"Body=[{\"electionCompanyNameId\":8,\"kca\":\"62T013\",\"printType\":\"{\\\"additionalForm\\\":false,\\\"electionCompanyNameId\\\":8,\\\"electorsCounts\\\":[1120],\\\"emptyFormAmount\\\":0,\\\"globalSettingsName\\\":\\\"TEMPLATE_VOTER_LIST_FORM\\\",\\\"kca\\\":\\\"62T013\\\",\\\"numerationMode\\\":\\\"THROUGH\\\",\\\"pointId\\\":\\\"93\\\",\\\"printType\\\":\\\"\\\",\\\"registerMode\\\":\\\"WITH_CAPITAL\\\",\\\"tempalteId\\\":38,\\\"templateIndividualForm\\\":false,\\\"templateVoterListForm\\\":true,\\\"userId\\\":\\\"749bc037-9184-4562-b75e-6405edde3d22\\\"}\",\"subjectGlobalId\":\"9197\",\"templateId\":38,\"userId\":\"749bc037-9184-4562-b75e-6405edde3d22\"}]",
//		LAST); 
//	*/
//
///* Removed by Async CodeGen.
//ID = Poll_1
// */
//	/*
// web_custom_request("status_8",
//		"URL=http://172.20.101.50/ruip-fsi/print-document/status",
//		"Method=POST",
//		"Resource=0",
//		"RecContentType=application/json",
//		"Referer=http://172.20.101.50/fsi/setting-up-elector-list?eventId=8&uikId=9197",
//		"Snapshot=t116.inf",
//		"Mode=HTML",
//		"EncType=application/json",
//		"Body=[{\"electionCompanyNameId\":8,\"kca\":\"62T013\",\"printType\":\"{\\\"additionalForm\\\":false,\\\"electionCompanyNameId\\\":8,\\\"electorsCounts\\\":[1120],\\\"emptyFormAmount\\\":0,\\\"globalSettingsName\\\":\\\"TEMPLATE_VOTER_LIST_FORM\\\",\\\"kca\\\":\\\"62T013\\\",\\\"numerationMode\\\":\\\"THROUGH\\\",\\\"pointId\\\":\\\"93\\\",\\\"printType\\\":\\\"\\\",\\\"registerMode\\\":\\\"WITH_CAPITAL\\\",\\\"tempalteId\\\":38,\\\"templateIndividualForm\\\":false,\\\"templateVoterListForm\\\":true,\\\"userId\\\":\\\"749bc037-9184-4562-b75e-6405edde3d22\\\"}\",\"subjectGlobalId\":\"9197\",\"templateId\":38,\"userId\":\"749bc037-9184-4562-b75e-6405edde3d22\"}]",
//		LAST); 
//	*/
//
///* Removed by Async CodeGen.
//ID = Poll_1
// */
//	/*
// web_custom_request("status_9",
//		"URL=http://172.20.101.50/ruip-fsi/print-document/status",
//		"Method=POST",
//		"Resource=0",
//		"RecContentType=application/json",
//		"Referer=http://172.20.101.50/fsi/setting-up-elector-list?eventId=8&uikId=9197",
//		"Snapshot=t117.inf",
//		"Mode=HTML",
//		"EncType=application/json",
//		"Body=[{\"electionCompanyNameId\":8,\"kca\":\"62T013\",\"printType\":\"{\\\"additionalForm\\\":false,\\\"electionCompanyNameId\\\":8,\\\"electorsCounts\\\":[1120],\\\"emptyFormAmount\\\":0,\\\"globalSettingsName\\\":\\\"TEMPLATE_VOTER_LIST_FORM\\\",\\\"kca\\\":\\\"62T013\\\",\\\"numerationMode\\\":\\\"THROUGH\\\",\\\"pointId\\\":\\\"93\\\",\\\"printType\\\":\\\"\\\",\\\"registerMode\\\":\\\"WITH_CAPITAL\\\",\\\"tempalteId\\\":38,\\\"templateIndividualForm\\\":false,\\\"templateVoterListForm\\\":true,\\\"userId\\\":\\\"749bc037-9184-4562-b75e-6405edde3d22\\\"}\",\"subjectGlobalId\":\"9197\",\"templateId\":38,\"userId\":\"749bc037-9184-4562-b75e-6405edde3d22\"}]",
//		LAST); 
//	*/
//
///* Removed by Async CodeGen.
//ID = Poll_1
// */
//	/*
// web_custom_request("status_10",
//		"URL=http://172.20.101.50/ruip-fsi/print-document/status",
//		"Method=POST",
//		"Resource=0",
//		"RecContentType=application/json",
//		"Referer=http://172.20.101.50/fsi/setting-up-elector-list?eventId=8&uikId=9197",
//		"Snapshot=t118.inf",
//		"Mode=HTML",
//		"EncType=application/json",
//		"Body=[{\"electionCompanyNameId\":8,\"kca\":\"62T013\",\"printType\":\"{\\\"additionalForm\\\":false,\\\"electionCompanyNameId\\\":8,\\\"electorsCounts\\\":[1120],\\\"emptyFormAmount\\\":0,\\\"globalSettingsName\\\":\\\"TEMPLATE_VOTER_LIST_FORM\\\",\\\"kca\\\":\\\"62T013\\\",\\\"numerationMode\\\":\\\"THROUGH\\\",\\\"pointId\\\":\\\"93\\\",\\\"printType\\\":\\\"\\\",\\\"registerMode\\\":\\\"WITH_CAPITAL\\\",\\\"tempalteId\\\":38,\\\"templateIndividualForm\\\":false,\\\"templateVoterListForm\\\":true,\\\"userId\\\":\\\"749bc037-9184-4562-b75e-6405edde3d22\\\"}\",\"subjectGlobalId\":\"9197\",\"templateId\":38,\"userId\":\"749bc037-9184-4562-b75e-6405edde3d22\"}]",
//		LAST); 
//	*/
//
///* Added by Async CodeGen.
//ID = Poll_1
// */
//	web_stop_async("ID=Poll_1", 
//		LAST);
//
//	web_custom_request("document", 
//		"URL=http://172.20.101.50/ruip-fsi/print-document/document?ids=35", 
//		"Method=POST", 
//		"Resource=0", 
//		"RecContentType=application/octet-stream", 
//		"Referer=http://172.20.101.50/fsi/setting-up-elector-list?eventId=8&uikId=9197", 
//		"Snapshot=t119.inf", 
//		"Mode=HTML", 
//		"EncType=application/json", 
//		LAST);

	return 0;
}