<?php

/**
 * @file
 * Default simple view template to display a list of rows.
 *
 * @ingroup views_templates
 */
?>
<div class="section-header">
	<h2 class="section-title">
		<?php print $view->query->pager->display->display_options['block_description'] ;?>
	</h2>
</div>
<div class="section-content grid-medium">
	<div class="nag cf">
		<?php foreach ($rows as $id => $row): ?>
			<div class="item cf item-video"><?php print $row; ?></div>
		<?php endforeach; ?>
	</div>
	<div class="view-all"><a class="more-link" href="http://beetube.me/category/hd/"><span>View All </span></a></div>
</div
