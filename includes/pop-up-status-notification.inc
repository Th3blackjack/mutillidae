<?php 
	switch ($_GET["popUpNotificationCode"]){
		case "HPH0": $lhintsPopUpNotificationMessage = "Feeling Lost? Toggle hints to activate dynamic help system.";break;
		case "L1H0": $lhintsPopUpNotificationMessage = "Hints Disabled";break;
		case "L1H1": $lhintsPopUpNotificationMessage = "Level 1 hints enabled. Toggle hints again to enable level 2 hints.";break;
		case "L1H2": $lhintsPopUpNotificationMessage = "Level 1 and 2 Hints Enabled. Toggle hints again to disable.";break;
		case "SUD0": $lhintsPopUpNotificationMessage = "Dropping and rebuilding database";break;
		case "SUD1": $lhintsPopUpNotificationMessage = "Database has been rebuilt";break;
		case "AU1": $lhintsPopUpNotificationMessage = "User Authenticated";break;
		case "LOU1": $lhintsPopUpNotificationMessage = "User Logged Out";break;
		case "SSLE1": $lhintsPopUpNotificationMessage = "SSL Enforced";break;
		case "SSLO1": $lhintsPopUpNotificationMessage = "SSL Optional";break;
		case "SL0": $lhintsPopUpNotificationMessage = "Security level set to 0. Hack Away.";break;
		case "SL1": $lhintsPopUpNotificationMessage = "Security level set to 1. Try Slightly Harder.";break;
		case "SL5": $lhintsPopUpNotificationMessage = "Security level set to 5. Good Luck.";break;
		case "BHD1": $lhintsPopUpNotificationMessage = "Bubble Hints Disabled";break;
		case "BHE1": $lhintsPopUpNotificationMessage = "Bubble Hints Enabled";break;
		case "LFD1": $lhintsPopUpNotificationMessage = "Logs Deleted";break;
		case "LFR1": $lhintsPopUpNotificationMessage = "Logs Refreshed";break;
	}// end switch
?>

<link rel="stylesheet" type="text/css" href="styles/gritter/jquery.gritter.css" />
<script type="text/javascript" src="javascript/gritter/jquery.gritter.min.js"></script>
<script>
$.gritter.add({
    // (string | mandatory) the heading of the notification
    title: 'Status Update',
    // (string | mandatory) the text inside the notification
    text: '<?php echo $lhintsPopUpNotificationMessage ?>',
    // time until fade begins
    time: 5000
});
</script>