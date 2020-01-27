Payment()
{

	web_url("blazedemo.com_2", 
		"URL=http://blazedemo.com/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t4.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/favicon.ico", "Referer=", ENDITEM, 
		LAST);

	lr_think_time(4);

	web_submit_form("reserve.php_2", 
		"Snapshot=t5.inf", 
		ITEMDATA, 
		"Name=fromPort", "Value=Mexico City", ENDITEM, 
		"Name=toPort", "Value=Cairo", ENDITEM, 
		EXTRARES, 
		"Url=/favicon.ico", "Referer=", ENDITEM, 
		"Url=/img/glyphicons-halflings.png", ENDITEM, 
		LAST);

	lr_think_time(38);

	lr_start_transaction("Blazedemo_Chooseflight_001");

	web_submit_form("purchase.php_2", 
		"Ordinal=1", 
		"Snapshot=t6.inf", 
		ITEMDATA, 
		LAST);

	lr_end_transaction("Blazedemo_Chooseflight_001",LR_AUTO);

	lr_think_time(36);

	lr_start_transaction("Blazedemo_purchase_001");

	web_submit_form("confirmation.php", 
		"Snapshot=t7.inf", 
		ITEMDATA, 
		"Name=inputName", "Value=demo1", ENDITEM, 
		"Name=address", "Value=demo2", ENDITEM, 
		"Name=city", "Value=", ENDITEM, 
		"Name=state", "Value=", ENDITEM, 
		"Name=zipCode", "Value=", ENDITEM, 
		"Name=cardType", "Value=Visa", ENDITEM, 
		"Name=creditCardNumber", "Value=", ENDITEM, 
		"Name=creditCardMonth", "Value=11", ENDITEM, 
		"Name=creditCardYear", "Value=2017", ENDITEM, 
		"Name=nameOnCard", "Value=", ENDITEM, 
		"Name=rememberMe", "Value=<OFF>", ENDITEM, 
		LAST);

	lr_end_transaction("Blazedemo_purchase_001",LR_AUTO);

	return 0;
}