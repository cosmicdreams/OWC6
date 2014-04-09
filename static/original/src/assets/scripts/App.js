'use strict';

require('nerdery-function-bind');
require('nerdery-request-animation-frame');
var $ = require('jquery');
var DemoView = require('./views/DemoView');
var AutoReplace = require('nerdery-auto-replace');
var ExternalLinks = require('nerdery-external-links');
var HasJs = require('nerdery-has-js');

/**
 * Initial application setup. Runs once upon every page load.
 *
 * @class App
 * @constructor
 */
var App = function() {
    AutoReplace.init();
    ExternalLinks.init();
    HasJs.init();
    this.init();
};

var proto = App.prototype;

/**
 * Initializes the application and kicks off loading of prerequisites.
 *
 * @method init
 * @private
 */
proto.init = function() {
    // Create your views here
    // Pass in a jQuery reference to DOM elements that need functionality attached to them
    this.demoView = new DemoView($('.js-demo'));
};

module.exports = App;
