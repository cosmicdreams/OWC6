<?php /**
 * @file
 * Default simple view template to display a list of rows.
 *
 * - $title : The title of this group of rows.  May be empty.
 * - $options['type'] will either be ul or ol.
 * @ingroup views_templates
 */
?>
<div class="slideshow-wrapper #slideshow-wrapper">
  <div class="preloader"></div>
<ul data-orbit
      data-options="animation:fade;
                    pause_on_hover:false;
                    timer:false;
                    animation_speed:900;
                    navigation_arrows:true;
                    captions:false;
                    bullets:false;">
  <?php if (!empty($title)) : ?>
    <h3><?php print $title; ?></h3>
  <?php endif; ?>
    <?php foreach ($rows as $id => $row): ?>
      <li class="<?php print $classes_array[$id]; ?>"><?php print $row; ?></li>
    <?php endforeach; ?>
</ul>
</div>