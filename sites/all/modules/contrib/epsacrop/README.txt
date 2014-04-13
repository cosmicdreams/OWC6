
-- SUMMARY --

EPSA Crop is a module that allows a user to choose coordinates for different styles on an image. If a user defines coordinates EPSACrop will create a image with the points.

If the user don't change the coordinates, the normal crop process is applied.

You can try the module on this demo web site : http://www.aswissidea.com (Drupal 6.x only for now)


-- REQUIRENENTS --

EPSACrop require this module enabled
 - Image

And need to install these external libraries
JCrop (http://deepliquid.com/content/Jcrop.html)
   If the Libraries module is installed, you may install the files into your libraries folder (ex.: sites/all/libraries). Otherwise, place them into the epsacrop module folder (ex.: sites/all/modules/epsacrop).

json2 (https://github.com/douglascrockford/JSON-js)
  Rename the downloaded folder into json2 and place it into either libraries (only if the module Libraries is enabled) folder (ex.: sites/all/libraries), or the epsacrop folder (ex.: sites/all/modules/epsacrop/json2). 
  You may use the minified version, but be sure to conserve the file name (json2.js).

-- INSTALLATION --

1. Extract epsacrop on your module directory (ex. sites/all/modules)
2. Download the JCrop library and install it into either the libraries folder (ex.: sites/all/libraries), or the epsacrop module folder (ex.: sites/all/modules/epsacrop)
  2.1 You would get, for example, sites/all/libraries/Jcrop or sites/all/modules/epsacrop/Jcrop
3. Download the json2 library and install it into either the libraries folder (ex.: sites/all/libraries), or the epsacrop module folder (ex.: sites/all/modules/epsacrop)
  3.1 You would get, for example, sites/all/libraries/json2 or sites/all/modules/epsacrop/json2
4. Go to admin/build/modules and enable EPSA Crop

-- CONFIGURATION --

After actived the module, check the permissions and these parts.

You can go Configuration -> Media -> Image styles and change/add a style with the Crop Dialog Effect.

For each Content Type, you should tell which Styles are show, for this you've to go in Strcture -> Content Type -> {Type} -> Manage Fields and for each field with the Widget Image, if you edit you can see a new settings.

-- TROUBLESHOOTING --

-- FAQ --

-- CONTACT --

Current maintainers:
* Yvan Marques (yvmarques) - http://drupal.org/user/298685
* gbaudoin - http://drupal.org/user/377795
