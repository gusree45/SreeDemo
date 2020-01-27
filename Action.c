Action()
{

	web_url("blazedemo.com", 
		"URL=http://blazedemo.com/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/favicon.ico", "Referer=", ENDITEM, 
		LAST);

	web_set_sockets_option("SSL_VERSION", "AUTO");

	lr_think_time(13);

	lr_start_transaction("blazedemo_cityselect_choosecity11");

	web_submit_form("reserve.php", 
		"Snapshot=t2.inf", 
		ITEMDATA, 
		"Name=fromPort", "Value={fromport}", ENDITEM, 
		"Name=toPort", "Value={toport}", ENDITEM, 
		EXTRARES, 
		"Url=/img/glyphicons-halflings.png", ENDITEM, 
		"Url=/favicon.ico", "Referer=", ENDITEM, 
		LAST);

	lr_end_transaction("blazedemo_cityselect_choosecity11",LR_AUTO);

	lr_think_time(67);
	
	lr_start_transaction("blazedemo_cityselect_secity12");

	web_submit_form("purchase.php", 
		"Ordinal=1", 
		"Snapshot=t3.inf", 
		ITEMDATA, 
		LAST);
	lr_end_transaction("blazedemo_cityselect_city12",LR_AUTO);

	return 0;
}