// $Id: README.txt,v 1.3.2.1 2010/12/08 07:09:05 mikegfx Exp $

CONTENTS OF THIS FILE
---------------------
* Introduction
* Requirements
* Installation
* Configuration
* Tips & Tricks
* Debugging


INTRODUCTION
------------
Current Maintainer: mikegfx <mikegfx@gmail.com>

Context Keywords is a add-on for the Context module that allows Contexts to be 
triggered by the keywords a user searched upon landing on your site.  The keywords 
are stored throughout the session allowing the condition to be activated until 
the session is ended.


Requirements
------------
- Drupal 7.x

- Context 3.0 or higher


Installation
------------
1. Copy the entire context_keywords directory the Drupal sites/[all]/modules
   directory

2. Login as an administrator. Enable the module in the "Administer" -> "Site
   Building" -> "Modules"

3. Create a new context at admin/build/context and select 'Keywords'
   to test it out.


Configuration
------------
- Seperate phrases by line.

- Use  *  as a wildcard.

- Use  ~  to exclude one or more keywords.

- Use <default> to trigger a context if no other contexts with keywords are active.


Tips & Tricks
------------
- If you are try to match a short word/acronym and concerned that it may appear within another word, 
  you can use multiple lines like such to verify a space:
  
  key
  * key
  key *
  * key *
  
  NOTE: I may look to refine this in the future.


Debugging
------------
You may test the context using a 'keywords' URL argument in one of two ways.

1. Terms seperated by a + symbol:

http://yoursite.com/?keywords=keyword1+keyword2

2. Search engine results URL(Example by searching 'Drupal' with Bing)
http://yoursite.com/?keywords=http://www.bing.com/search?q=drupal&go=&form=QBLH&qs=n&sk=&sc=8-1

NOTE: Debugging will not work correctly with Google's Live Search URL.



