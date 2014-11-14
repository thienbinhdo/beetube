<?php

/**
 * @file
 * Default simple view template to display a list of rows.
 *
 * @ingroup views_templates
 */
?>


  <h3 class="widget-title"><?php print $view->query->pager->display->display_options['block_description'] ;?></h3>

<?php foreach ($rows as $id => $row): ?>
    <?php print $row; ?>
<?php endforeach; ?>
