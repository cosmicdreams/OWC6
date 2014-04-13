<?php ini_set( "display_errors", 1); ?>
<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">
<html xmlns="http://www.w3.org/1999/xhtml" dir="ltr"><!-- InstanceBegin template="/Templates/secureTemplate.dwt" codeOutsideHTMLIsLocked="false" -->
<head>
<!-- InstanceBeginEditable name="doctitle" -->
<title>Donate to Home for Life</title>
<!-- auth net
v0.89.22
-->
<!-- InstanceEndEditable -->
<meta http-equiv="Content-Type" content="text/html; charset=ISO-8859-1">
<!-- InstanceBeginEditable name="stylesheets" -->
<link href="https://secure18.visi.com/homeforlife.org/formstyles.css" rel="stylesheet" type="text/css">
<link href="https://secure18.visi.com/homeforlife.org/popup.css" rel="stylesheet" type="text/css">
<link href='http://fonts.googleapis.com/css?family=Oswald' rel='stylesheet' type='text/css'>
<link href='http://fonts.googleapis.com/css?family=Merriweather' rel='stylesheet' type='text/css'>
<style type="text/css" media="screen">

  #header {
    margin: 0 auto;
    width: 100%;
    background: white;
  }
  #topnav {
    width: 1024px;
    padding: 0;
  margin: 0 auto;
    padding-top: 50px;
  }



  #topnav > ul {
    margin: 0 auto;
    height: 45px;
    background: #34495e;
    line-height: 45px;
    position: absolute;
    top: 85px;
    width: 100%;
  }
  .logo {
    width: 200px;

  }

  .logo svg {
    height: 100%;
    width: 100%;
  }
  #container {
    margin: 0 auto;
    border-top: none;
    width: 1024px;
    padding: 85px 0 0;
  }

  h1, h2, h3, h4, h5, h6, h7 {
    font-family: 'Oswald', Helvetica, sans-serif;
    color: #3498DB;
  }

  .hdg_7 {
  }



  #photoChosen { border: solid 2px #5577aa; background:#ddd; width: 80px; height: 50px;  }
@import url(../scripts/menu2.css);
.formhead {
	font-family: Georgia, "Times New Roman", Times, serif;
	font-size: 14px;
	font-weight: bold;
	background-color: #DdEeFf;
	padding: 3px;
	color: #5577Aa;
}

#gifth { background: url(images/gift_05.png) no-repeat 0 0; padding: 30px 15px 15px 75px; font-family: Georgia, "Times New Roman", Times, serif; font-size: 14px;font-weight: bold;	background-color: #DdEeFf;	color: #5577Aa; }
#tributeh { background: url(images/tribute.png) no-repeat 0 0; padding: 30px 15px 15px 75px; }
#content td { padding: 3px; }

/********************************* LiveValidation *************************************/

.LV_valid {
    color:#00CC00; font-size: 10px;
}

.LV_invalid {
	color:#CC0000; font-size: 10px;
}

.LV_validation_message{
    font-weight:bold;
    margin:0 0 0 5px;
}

.LV_valid_field,
input.LV_valid_field:hover,
input.LV_valid_field:active,
textarea.LV_valid_field:hover,
textarea.LV_valid_field:active,
.fieldWithErrors input.LV_valid_field,
.fieldWithErrors textarea.LV_valid_field {
    border: 1px solid #00CC00;
}

.LV_invalid_field,
input.LV_invalid_field:hover,
input.LV_invalid_field:active,
textarea.LV_invalid_field:hover,
textarea.LV_invalid_field:active,
.fieldWithErrors input.LV_invalid_field,
.fieldWithErrors textarea.LV_invalid_field {
    border: 1px solid #CC0000;
}


</style>
<!-- InstanceEndEditable -->
<!-- InstanceBeginEditable name="head" -->
<style type="text/css">
<!--
.required {
	color: #Cc0000;
}
-->
body { font-family: 'Merriweather', serif;}
#content { width: 650px; margin: 0 auto; float: left;}

.dfaq { width: 310px; float: right;}

.dfaq p { font-family: 'Merriweather' !important; color: black !important;}

#content ul.cards { margin: 0; padding: 0; list-style:none; }
#content ul.cards li { float: left; margin: 3px;  border: solid 2px #5577aa; height: 70px; overflow: hidden; padding: 0; background:#5577aa; }
#content ul.cards li a { font-size: 10px; cursor:pointer; font-family: Arial; text-decoration: none; color:white; font-weight: bold; text-align: center; display: block; }
#content ul.cards li:hover { border-color: #ddd; }
#content td p,
#content td div {
  font-family: 'Merriweather', serif;
  margin: 0 15px 0 0;
  padding: 0;
}

#content td {
  height: 50px;
}

#content tr {
  padding-bottom: 20px;
}

#content td input[type="text"] {
  margin-bottom: 0;
}

#content td {
  padding: 0;
  margin: 0;
}

#amount {
  display: inline;
}

#tooltip{
	position:absolute;
	border:1px solid #333;
	background:#f7f5d1;
	padding:2px 5px;
	color:#333;
	display:none;
	}

/* Standard Forms */
form {
  margin: 0 0 1rem;
}

/* Using forms within rows, we need to set some defaults */
form .row .row {
  margin: 0 -0.5rem;
}
form .row .row .column,
form .row .row .columns {
  padding: 0 0.5rem;
}
form .row .row.collapse {
  margin: 0;
}
form .row .row.collapse .column,
form .row .row.collapse .columns {
  padding: 0;
}
form .row .row.collapse input {
  border-bottom-right-radius: 0;
  border-top-right-radius: 0;
}
form .row input.column,
form .row input.columns,
form .row textarea.column,
form .row textarea.columns {
  padding-left: 0.5rem;
}

/* Label Styles */
label {
  font-size: 0.875rem;
  color: #4d4d4d;
  cursor: pointer;
  display: block;
  font-weight: normal;
  line-height: 1.5;
  margin-bottom: 0;
  /* Styles for required inputs */
}
label.right {
  float: none;
  text-align: right;
}
label.inline {
  margin: 0 0 1rem 0;
  padding: 0.5625rem 0;
}
label small {
  text-transform: capitalize;
  color: #676767;
}

select::-ms-expand {
  display: none;
}

@-moz-document url-prefix() {
  select {
    background: #fafafa;
  }

  select:hover {
    background: #f3f3f3;
  }
}

/* Attach elements to the beginning or end of an input */
.prefix,
.postfix {
  display: block;
  position: relative;
  z-index: 2;
  text-align: center;
  width: 100%;
  padding-top: 0;
  padding-bottom: 0;
  border-style: solid;
  border-width: 1px;
  overflow: hidden;
  font-size: 0.875rem;
  height: 2.3125rem;
  line-height: 2.3125rem;
}

/* Adjust padding, alignment and radius if pre/post element is a button */
.postfix.button {
  padding-left: 0;
  padding-right: 0;
  padding-top: 0;
  padding-bottom: 0;
  text-align: center;
  line-height: 2.125rem;
  border: none;
}

.prefix.button {
  padding-left: 0;
  padding-right: 0;
  padding-top: 0;
  padding-bottom: 0;
  text-align: center;
  line-height: 2.125rem;
  border: none;
}

.prefix.button.radius {
  border-radius: 0;
  border-bottom-left-radius: 3px;
  border-top-left-radius: 3px;
}

.postfix.button.radius {
  border-radius: 0;
  border-bottom-right-radius: 3px;
  border-top-right-radius: 3px;
}

.prefix.button.round {
  border-radius: 0;
  border-bottom-left-radius: 1000px;
  border-top-left-radius: 1000px;
}

.postfix.button.round {
  border-radius: 0;
  border-bottom-right-radius: 1000px;
  border-top-right-radius: 1000px;
}

/* Separate prefix and postfix styles when on span or label so buttons keep their own */
span.prefix, label.prefix {
  background: #f2f2f2;
  border-right: none;
  color: #333333;
  border-color: #cccccc;
}
span.prefix.radius, label.prefix.radius {
  border-radius: 0;
  border-bottom-left-radius: 3px;
  border-top-left-radius: 3px;
}

span.postfix, label.postfix {
  background: #f2f2f2;
  border-left: none;
  color: #333333;
  border-color: #cccccc;
}
span.postfix.radius, label.postfix.radius {
  border-radius: 0;
  border-bottom-right-radius: 3px;
  border-top-right-radius: 3px;
}

/* We use this to get basic styling on all basic form elements */
input[type="text"],
input[type="password"],
input[type="date"],
input[type="datetime"],
input[type="datetime-local"],
input[type="month"],
input[type="week"],
input[type="email"],
input[type="number"],
input[type="search"],
input[type="tel"],
input[type="time"],
input[type="url"],
textarea {
  -webkit-appearance: none;
  background-color: white;
  font-family: inherit;
  border: 1px solid #cccccc;
  -webkit-box-shadow: inset 0 1px 2px rgba(0, 0, 0, 0.1);
  box-shadow: inset 0 1px 2px rgba(0, 0, 0, 0.1);
  color: rgba(0, 0, 0, 0.75);
  display: block;
  font-size: 0.875rem;
  margin: 0 0 1rem 0;
  padding: 0.5rem;
  height: 2.3125rem;
  -webkit-box-sizing: border-box;
  -moz-box-sizing: border-box;
  box-sizing: border-box;
  -webkit-transition: -webkit-box-shadow 0.45s, border-color 0.45s ease-in-out;
  transition: box-shadow 0.45s, border-color 0.45s ease-in-out;
}
input[type="text"]:focus,
input[type="password"]:focus,
input[type="date"]:focus,
input[type="datetime"]:focus,
input[type="datetime-local"]:focus,
input[type="month"]:focus,
input[type="week"]:focus,
input[type="email"]:focus,
input[type="number"]:focus,
input[type="search"]:focus,
input[type="tel"]:focus,
input[type="time"]:focus,
input[type="url"]:focus,
textarea:focus {
  -webkit-box-shadow: 0 0 5px #999999;
  box-shadow: 0 0 5px #999999;
  border-color: #999999;
}
input[type="text"]:focus,
input[type="password"]:focus,
input[type="date"]:focus,
input[type="datetime"]:focus,
input[type="datetime-local"]:focus,
input[type="month"]:focus,
input[type="week"]:focus,
input[type="email"]:focus,
input[type="number"]:focus,
input[type="search"]:focus,
input[type="tel"]:focus,
input[type="time"]:focus,
input[type="url"]:focus,
textarea:focus {
  background: #fafafa;
  border-color: #999999;
  outline: none;
}
input[type="text"][disabled], fieldset[disabled] input[type="text"],
input[type="password"][disabled], fieldset[disabled]
input[type="password"],
input[type="date"][disabled], fieldset[disabled]
input[type="date"],
input[type="datetime"][disabled], fieldset[disabled]
input[type="datetime"],
input[type="datetime-local"][disabled], fieldset[disabled]
input[type="datetime-local"],
input[type="month"][disabled], fieldset[disabled]
input[type="month"],
input[type="week"][disabled], fieldset[disabled]
input[type="week"],
input[type="email"][disabled], fieldset[disabled]
input[type="email"],
input[type="number"][disabled], fieldset[disabled]
input[type="number"],
input[type="search"][disabled], fieldset[disabled]
input[type="search"],
input[type="tel"][disabled], fieldset[disabled]
input[type="tel"],
input[type="time"][disabled], fieldset[disabled]
input[type="time"],
input[type="url"][disabled], fieldset[disabled]
input[type="url"],
textarea[disabled], fieldset[disabled]
textarea {
  background-color: #dddddd;
}
input[type="text"].radius,
input[type="password"].radius,
input[type="date"].radius,
input[type="datetime"].radius,
input[type="datetime-local"].radius,
input[type="month"].radius,
input[type="week"].radius,
input[type="email"].radius,
input[type="number"].radius,
input[type="search"].radius,
input[type="tel"].radius,
input[type="time"].radius,
input[type="url"].radius,
textarea.radius {
  border-radius: 3px;
}

input[type="submit"] {
  -webkit-appearance: none;
}

/* Respect enforced amount of rows for textarea */
textarea[rows] {
  height: auto;
}

/* Add height value for select elements to match text input height */
select {
  -webkit-appearance: none !important;
  background-color: #fafafa;
  background-image: url("data:image/svg+xml;base64, PHN2ZyB4bWxucz0iaHR0cDovL3d3dy53My5vcmcvMjAwMC9zdmciIHZlcnNpb249IjEuMSIgeD0iMHB4IiB5PSIwcHgiIHdpZHRoPSI2cHgiIGhlaWdodD0iM3B4IiB2aWV3Qm94PSIwIDAgNiAzIiBlbmFibGUtYmFja2dyb3VuZD0ibmV3IDAgMCA2IDMiIHhtbDpzcGFjZT0icHJlc2VydmUiPjxwb2x5Z29uIHBvaW50cz0iNS45OTIsMCAyLjk5MiwzIC0wLjAwOCwwICIvPjwvc3ZnPg==");
  background-repeat: no-repeat;
  background-position: 97% center;
  border: 1px solid #cccccc;
  padding: 0.5rem;
  font-size: 0.875rem;
  color: rgba(0, 0, 0, 0.75);
  line-height: normal;
  border-radius: 0;
  height: 2.3125rem;
}
select.radius {
  border-radius: 3px;
}
select:hover {
  background-color: #f3f3f3;
  border-color: #999999;
}

/* Adjust margin for form elements below */
input[type="file"],
input[type="checkbox"],
input[type="radio"],
select {
  margin: 0 0 1rem 0;
}

input[type="checkbox"] + label,
input[type="radio"] + label {
  display: inline-block;
  margin-left: 0.5rem;
  margin-right: 1rem;
  margin-bottom: 0;
  vertical-align: baseline;
}

/* Normalize file input width */
input[type="file"] {
  width: 100%;
}

/* We add basic fieldset styling */
fieldset {
  border: 1px solid #dddddd;
  padding: 1.25rem;
  margin: 1.125rem 0;
}
fieldset legend {
  font-weight: bold;
  background: white;
  padding: 0 0.1875rem;
  margin: 0;
  margin-left: -0.1875rem;
}

/* Error Handling */
[data-abide] .error small.error, [data-abide] span.error, [data-abide] small.error {
  display: block;
  padding: 0.375rem 0.5625rem 0.5625rem;
  margin-top: -1px;
  margin-bottom: 1rem;
  font-size: 0.75rem;
  font-weight: normal;
  font-style: italic;
  background: #f04124;
  color: white;
}
[data-abide] span.error, [data-abide] small.error {
  display: none;
}

span.error, small.error {
  display: block;
  padding: 0.375rem 0.5625rem 0.5625rem;
  margin-top: -1px;
  margin-bottom: 1rem;
  font-size: 0.75rem;
  font-weight: normal;
  font-style: italic;
  background: #f04124;
  color: white;
}

.error input,
.error textarea,
.error select {
  margin-bottom: 0;
}
.error input[type="checkbox"],
.error input[type="radio"] {
  margin-bottom: 1rem;
}
.error label,
.error label.error {
  color: #f04124;
}
.error small.error {
  display: block;
  padding: 0.375rem 0.5625rem 0.5625rem;
  margin-top: -1px;
  margin-bottom: 1rem;
  font-size: 0.75rem;
  font-weight: normal;
  font-style: italic;
  background: #f04124;
  color: white;
}
.error > label > small {
  color: #676767;
  background: transparent;
  padding: 0;
  text-transform: capitalize;
  font-style: normal;
  font-size: 60%;
  margin: 0;
  display: inline;
}
.error span.error-message {
  display: block;
}

input.error,
textarea.error {
  margin-bottom: 0;
}

label.error {
  color: #f04124;
}
</style>

<!-- InstanceEndEditable -->
<script language="JavaScript" type="text/JavaScript">
<!--
function MM_reloadPage(init) {  //reloads the window if Nav4 resized
  if (init==true) with (navigator) {if ((appName=="Netscape")&&(parseInt(appVersion)==4)) {
    document.MM_pgW=innerWidth; document.MM_pgH=innerHeight; onresize=MM_reloadPage; }}
  else if (innerWidth!=document.MM_pgW || innerHeight!=document.MM_pgH) location.reload();
}
MM_reloadPage(true);
//-->
</script>
<script language="JavaScript" type="text/JavaScript">
<!--

function MM_openBrWindow(theURL,winName,features) { //v2.0
  window.open(theURL,winName,features);
}
//-->
</script>
<!-- InstanceParam name="href" type="text" value="formstyles.css" -->

<script type="text/javascript" src="http://homeforlife.org/js/jquery-1.6.1.min.js"></script>
<script type="text/javascript" src="http://homeforlife.org/js/jquery.lightbox-0.5.js"></script>
<script type="text/javascript" src="http://homeforlife.org/js/main.js"></script>
<!--<script type="text/javascript" src="js/jquery.js"></script>-->
<script type="text/javascript" src="http://homeforlife.org/js/livevalidation_standalone.compressed.js"></script>
<script type="text/javascript" src="http://homeforlife.org/js/popup.js"></script>
<script>
	$(document).ready(function () {


		$('#fb').hide('slow');

		var dtype = $("input[name='dtype']:checked").val();
		if (dtype=="This is a one-time donation.") {  $('.dfaq').show('slow'); $('.sfaq').hide('slow'); $('#onetime').show('slow'); $('#sponsor').hide('slow') }

		var dtype2 = $("input[name='dtype']:checked").val();
		if (dtype2=="I'd like to Be a Sponsor") { $('.sfaq').show('slow'); $('.dfaq').hide('slow');$('#sponsor').show('slow'); $('#onetime').hide('slow');   }

		$("#feedback").change(function() {
			var feedback = $('input[name=feedback]').is(':checked');

			if (feedback==true) {  $('#fb').show('slow'); }
			if (feedback==false) { $('#fb').hide('slow');   }
		});

		$("#gift").change(function() {
			var gift = $('input[name=gift]').is(':checked');

			if (gift==true) {  $('#gt').show('slow'); }
			if (gift==false) { $('#gt').hide('slow');   }
		});

		$("#dtype").change(function() {

			var dtype = $("input[name='dtype']:checked").val();
			if (dtype=="This is a one-time donation.") {  $('.dfaq').show('slow'); $('.sfaq').hide('slow'); $('#onetime').show('slow'); $('#sponsor').hide('slow'); }
		});

		$("#dtype2").change(function() {

			var dtype = $("input[name='dtype']:checked").val();
			if (dtype=="I'd like to Be a Sponsor") { $('.sfaq').show('slow'); $('.dfaq').hide('slow');  $('#sponsor').show('slow'); $('#onetime').hide('slow');   }
		});


		$("#tribute").change(function() {
			var tribute = $('input[name=tribute]').is(':checked');

			if (tribute==true) {  $('#tb').show('slow'); }
			if (tribute==false) { $('#tb').hide('slow');   }
		});

		$('#gallery a.tooltip').lightBox();

		$('.selectp').click(function() {

			  var imageFile = "url(cards/thumb/"+$(this).attr("title")+")";
			  $('#photoChosen').css("background-image", imageFile);
			  //alert($(this).attr("id"));
			  $('#photo').val("cards/"+$(this).attr("title"));
			   $('#caption').val($(this).attr("id"));
			});
    $('.dfaq p strong').each(function(){
      var $this = $(this);
      var $parent = $this.parent();
      $parent.addClass('question');
//      $answer.css('color','blue');
//      $answer.wrap('<div class="answer"></div>');
      $(this).css('font-size', '16px');
    });

	});
</script>

<link rel="stylesheet" type="text/css" href="js/jquery.lightbox-0.5.css" media="screen" />

<?php

ini_set( "display_errors", 0);

$cards = array();

$cards["BenjaminButtonbyKage.jpg"]='Benjamin Button was injured in an accident as a kitten, which left him deformed. Never treated for his injuries, Benjamin was rescued from a hoarding situation at age five and surrendered to HFL.';

$cards["Anook.jpg"]='Anook is a senior ChowChow  who was abandoned on a reservation. Anook had  double entropia  of both eyelids on both eyes  and was also heartworm + when he came to Home for Life. Our Emergency Medical Care Fund paid for Anook\'s heartworm treatement and also the surgery which corrected the painful condition involving his eyes,but Anook has very poor eyesight.';

$cards["AugustOpenhouse2012.jpg"]='August is feline leukemia positive and also deaf. August is one of the residents of Home for Life\'s Feline Leukemia building devoted to these special cats. This photo shows him at our Annual Open House in his walking harness';

$cards["kittensfrombrownhs.jpg"]='Brown County Humane Society near Mankato MN surrendered this adorable family of kittens to Home for Life when they were found to be feline leukemia positive. The family includes brothers Rollo( front) and Carrot( rt)their sister Ruby center and sister Rosie, looking out the window.  ';

$cards["Charlotte2.jpg"]='Charlotte is a border collie who was  confiscated by the Sheriffs\' Department in a negelct case';

//$cards["GracebyGlimpsesofSoul.jpg"]='Grace is a chesapeake bay retriever, dead grass color.she is one of Home for LIfe\'s many paraplegic animals and uses a cart';

$cards["Frosty3_21_112ndsmile.jpg"]='Frosty is a paraplegic surrendered by the American Eskimo rescue. He was helped by Home for Life\'s Emergency Medical Care Fund';

$cards["flurrycoverlookback.jpg"]='Flurry: Abandoned as puppy on a country road in Illinois Flurry was born blind. ln the protected setting of Home for Life, Flurry is able to enjoy life like any dog and even gets to run off leash in our fenced runs!';

//$cards["Honeyindaisies.jpg"]='Honey was one of our senior dogs who came to Home for Life when her owners divorced and lost their home';

$cards["kitchee1.jpg"]='Kitchee was born with deformed hind legs and came to Home for Life all the way from Saudi Arabia. Our Emergency Medical Care Fund made it possible for Kitchee to walk and run without pain. ';

//$cards["BjorninwindowsillbySarahbeth.jpg"]='Bjorn: shy and feline leukemia positive';

$cards["Dodiflowers.jpg"]='Dodi is a harlequin great dane who has epilepsy.She is a certfied therapy dog and works with Home for Life\'s outreach programs,the Pet peace Corps ';

$cards["benruns2_3_10.jpg"]='Ben is a small shepard mix who was savagely beaten by a gang of boys when only a few months old. The beating left Ben brain damaged and blind. He was surrendered to Home for Life by a rescue in Chicago. Home for Life helps shelters from around the world who seek help for special needs animals like Ben who cannot be adopted.';


$cards["dogsruninsunI-love-HFL.jpg"]='Diego a black mixed breed  dog  who could not find a home and was surrendered by his rescue group. the Home for Life dogs love to exercise in one of our four fenced meadows.';

//$cards["HFL_3-21-11_1554.jpg"]='Indiana has cerebral palsy.';

$cards["Shakesspearehaircommercial.jpg"]='Shakespeare, age 3, is an old english sheepdog who had lived outside most of life. Surrendered to a  rescue ,Shakespeare was alleged to have exhibited aggression towards a teenage boy in the foster home and was quite underweight. He has been easy to manage since coming to Home for Life and is the roommate of Charlotte the border collie (see her e card profile).';
$cards["gingerbyglimpses.jpg"]='Ginger is a senior boxer who is diabetic. She is also a old dog who learned new tricks as she became  a  certified therepy dog after arrving at Home for Life and now visits hospitalized  patients and nursing home residents';
$cards["Peachesbymark.jpg"]='Peaches was shot in the back by a neighbor of her owners. She survived the attack but was left prapalegic. After her owenrs moved and could not take her with ,she was surrendered to Home for Life.';
$cards["Ingridface3-21_11.jpg"]='Ingrid was found as a starving stray in Minnesota. Somehow she had lost one of her legs and was also feline leukemia positive.  Initially, Ingrid was very shy and wary; who knows how long she had been on her own or how she lost her leg? But over the past few months, with good care , she has become much more accepting of attention and affection.';


$cards["cesarnSimon.jpg"]='Simon the doberman, who is a certified therapy dog who lives at Home for Life, met Cesar Millan when we took photos to promote our 2007 gala.';

$cards["schroeder.jpg"]='Schroeder was a farm cat who somehow got tangled in a piece of farm machinery and sustained terrible injuries, as can be seen from the scar across his nose.';

$folder = "cards/"; // The folder containing the images.

$list = array(); // This will hold data for the images found.
$valid = array("jpg"); // Images that Flash can load.

// Open the folder and read the files.
$dir = "cards/thumb/";
$img_array=array();
$i=0;
// Open a known directory, and proceed to read its contents
if (is_dir($dir)) {
    if ($dh = opendir($dir)) {
        while (($file = readdir($dh)) !== false) {
            $img_array[$i]=$file;
			$i++;
        }
        closedir($dh);
    }
}

?>

</head>

<body>
<div id="cards">


</div>
<div id="header">
  <div id="topnav">
<!--    <ul>-->
<!--      <li><a href="http://www.homeforlife.org/index.html">Home</a></li>-->
<!--      <li><a href="http:/www.homeforlife.org/contact.htm">Contact Us</a></li>-->
<!--    </ul>-->
    <div class="logo">
      <a href="/" title="link to home">
        <svg class="logoGraphic" version="1.1" id="Layer_7" xmlns="http://www.w3.org/2000/svg" xmlns:xlink="http://www.w3.org/1999/xlink" x="0px" y="0px"viewBox="0 0 100 34">
          <g id="V1">
            <polygon fill="#666666" points="4.153,15.62 3.504,13.964 39.111,0 74.323,13.965 73.667,15.619 39.108,1.912 	"/>
            <g id="Text_6_">
              <text transform="matrix(1 0 0 1 71.7729 23.6045)"><tspan x="0" y="0" fill="#2BB673" font-family="'SourceCodePro-Regular'" font-size="11.8596">FO</tspan><tspan x="14.231" y="0" fill="#2BB673" font-family="'SourceCodePro-Regular'" font-size="11.8596" letter-spacing="-1">R</tspan><tspan x="-0.237" y="9.488" fill="#2BB673" font-family="'SourceCodePro-Regular'" font-size="11.8596">LIFE</tspan></text>
              <text transform="matrix(1 0 0 1 19.4419 33.2402)"><tspan x="0" y="0" fill="#00AEEF" font-family="'SourceCodePro-Regular'" font-size="26.0911" letter-spacing="-2">H</tspan><tspan x="13.462" y="0" fill="#00AEEF" font-family="'SourceCodePro-Regular'" font-size="26.0911" letter-spacing="-1">O</tspan><tspan x="27.134" y="0" fill="#00AEEF" font-family="'SourceCodePro-Regular'" font-size="26.0911" letter-spacing="-3">M</tspan><tspan x="39.032" y="0" fill="#00AEEF" font-family="'SourceCodePro-Regular'" font-size="26.0911">E</tspan></text>
            </g>
            <polygon fill="#4D4D4D" points="9.754,19.969 11.927,18.355 13.535,16.82 14.313,15.667 14.537,14.755 14.982,14.114 15.31,12.93 15.656,13.212 15.683,13.618 15.986,14.495 16.672,13.185 16.87,13.09 17.049,13.322 16.988,14.834 17.012,15.2 17.18,15.27 17.771,15.556 18.05,16.077 18.361,16.454 18.999,16.859 20.313,17.544 20.34,17.95 20.115,18.291 19.839,18.432 19.644,18.568 19.658,18.771 19.431,19.03 18.455,19.056 17.508,18.916 17.043,19.273 16.685,19.998 16.689,20.071 16.376,20.867 15.777,22.252 15.54,22.961 14.783,23.828 13.995,25.43 13.459,25.955 13.176,27.197 13.021,28.511 13.265,29.718 13.226,31.554 13.772,31.803 14.409,32.167 14.842,32.545 15.026,32.859 15.08,33.059 14.726,33.247 13.823,33.144 12.902,32.799 12.504,32.336 12.095,31.712 12.027,30.698 11.964,29.765 11.441,28.659 11.153,28.026 8.524,27.715 8.361,19.86 	"/>
            <path fill="#808080" d="M11.304,23.926l0.511,1.191v0.454l0.283,1.079l0.284,1.07v0.857l-0.284,2.212v0.964l-0.283,0.851v0.624H2.058l-0.454-0.283L0.98,32.492l-0.709-0.908l-0.085-0.34c0,0-0.249-0.438-0.17-0.681c0.09-0.275,0.022-0.688,0.17-0.936c0.134-0.224,0.745-0.968,0.964-1.106c0.241-0.151,0.681-0.341,0.964-0.341c0.199,0,0.604-0.055,0.795,0c0.177,0.051,0.564,0.222,0.624,0.396c0.068,0.2,0.432,0.588,0.396,0.795c-0.029,0.168-0.529,0.603-0.681,0.68c-0.172,0.088-0.441-0.394-0.624-0.453c-0.175-0.058-0.576-0.089-0.737,0c-0.117,0.065-0.247,0.325-0.284,0.453c-0.055,0.191,0,0.794,0,0.794l0.34,0.453l0.624,0.568h1.077h1.022l-0.114-0.511V30.79L4.27,30.109v-0.736v-0.681l0.454-0.51l0.794-1.135v-0.737l0.056-1.191l0.397-0.568l-0.057-0.624l-0.396-0.284H4.667L4.27,23.529l-0.567-0.624V21.94l-0.284-0.681l0.454-1.19L3.76,19.728l-0.341-0.397l-0.454-0.568h0.568h1.021h0.284h0.397h1.191h0.851l0.738,0.17l1.134,0.568l1.134,1.02l0.568,0.965l0.454,1.361"/>
          </g>
        </svg>
      </a>
    </div>
  </div>

  </div>
<div id="container">

  <div id="rightcol"><!-- InstanceBeginEditable name="rightside" -->
  <div class="dfaq" style="display: none;">
    <h2>Donation FAQs</h2>
    <p><strong>Q. Is my donation tax-deductible?</strong></p>
    <p>A. Yes, all donations are tax-deductible. Remember to enter your full address
      so that we can send you a receipt for your tax records.</p>
    <p><strong>Q. Is my online donation secure and private?</strong></p>
    <p>Yes. This is a secure web page, meaning that the information you submit
      is encrypted before it is transmitted.</p>
    <p>The information we collect will not be sold or given to any other organization.</p>
    <p><strong>Q. How will Home for Life<sup>&reg;</sup> use my donation?</strong></p>
    <p>A. 100% of your contribution goes directly to the care and feeding of sanctuary
      residents. Our administrative activities, events, and outreach are handled
      entirely by volunteers and donors.</p>
    <p><strong>Q. How do I submit a memorial?</strong></p>
    <p>A. Select &quot;Memorial&quot; under Donation Type. Then enter the content
      of your memorial in the Details box. </p>
    <p>Memorials are $20  or $35  with photo. </p>
    <p><strong>Q. How do I purchase a stone for the Memorial Garden?</strong></p>
    <p>A. Select &quot;Memorial Garden stone&quot; under Donation Type. In the
      Details box, enter your pet's name and any other message you want engraved
      on the stone. </p>
    <p>Memorials stones are $250. </p>
    <p><strong>Q. Can I donate money to a specific program?</strong></p>
    <p>A. You can earmark your donation for our Emergency Medical Fund or contribute
      to our Capital Campaign. To do so, make the appropriate selection under
      Donation Type on this form.</p>
    <p><strong>Q. I want to sponsor an animal. Can I do that here?</strong></p>
    <p>A. To sponsor an animal, please select "Be a Sponsor" on left instead.</p>



<p><strong>
Privacy Policy:
</strong></p>
<p><strong>
Q. How do we protect visitor information?
</strong></p>
<p>
A. We implement a variety of security measures to maintain the safety of your
personal information. Your personal information is contained behind secured
networks and is only accessible by a limited number of persons who have
special access rights to such systems, and are required to keep the
information confidential. All sensitive/credit information you supply is
transmitted via Secure Socket Layer (SSL) technology and then encrypted into
our databases to be only accessed as stated above.</p>

<p><strong>
Q. Do we disclose the information we collect to outside parties?
</strong></p>
<p>
A. We do not sell, trade, or otherwise transfer to outside parties your
personally identifiable information.
</p>

<p><strong>Changes to our policy:</strong></p>
<p>
If we decide to change our privacy policy, we will post those changes on
this page.
</p>


<p><strong>
Refund policy:
</strong></p>
<p>
By using our site, you consent to our privacy policy.
</p>
<p>
Donations / Sponsorship Fees - Home For Life does not refund donations, and
sponsorship fees, whether they were purchased on-line, sent via check, wire
transfer or any other funding source.
</p>
<p>
All sales and transactions are final If the sale that occurs was made
in error, we will be happy to review the transaction and issue a refund.
Please contact us at info@homeforlife.org. or 800-252-5918.
<p>


<p><strong>
Delivery policy:
</strong>
</p>
<p>
Thank you letters acknowledging your donation will be received from 30-45
days after your on line gift is received and processed by Home for Life.
Sponsorship of an animal or animals consisting of regular photos and updates
on the Sanctuary commences within 60-90 days of your transaction.
</p>


	  </div>
	  <div class="sfaq" style="display: none;">
	   <h2>Sponsorship FAQs</h2>
    <p><strong>Q. Is my sponsorship donation tax-deductible?</strong></p>
    <p>A. Yes, sponsorship is tax-deductible. Remember to enter your full address
      so that we can send you a receipt for your tax records.</p>
    <p><strong>Q. Can I sponsor an animal as a gift to someone else?</strong></p>
    <p>A. Yes. In the case of a gift sponsorship, you are responsible for the
      monthly or annual sponsorship donations, but the gift recipient will receive
      the animal's updates and photos.</p>
    <p>To give a gift sponsorship, fill out the Special Sponsorship Details section
      of this form, providing the name and mailing address of the gift recipient.</p>

    <p><strong>Q. Can I sponsor an animal as a memorial to a loved one?</strong></p>
    <p>A. Yes. Memorial sponsorships will be recognized in our newsletter and
      on the Memorials page of the website.</p>
    <p>To give a memorial sponsorship, fill out the Special Sponsorship Details
      section of this form, and provide any special text that you would like us
      to print with your memorial.</p>
    <p><strong>Q. Is my online donation secure and private?</strong></p>
    <p>Yes. This is a secure web page, meaning that the information you submit
      is encrypted before it is transmitted.</p>
    <p>The information we collect will not be sold or given to any other organization.</p>

    <p><strong>Q. How will Home for Life<sup>�</sup> use my sponsorship donation?</strong></p>
    <p>A. 100% of your sponsorship contribution goes directly to the care and
      feeding of sanctuary residents. Our administrative activities, events, and
      outreach are handled entirely by volunteers and donors.</p>

	  </div>
    <!-- InstanceEndEditable --> </div>
  <div id="content"><!-- InstanceBeginEditable name="content" -->

  <div id="popupContact">
		<div id="donot">NOTE: This is an auto-generated email. Please do not reply.</div>
		<div id="lovin"></div>
		<div id="logo"><a href="http://www.homeforlife.org/index.html"><img src="http:/www.homeforlife.org/hflname.gif" border="0" height="46" width="246"></a></div>
		<a id="popupContactClose">x</a>
		<h2><span class="from"></span> made a donation to Home for Life as a gift to you!</h2>
		<h2>Thank you for giving a Home for Life to animals who otherwise would have nowhere else to turn.</h2>

		<p id="contactArea">
			<strong>To:</strong> <span class="to"></span> <br/>
			<h1 class="message"></h1>
			<strong>From:</strong> <span class="from"></span> <br/>
			<img src="" class="ephoto" height="200"><br/>
			<span class="caption"></span>
		</p>
	</div>

	<div id="backgroundPopup"></div>


	<?php if ($_POST) {

		// begin aeg edit
		/*
	}
	if (false)
	{
		 */
		// end aeg edit


	$dtype=$_POST["dtype"];

	if ($dtype=="This is a one-time donation.")
		{
			$amount=$_POST["amount"];
		}
	else
	  {
		$resident=$_POST["resname"];
		$rate=$_POST["rate"];

		switch ($rate) {
			case "monthly":
				$amount=25;
				$period=30; // days
				break;
			case "annual":
				$amount=300;
				$period=12; // months
				break;
			case "other":
				$amount=$_POST["amount_other"];
				break;
		}
	  }


	// Amount



	//Tribute
	$tribute=$_POST["tribute"];
	$tributetype=$_POST["tributetype"];
	$memName=$_POST["memName"];
	$memDate=$_POST["memDate"];
	$memorialtxt=$_POST["memorialtxt"];

	//Gift
	$gift=$_POST["gift"];
	$photo=$_POST["photo"];
	$caption=$_POST["caption"];
	$nameTo=$_POST["nameTo"];

	$nameFrom=$_POST["nameFrom"];
	$pmessage=$_POST["message"];

	//Gift Recipient
	$giftFirstName=$_POST["giftFirstName"];
	$giftLastName=$_POST["giftLastName"];
	$giftAddress=$_POST["giftAddress"];
	$giftCity=$_POST["giftCity"];
	$giftState=$_POST["giftState"];
	$giftZip=$_POST["giftZip"];
	$giftEmail=$_POST["giftEmail"];

	//Contact
	$firstname=$_POST["firstname"];
	$lastname=$_POST["lastname"];
	$location=$_POST["location"];
	$state=$_POST["State"];
	$city=$_POST["City"];
	$zip=$_POST["Zip"];
	$phone=$_POST["Phone"];
	$email=$_POST["email"];

	//Feedback
	$feedback=$_POST["feedback"];
	$been_here=$_POST["been_here"];
	$comments=$_POST["comments"];
	$referred_by=$_POST["referred_by"];

	//Payment
	$cctype=$_POST["pymt_type"];
	$ccnum=$_POST["CardNo"];
	$expmonth=$_POST["expmonth"];
	$expyear=$_POST["expyear"];
	$cccode=$_POST["cccode"];


	$to = 'lisagowild@hotmail.com';
	//$to = 'allen@vision-webs.com';

	if ($dtype=="I'd like to Be a Sponsor")
		{ $subject = 'Be a Sponsor Submission'; }
	else
		{ $subject = 'Donation Submission'; }



	$headers = "From: " . strip_tags($email) . "\r\n";
	$headers .= "Reply-To: ". strip_tags($email) . "\r\n";
	$headers .= "MIME-Version: 1.0\r\n";
	//$headers .= "Content-Type: text/html\r\n";
	//$headers .= "Content-Type: text/html; charset=ISO-8859-1\r\n";

	$message = '';

	$message .= 'Thank You!\n\n
	Thank you for your donation to Home for  Life!  We appreciate your support of our  work on behalf of the animals at the sanctuary. We will be sending you a thank  you note but wanted to acknowledge your generous contribution as soon as we  could. \n
  Thank you again,\n\n
	Sincerely\n\n
	Lisa LaVerdiere\n
	  Executive Director\n
	Follow  us on Twitter! @HFLAnimals\n
		Check  out our blog!: http://www.homeforlifesanctuary.blogspot.com/\n';

	//$message .= '<h2>Donation</h2>Amount: $'.$amount.'<br/>';
	$message .= "Donation\nAmount: $".$amount."\n";
	//$message .= 'Type: '.$dtype.'<br/>';
	$message .= 'Type: '.$dtype."\n";

	//if ($resident) { $message .= 'Choose or Describe an Animal: '.$resident.'<br/>';  }
	if ($resident) { $message .= 'Choose or Describe an Animal: '.$resident."\n";  }

	if ($tribute)
	  {
		//$x_description = 'Make this a tribute in memory or honor of a special person, pet or event.';
		//$message .= '<hr/><h2>Make this a tribute in memory or honor of a special person, pet or event.</h2>';
		//$message .= 'Tribute Type: '.$tributetype.'<br/>';
		//$message .= 'Tribute Name: '.$memName.'<br/>';
		//$message .= 'Tribute Date: '.$memDate.'<br/>';
		//$message .= 'Tribute Details: '.$memorialtxt.'<br/>';
		$x_description = 'Make this a tribute in memory or honor of a special person, pet or event.';
		$message .= "\n".'Make this a tribute in memory or honor of a special person, pet or event.'."\n";
		$message .= 'Tribute Type: '.$tributetype."\n";
		$message .= 'Tribute Name: '.$memName."\n";
		$message .= 'Tribute Date: '.$memDate."\n";
		$message .= 'Tribute Details: '.$memorialtxt."\n";
	  }

	if ($gift)
	  {
		$x_description = 'Make this a Gift.';
		//$message .= '<hr/><h2>Make this a Gift.</h2>';
		//$message .= '<img src="https://secure18.visi.com/homeforlife.org/'.$photo.'"><br/>';
		//$message .= 'To: '.$nameTo.'<br/>';
		//$message .= 'From: '.$nameFrom.'<br/>';
		//$message .= 'Personal Message: '.$pmessage.'<br/>';

		//$message .= '<hr/><h2>Recipients Information.</h2>';
		//$message .= 'First Name: '.$giftFirstName.'<br/>';
		//$message .= 'Last Name: '.$giftLastName.'<br/>';
		//$message .= 'Address: '.$giftAddress.'<br/>';
		//$message .= 'City: '.$giftCity.'<br/>';
		//$message .= 'State: '.$giftState.'<br/>';
		//$message .= 'Zip: '.$giftZip.'<br/>';
		//$message .= 'Email: '.$giftEmail.'<br/>';

		$message .= 'Make this a Gift.'."\n";
		$message .= '<img src="https://secure18.visi.com/homeforlife.org/'.$photo.'">'."\n";
		$message .= 'To: '.$nameTo."\n";
		$message .= 'From: '.$nameFrom."\n";
		$message .= 'Personal Message: '.$pmessage."\n";

		$message .= "\n".'Recipients Information.'."\n";
		$message .= 'First Name: '.$giftFirstName."\n";
		$message .= 'Last Name: '.$giftLastName."\n";
		$message .= 'Address: '.$giftAddress."\n";
		$message .= 'City: '.$giftCity."\n";
		$message .= 'State: '.$giftState."\n";
		$message .= 'Zip: '.$giftZip."\n";
		$message .= 'Email: '.$giftEmail."\n";

		$giftheaders = "From: " . strip_tags($email) . "\r\n";
		$giftheaders .= "Reply-To: ". strip_tags($email) . "\r\n";
		$giftheaders .= "MIME-Version: 1.0\r\n";
		$giftheaders .= "Content-Type: text/html; charset=ISO-8859-1\r\n";

		$giftMessage .= '
						<style>

						#popupContact{

						height:650px;
						width:550px;
						background:#FFFFFF;
						border:2px solid #cecece;
						z-index:2;
						padding:15px;
						font-size:13px;
						text-align:center;

						}
						#popupContact h1{
						color:#6FA5FD;
						font-size:22px;
						font-weight:700;
						border-bottom:1px dotted #D3D3D3;
						padding-bottom:2px;
						margin-bottom:20px;
						}
						#popupContactClose{
						font-size:14px;
						line-height:14px;
						right:6px;
						top:4px;
						position:absolute;
						color:#6fa5fd;
						font-weight:700;
						display:block;
						cursor:pointer;
						}

						.ephoto { padding:15px 0; }
						.ephoto IMG { border:solid 5px #ddeeff; }
						#donot { background: #5577aa; padding: 10px; color: white; text-align: center; font-size:12px; font-family:Arial, Helvetica, sans-serif; font-weight:bold; }
						#lovin { background: url(http://www.homeforlife.org/securebanner.jpg) no-repeat bottom right; height: 70px; display:block; }
						#logo { background: #ddddbb; height: 50px; line-height:50px; padding:10px; text-align:left; }
						</style>';

		$giftMessage .= '<div id="popupContact">
		<div id="donot">NOTE: This is an auto-generated email. Please do not reply.</div>
		<div id="lovin"></div>
		<div id="logo"><a href="http://www.homeforlife.org/index.html"><img src="http://www.homeforlife.org/hflname.gif" border="0" height="46" width="246"></a></div>
		<a id="popupContactClose">x</a>
		<h2><span class="from">'.$nameFrom.'</span> made a donation to Home for Life as a gift to you!</h2>
				<h2>Thank you for giving a Home for Life to animals who otherwise would have nowhere else to turn.</h2>

				<p id="contactArea">
					<strong>To:</strong> <span class="to">'.$nameTo.'</span> <br/>
					<h1 class="message">'.$pmessage.'</h1>
					<strong>From:</strong> <span class="from">'.$nameFrom.'</span> <br/>
					<img src="https://secure18.visi.com/homeforlife.org/'.$photo.'" class="ephoto" height="200">
					<p>'.$caption.'</p>
				</p>
			</div>';

		mail($giftEmail, $nameFrom.' made a donation to Home for Life as a gift to you!', $giftMessage, $giftheaders);
	  }


	$message .= "\n\n".'Contact Information'."\n";
	$message .= 'First Name: '.$firstname."\n";
	$message .= 'Last Name: '.$lastname."\n";
	$message .= 'Address: '.$location."\n";
	$message .= 'City: '.$city."\n";
	$message .= 'State: '.$state."\n";
	$message .= 'Zip: '.$zip."\n";
	$message .= 'Phone: '.$phone."\n";
	$message .= 'Email: '.$email."\n";

	$message .= "\n\n".'Payment Information'."\n";
	$message .= 'Credit Card Type: '.$cctype."\n";

	if ($feedback)
	  {
		  /*
		   *
		$message .= '<hr/><h2>Feedback</h2>';
		$message .= 'Have you been to our website before? '.$been_here.'<br/>';
		$message .= 'Do you have any comments or suggestions for our site? '.$comments.'<br/>';
		$message .= 'Where did you find out about us? '.$referred_by.'<br/>';
		   */
		$message .= "\n\n".'Feedback'."\n";
		$message .= 'Have you been to our website before? '.$been_here."\n";
		$message .= 'Do you have any comments or suggestions for our site? '.$comments."\n";
		$message .= 'Where did you find out about us? '.$referred_by."\n";
	  }

	if (false) // use evelon?
	{
		//$sLoginID = '99KZ4mbP';
		//$sTransactionKey = '99dYw3jvZ5Nb3u9u';

		 $host = "www.eprocessingnetwork.com";
		 $port = 443;
		 $path = "/cgi-bin/an/order.pl";
		 $order_payment_log='';
		 $order_payment_trans_id='';

		 //if ($dtype=="I'd like to Be a Sponsor") { $epn_recurring="YES"; }
		 //else
		 { $epn_recurring="NO"; }


			//Authnet vars to send
			$formdata = array (
				'x_version' => '3.1',
				'x_login' => '0411351',
				'x_tran_key' => 'a6HqD18rb63n0DSy',
				//'x_login' => $sLoginID,
				//'x_tran_key' => $sTransactionKey,
				'x_test_request' => 'FALSE',

				// Gateway Response Configuration
				'x_delim_data' => 'TRUE',
				'x_delim_char' => '|',
				'x_relay_response' => 'FALSE',
				'x_relay_url' => 'FALSE',

				// Customer Name and Billing Address
				'x_first_name' => $firstname,
				'x_last_name' => $lastname,
				'x_address' => $location,
				'x_city' => $city,
				'x_state' => $state,
				'x_zip' => $zip,
				//'x_country' => substr($dbbt->f("country"), 0, 60),
				'x_phone' => $phone,
				//'x_fax' => substr($dbbt->f("fax"), 0, 25),

				// Customer Shipping Address
				//'x_ship_to_first_name' => $firstname,
				//'x_ship_to_last_name' => $lastname,
				//'x_ship_to_company' => substr($dbst->f("company"), 0, 50),
				//'x_ship_to_address' => $location,
				//'x_ship_to_city' => $city,
				//'x_ship_to_state' => $state,
				//'x_ship_to_zip' => $zip,
				//'x_ship_to_country' => substr($dbst->f("country"), 0, 60),

				// Additional Customer Data
				//'x_cust_id' => $auth['user_id'],
				//'x_customer_ip' => $_SERVER["REMOTE_ADDR"],
				//'x_customer_tax_id' => $dbbt->f("tax_id"),

				// Email Settings
				'x_email' => $email,
				'x_email_customer' => 'True',
				'x_merchant_email' => $to,

				// Invoice Information
				//'x_invoice_num' => substr($order_number, 0, 20),
				'x_description' => $x_description,

				// Transaction Data
				'x_amount' => $amount,
				'x_currency_code' => 'USD',
				'x_method' => 'CC',
				'x_type' => 'AUTH_CAPTURE',
				'x_recurring_billing' => $epn_recurring,

				'x_card_num' => $ccnum,
				'x_card_code' => $cccode,
				'x_exp_date' => $expmonth.'-'.$expyear

				// Level 2 data
				/*
				'x_po_num' => substr($order_number, 0, 20),
				'x_tax' => substr($d['order_tax'], 0, 15),
				'x_tax_exempt' => "FALSE",
				'x_freight' => $d['order_shipping'],
				'x_duty' => 0
				*/

			);


		 //build the post string
		$poststring = '';
		foreach($formdata AS $key => $val){
			      $poststring .= urlencode($key) . "=" . urlencode($val) . "&";
		}
		// strip off trailing ampersand
		$poststring = substr($poststring, 0, -1);



		    $CR = curl_init();

		    curl_setopt($CR, CURLOPT_URL, "https://".$host.$path);
		    curl_setopt($CR, CURLOPT_POST, 1);
		    curl_setopt($CR, CURLOPT_FAILONERROR, true);
		    curl_setopt($CR, CURLOPT_POSTFIELDS, $poststring);
		    curl_setopt($CR, CURLOPT_RETURNTRANSFER, 1);

		    // No PEER certificate validation...as we don't have
		    // a certificate file for it to authenticate the host www.ups.com against!
		    curl_setopt($CR, CURLOPT_SSL_VERIFYPEER, 0);
		    //curl_setopt($CR, CURLOPT_SSLCERT , "/usr/locale/xxxx/clientcertificate.pem");

		    $result = curl_exec( $CR );

		    $error = curl_error( $CR );

		    curl_close( $CR );

		$response = explode("|", $result);

		// Approved - Success!
		if ($response[0] == '1') {
		   $order_payment_log = "Success: ";
		   $order_payment_log .= $response[3];
		   // Catch Transaction ID
		   $order_payment_trans_id = $response[6];
			   $sendemail=1;
			   $payment_status=$order_payment_log;
		}
		// Payment Declined
		elseif ($response[0] == '2') {
		  // $vmLogger->err( $response[3] );
		   $order_payment_log = $response[3];
		   // Catch Transaction ID
		   $order_payment_trans_id = $response[6];
			   $payment_status=$order_payment_log;
		}
		// Transaction Error
		elseif ($response[0] == '3') {
		   //$vmLogger->err( $response[3] );
		   $order_payment_log = $response[3];
		   // Catch Transaction ID
		   $order_payment_trans_id = $response[6];
			   $payment_status=$order_payment_log;
		}

	}
	else // use auth.net
	{
		// aeg begin auth.net update

		$sLoginID = '99KZ4mbP';
		$sTransactionKey = '2C7dYLp373sym6Gm';
		//define('AUTHORIZENET_API_LOGIN_ID', $sLoginID);
		//defined('AUTHORIZENET_TRANSACTION_KEY', $sTransactionKey);
  require_once 'AuthorizeNet.php';

  $oAuthNet = new AuthorizeNetAIM($sLoginID, $sTransactionKey);
  //$oAuthNet = new AuthorizeNetAIM();
  //$oAuthNet->setSandbox(true);

  $oAuthNet->setSandbox(false);

  $aSubmissionData = array(
     //'test_request' => 'TRUE',
     //'login' => $sLoginID,
     //'tran_key' => $sTransactionKey,
     'amount' => $amount,
     'card_num' => $ccnum, //'4007000000027', //$ccnum, //'411111111111111',
     'exp_date' => $expmonth.'-'.$expyear, //'0515'
     'first_name' => $firstname,
     'last_name' => $lastname,
     'address' => $location,
     'city' => $city,
     'state' => $state,
     'zip' => $zip,
     'phone' => $phone,

     'email' => $email,
     'email_customer' => 'FALSE',

     'customer_ip' => $_SERVER['REMOTE_ADDR'],

     'description' => $x_description
     );
  $oAuthNet->setFields($aSubmissionData);
  $oAuthResponse = $oAuthNet->authorizeAndCapture();
  $sendemail = 0;
  if ($oAuthResponse->approved)
  {
	  //echo "Sale successful!";
	  $sendemail = 1;

	  $payment_status = "Payment Succeeded";
  }
  else
  {
	  //echo "<BR>ERROR: <BR>";
      //echo $oAuthResponse->error_message;
	  //echo "<BR>ERROR: <BR>";
	  //failure

	  $payment_status = "Payment Failed: ". $oAuthResponse->error_message;

	  //mail($to, $subject."!", "\nTesting:\n".$message.$message2, $headers);
	  //mail($to, $subject."2!", "\nTesting:\n", $headers);

  }

// aeg end auth.net update
	}

	?>
	<?php if (mail($to, $subject, $message, $headers)&&$sendemail==1) {

		mail($email, $subject, $message, $headers)
	?>
	<h1>Thank You!</h1>
	<p>Thank you for your donation to Home for  Life!  We appreciate your support of our  work on behalf of the animals at the sanctuary. We will be sending you a thank  you note but wanted to acknowledge your generous contribution as soon as we  could. <br>
  Thank you again,</p>
	<p>Sincerely</p>
	<p>Lisa LaVerdiere<br>
	  Executive Director</p>
	<p><strong>Follow  us on Twitter! <a href="http://twitter.com/#!/@HFLAnimals" target="_blank">@HFLAnimals</a></strong><br>
		<strong>Check  out our blog!: <a href="http://www.homeforlifesanctuary.blogspot.com/" target="_blank">http://www.homeforlifesanctuary.blogspot.com/</a></strong></p>
	<?php
	} else {
	  echo '<h1>There was a problem sending the email.</h1>';
	  echo '<p>Payment Status: '.$payment_status.'</p>';
	}
	?>
	<?php
	} else { ?>
    <h1>Donation Form<sup></sup></h1>
    <p>Home For Life<sup>&reg;</sup> welcomes your support!
    <p>To donate, please fill in the following form and submit it. <strong>Credit
      card information is secure. </strong>We will contact you to let you know
      that we have received your donation. </p>

	 <form method="POST" action="donrform.php">
	<!-- begin aeg edit -->
<!--
	  <h1><div style="border: 1px solid black; padding: 5px;"><span style="color: red;">Apologies</span>, our online donation system is temporarily <span style="color: red;">down</span>.  To donate or sponsor an animal, please <a href="http://www.homeforlife.org/contact.htm">contact us via phone or email</a> and leave your contact information so we can arrange for your donation or sponsorship. Alternatively, if you prefer to setup your donation or sponsorship online, we plan to have our online system back up and running soon, so check back!</div></h1>
-->
	 <!-- end aeg edit -->

	  <h1>Yes! I want to help the animals...</h1>


	<div>
		<p><input name="dtype" id="dtype" value="This is a one-time donation."   type="radio" checked="checked"> This is a one-time donation.</p>
		<div id="onetime" style="display: none; ">
		<h2>Please accept my donation in the amount of: $<input type="text" name="amount" id="amount" size="5">
		  <script type="text/javascript"> var amount = new LiveValidation('amount'); amount.add(Validate.Numericality); </script>
    </h2>
		 </div>

		<p><input name="dtype" id="dtype2" value="I'd like to Be a Sponsor" type="radio"> I'd like to Be a Sponsor.</p>
	</div>

	 <div id="sponsor" style="display:none">
		 <h2 class="formhead">Choose or Describe an Animal</h2>
		 <p>Enter the name or description of a Home For Life<sup>�</sup> resident
			you would like to sponsor:<br>
			<textarea name="resname" cols="50" rows="5" style="margin-top: 6px;"></textarea>
		  </p>
		  <h2 class="formhead">Your Sponsorship Donation</h2>
      <table border="0" cellpadding="5" cellspacing="0">
        <tbody><tr>
          <td class="required" valign="top" width="142"><div align="right">Payment option:</div></td>
          <td   valign="top" width="222">
			<input name="rate" value="monthly" type="radio">Monthly payments of $25<br>
			<input name="rate" value="annual" type="radio">One annual payment of $300<br>
			<input name="rate" value="other" type="radio">Other: $<input type="text" name="amount_other" id="amount_other" size="5"><br>
			</td>
        </tr>
	</table>

	 </div>


	 <p class="formhead" id="tributeh"><input name="tribute" id="tribute" type="checkbox" value="yes" />Make this a tribute in memory or honor of a special person, pet or event.</p>

	 <div id="tb" style="display:none;">
      <table border="0" cellpadding="5" cellspacing="0" style="margin-bottom: 6px">

        <tr>
          <td valign="top">
<div align="right">
              <p class="required">Tribute Type:</p>
            </div></td>
          <td>

        <select name="tributetype">
        <option value="---" selected="selected">Choose a tribute type</option>
        <option value="In Memory">In Memory</option>
        <option value="In Honor">In Honor</option>
        <option value="Memorial">Memorial</option>
		<option value="Memorial Garden stone">Memorial Garden stone</option>
        </select>
		  </td>
        </tr>
        <tr>
          <td valign="top"><div align="right"><p class="required">Tribute Name:</p></div></td>
          <td><input id="memName" name="memName" value="" size="30" type="Text">
		  </td>
        </tr>
        <tr>
          <td valign="top"><div align="right"><p class="required">Tribute Date:</p></div></td>
          <td><input id="memDate" name="memDate" value="" size="30" type="Text">
		  </td>
        </tr>
      </table>
      <p>Details:<br>
        <textarea name="memorialtxt" cols=50 rows=5></textarea>
      </p>
	</div>




     <p class="formHead" id="gifth">
			<input name="gift" id="gift" type="checkbox" value="yes" /> Make this a Gift
		</p>

	<div id="gt" style="display:none;">
					<table width="100%" border="0" cellspacing="5" cellpadding="0">
  <tr>
    <td>

	<div class="formhead">Gift Information</div>
	<br/>
	<div id="button"><input type="button" value="eCard Preview"></div></td>
    </tr>
  <tr>
    <td><table width="100%" border="0" cellspacing="5" cellpadding="0">
      <tr>
        <td colspan="2">
			<p><strong>Select a Greeting Card Photo:</strong><br/>(Click photo to view large version)</p>
			<div id="gallery">

			<ul class="cards">
				<?php
					for ($i=0;$i<=sizeof($img_array);$i++)
					{

								if ($img_array[$i]!="."&&$img_array[$i]!=""&&$img_array[$i]!="..")
						{ echo '<li><a href="cards/'.$img_array[$i].'" title="'.$cards[$img_array[$i]].'" class="tooltip"><img src="cards/thumb/'.$img_array[$i].'" class="preview" title="'.$img_array[$i].'" alt="'.$img_array[$i].'" width="80" height="50" border="0"></a><a class="selectp" title="'.$img_array[$i].'" id="'.$cards[$img_array[$i]].'">Select Photo</a></li>'; }

					}
				?>
			</ul>
			</div>
		</td>
        </tr>
	 <tr>
        <td><p class="required"  align="right">Photo Chosen:</p></td>
        <td>
			<div id="photoChosen"></div><input name="photo" type="hidden" id="photo" value=""><input name="caption" type="hidden" id="caption" value="">

		</td>
      </tr>
      <tr>
        <td><p class="required"  align="right">To:</p></td>
        <td><input name="nameTo" type="text" id="nameTo" maxlength="50"  value="">
		</td>
      </tr>

      <tr>
        <td><p class="required"  align="right">From:*</p></td>
        <td><input name="nameFrom" type="text" id="nameFrom" maxlength="50" value="">
		</td>
      </tr>
      <tr>
        <td colspan="2"><font class="formTxt1">Enter names above as you would like the card to read (i.e. John, Mom, Aunt Emma)</font></td>
        </tr>
      <tr>
        <td colspan="2"><p class="required">Personal Message:</p><br>
        </span></span>          <textarea name="message" cols="40" rows="10" class="formInfo" id="message">Enter your Personal Message Here</textarea>
		</td>
        </tr>

    </table>





	</td>
    </tr>
  <tr>
    <td><div class="formhead">Recipient's Information</div></td>
    </tr>
  <tr>
    <td><table width="100%" border="0" cellspacing="5" cellpadding="0">
      <tr>
        <td width="100"><span class="formRight">
         <p class="required"  align="right">First Name:</p></td>
        <td><span class="formRight">
          <input name="giftFirstName" id="giftFirstName"  value="">
		  <!--<script type="text/javascript"> var giftFirstName = new LiveValidation('giftFirstName'); giftFirstName.add(Validate.Presence); </script>-->
        </span></td>
      </tr>
      <tr>
        <td><p class="required"  align="right">Last Name:</p></td>
        <td><span class="formRight">
          <input name="giftLastName" id="giftLastName" value="">
		  <!--<script type="text/javascript"> var giftLastName = new LiveValidation('giftLastName'); giftLastName.add(Validate.Presence); </script>-->
        </span></td>
      </tr>
      <tr>
        <td><p class="required"  align="right">Address:</p></td>
        <td><input name="giftAddress"  id="giftAddress" value="">
		<!--<script type="text/javascript"> var giftAddress = new LiveValidation('giftAddress'); giftAddress.add(Validate.Presence); </script>-->
		</td>
      </tr>
      <tr>
        <td><p class="required"  align="right">City:</p></td>
        <td><input name="giftCity" id="giftCity" value="">
		<!--<script type="text/javascript"> var giftCity = new LiveValidation('giftCity'); giftCity.add(Validate.Presence); </script>-->
		</td>
      </tr>
	  <tr>
        <td><p class="required"  align="right">State:</p></td>
        <td><input name="giftState" id="giftState"  value="">
		<!--<script type="text/javascript"> var giftState = new LiveValidation('giftState'); giftState.add(Validate.Presence); </script>-->
		</td>
      </tr>
      <tr>
        <td><p class="required"  align="right">Zip:</p></td>
        <td>
            <input name="giftZip" id="giftZip" maxlength="5" size="5"  value="" >
			<!--<script type="text/javascript"> var giftZip = new LiveValidation('giftZip'); giftZip.add(Validate.Presence); </script>-->
			</tr>
      <tr>
        <td><p class="required"  align="right">E-mail:</p></td>
        <td><span class="formRight">
          <input name="giftEmail"  id="giftEmail" value="">
		 <!-- <script type="text/javascript"> var giftEmail = new LiveValidation('giftEmail'); giftEmail.add(Validate.Email); </script>-->
        </span></td>
      </tr>

    </table></td>
    </tr>
</table>


		</div>


	  <p class="formhead">Contact Information</p>
      <p>Please include your full address, including your apartment number. We
        need this information to send you a receipt for your tax records.</p>
      <table border="0" cellspacing="0" cellpadding="3">
        <tr>
          <td><div align="right">
              <p class="required">Your first name:</p>
            </div></td>
          <td><input type="text" name="firstname" id="firstname" size=50>

			 <script type="text/javascript"> var firstname = new LiveValidation('firstname'); firstname.add(Validate.Presence); </script>

			</td>
        </tr>
		  <tr>
          <td><div align="right">
              <p class="required">Your last name:</p>
            </div></td>
          <td><input type="text" name="lastname" id="lastname" size=50>

			 <script type="text/javascript"> var lastname = new LiveValidation('lastname'); lastname.add(Validate.Presence); </script>

			</td>
        </tr>
        <tr>
          <td width="200"><div align="right">
              <p class="required">Address:</p>
            </div></td>
          <td><input type="text" name="location" id="loc" size=50>
		  <script type="text/javascript"> var loc = new LiveValidation('loc'); loc.add(Validate.Presence); </script>
		  </td>
        </tr>
        <tr>
          <td><div align="right">
              <p class="required">City:</p>
            </div></td>
          <td><input type="text" name="City" id="city" size=20>
		  <script type="text/javascript"> var city = new LiveValidation('city'); city.add(Validate.Presence); </script> </td>
        </tr>
        <tr>
          <td><div align="right">
              <p class="required">State:</p>
            </div></td>
          <td><input type="text" name="State" id="state" size=15>
		  <script type="text/javascript"> var state = new LiveValidation('state'); state.add(Validate.Presence); </script></td>
        </tr>
        <tr>
          <td><div align="right">
              <p class="required">Zip code:</p>
            </div></td>
          <td><input type="text" id="zip" name="Zip" size=10>
		  <script type="text/javascript"> var zip = new LiveValidation('zip'); zip.add(Validate.Presence); </script></td>
        </tr>
        <tr>
          <td><div align="right">Area code and phone:</div></td>
          <td><input type="text" name="Phone" size=15></td>
        </tr>
        <tr>
          <td><div align="right">
              <p class="required">Email address:</p>
            </div></td>
          <td><input type="text" name="email" id="email" size=20>
		  <script type="text/javascript"> var email = new LiveValidation('email'); email.add(Validate.Email); </script></td>
        </tr>
      </table>



      <p class="formhead">Payment Information</p>
      <table border="0" cellspacing="0" cellpadding="5">
        <tr>
          <td valign="top" class="required">
<div align="right">Credit card:</div></td>
          <td><input type="radio" name="pymt_type" value="VISA">
            Visa<br> <input type="radio" name="pymt_type" value="MCr">
            Mastercard<br> <input type="radio" name="pymt_type" value="AMEX">
            American Express<br> <input type="radio" name="pymt_type" value="Disc">
            Discover</td>
        </tr>
        <tr>
          <td valign="top" class="required">
<div align="right">Card Number:</div></td>
          <td><input type="text" name = "CardNo" id="cc" size=20>
		  <script type="text/javascript"> var cc = new LiveValidation('cc'); cc.add(Validate.Numericality); </script>
		  </td>
        </tr>
        <tr>
          <td valign="top">
            <p align="right" class="required">Expiration Date:</p></td>
          <td>
		  <select name="expmonth">
          <option selected>Choose Month</option>
          <option value="01">January</option>
          <option value="02">February</option>
          <option value="03">March</option>
		  <option value="04">April</option>
		  <option value="05">May</option>
		  <option value="06">June</option>
		  <option value="07">July</option>
		  <option value="08">August</option>
		  <option value="09">September</option>
		  <option value="10">October</option>
		  <option value="11">November</option>
		  <option value="12">December</option>
        </select>

		<select name="expyear">
          <option selected>Choose Year</option>
          <option value="2011">2011</option>
          <option value="2012">2012</option>
          <option value="2013">2013</option>
		  <option value="2014">2014</option>
		  <option value="2015">2015</option>
		  <option value="2016">2016</option>
		  <option value="2017">2017</option>
		  <option value="2018">2018</option>
		  <option value="2019">2019</option>
		  <option value="2020">2020</option>
		  <option value="2021">2021</option>
		  <option value="2022">2022</option>
		  <option value="2023">2023</option>
        </select>
		</td>
        </tr>
		<tr>
          <td valign="top">
            <p align="right" class="required">Credit Card Code (3 digits - back of card):</p></td>
          <td><input type="text" name="cccode" id="cccode" size=15>
		   <script type="text/javascript"> var cccode = new LiveValidation('cccode'); cccode.add(Validate.Presence); </script></td>
        </tr>
      </table>
      <p class="formhead"><input name="feedback" id="feedback" type="checkbox" value="yes" /> Feedback (optional)</p>
	  <div id="fb" style="display: none;">
      <p>Have you been to our website before?<br>
        <input type="checkbox" name="been_here" value="Yes">
        Yes</p>
      <p>Do you have any comments or suggestions for our site?<FONT COLOR="#0000C0"><STRONG><BR>
        <BR>
        </STRONG></FONT>
        <textarea name="comments" cols=50 rows=5></textarea>
      </p>
      <p>Where did you find out about us?</p>
      <p>
        <textarea name="referred_by" cols=30 rows=2></textarea>
      </p>
	  </div>
      <p align="left">
        <input type="submit" value="Submit">
      </p>
    </form>
	<?php } ?>
    <!-- InstanceEndEditable --></div>
  </div>

<div id="footer">
  <ul>
    <li>Home for Life&reg;</li>
    <li>P.O. Box 847, Stillwater, MN 55082</li>
    <li>T: 1-800-252-5918</li>
    <li>F: 888-480-9820</li>
    <li>info@homeforlife.org</li>
  </ul>
</div>
</body>
<!-- InstanceEnd --></html>
