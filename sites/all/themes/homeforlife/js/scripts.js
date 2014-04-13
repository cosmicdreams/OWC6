(function ($, Drupal) {

  Drupal.behaviors.STARTER = {
    attach: function(context, settings) {
      // Get your Yeti started.
      //* Assistance from http://is.gd/t0qfL3 */
        var imageHeight, wrapperHeight, overlap, container = $('.slideshow-wrapper,.header-image');

        function centerImage() {
            imageHeight = container.find('img').height();
            wrapperHeight = container.height();
            overlap = (wrapperHeight - imageHeight) / 2;
            container.find('img').css('margin-top', overlap);
        }

        $(window).bind("load resize", centerImage);
        var el = document.getElementById('slideshow-wrapper');
        if (el.addEventListener) {
            el.addEventListener("webkitTransitionEnd", centerImage, false); // Webkit event
            el.addEventListener("transitionend", centerImage, false); // FF event
            el.addEventListener("oTransitionEnd", centerImage, false); // Opera event

            //$('.slideshow-wrapper img').css('display', 'block');
        }
    }
  };

})(jQuery, Drupal);

jQuery(function($){
  $('.block-constant-contact-1 form input[type="checkbox"]').prop('checked', true);
}, jQuery);