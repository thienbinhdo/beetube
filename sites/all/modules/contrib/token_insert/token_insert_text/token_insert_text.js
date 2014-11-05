/*jshint strict:true, browser:true, curly:true, eqeqeq:true, expr:true, forin:true, latedef:true, newcap:true, noarg:true, trailing: true, undef:true, unused:true */
/*global Drupal:true, jQuery: true*/
/**
 * Behavior to add "Insert" buttons.
 */
(function ($) {
  "use strict";
  Drupal.behaviors.TokenInsertText = {
    attach: function(context) {
      function insert(event) {
        var field = $(event.target).attr('id');
        var selectbox = field.replace('button', 'select');
        var content = '[' + $('#' + selectbox ).val() + ']';
        $('#' + Drupal.settings.token_insert.buttons[field]).insertAtCursor(content);
        return event.preventDefault();
      }
      
      // Add the click handler to the insert button.
      if (typeof(Drupal.settings.token_insert) !== 'undefined') {
        for (var key in Drupal.settings.token_insert.buttons) {
          if (Drupal.settings.token_insert.buttons.hasOwnProperty(key)) {
            $(context).find("#" + key).click(insert);
          }
        }
      }
    }
  };
})(jQuery);

