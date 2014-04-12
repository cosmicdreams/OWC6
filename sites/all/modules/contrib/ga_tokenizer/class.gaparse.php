<?php 
////////////////////////////////////////////////////
// GA_Parse - PHP Google Analytics Parser Class 
//
// Version 1.3
// Date: 21 April 2011
//
// Define a PHP class that can be used to parse 
// Google Analytics cookies currently with support
// for __utmz (campaign data) and __utma (visitor data)
//
// Author: Joao Correia, GAQI - http://joaocorreia.pt
//
// License: LGPL
//
// Bug fixes: Brian Stevenson, yadaDROP LLC - http://yadadrop.com
//
////////////////////////////////////////////////////

class GA_Parse
{

  var $campaign_source;    	// Campaign Source
  var $campaign_name;  		// Campaign Name
  var $campaign_medium;    	// Campaign Medium
  var $campaign_content;   	// Campaign Content
  var $campaign_term;      	// Campaign Term

  var $first_visit;      	// Date of first visit
  var $previous_visit;		// Date of previous visit
  var $current_visit_started;	// Current visit started at
  var $times_visited;		// Times visited
  
  
  function __construct($cookie) {
     if (isset($cookie["__utmz"])) {
       $this->utmz = $cookie["__utmz"];
     }
     if (isset($cookie["__utma"])) {
       $this->utma = $cookie["__utma"];
     }
       $this->ParseCookies();
  }

  function ParseCookies(){
 // Parse __utmz cookie
 if (isset($this->utmz)) {
   preg_match("((\d+)\.(\d+)\.(\d+)\.(\d+)\.(.*))", $this->utmz, $matches);
   $domain_hash = $matches[1];
   $timestamp = $matches[2];
   $session_number = $matches[3];
   $campaign_numer = $matches[4];
   $campaign_data = $matches[5];

   // Parse the campaign data
   $campaign_data = parse_str(strtr($campaign_data, "|", "&"));
 }

  $this->campaign_source = isset($utmcsr) ? $utmcsr : '';
  $this->campaign_name = isset($utmccn) ? $utmccn : '';
  $this->campaign_medium = isset($utmcmd) ? $utmcmd : '';
  $this->campaign_term = isset($utmctr) ? $utmctr : '';
  $this->campaign_content = isset($utmcct) ? $utmcct : '';

  // You should tag you campaigns manually to have a full view
  // of your adwords campaigns data. 
  // The same happens with Urchin, tag manually to have your campaign data parsed properly.
  
  if(isset($utmgclid)) {
    $this->campaign_source = "google";
    $this->campaign_name = "";
    $this->campaign_medium = "cpc";
    $this->campaign_content = "";
    $this->campaign_term = $utmctr;
  }

  // Parse the __utma Cookie
  if (isset($this->utma)) {
     list($domain_hash,$random_id,$time_initial_visit,$time_beginning_previous_visit,$time_beginning_current_visit,$session_counter) = preg_split('[\.]', $this->utma);
  }

  $this->first_visit = isset($time_initial_visit) ? date("m/d/Y g:i:s A",$time_initial_visit) : '';
  $this->previous_visit = isset($time_beginning_previous_visit) ? date("m/d/Y g:i:s A",$time_beginning_previous_visit) : '';
  $this->current_visit_started = isset($time_beginning_current_visit) ? date("m/d/Y g:i:s A",$time_beginning_current_visit) : '';
  $this->times_visited = isset($session_counter) ? $session_counter : '';

 // End ParseCookies
 }  

// End GA_Parse
}
