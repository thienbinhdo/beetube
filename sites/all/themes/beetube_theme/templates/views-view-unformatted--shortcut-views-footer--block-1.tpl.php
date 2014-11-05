<?php

/**
 * @file
 * Default simple view template to display a list of rows.
 *
 * @ingroup views_templates
 */
?>
<div class="widget-header">
	<h3 class="widget-title">
		<?php print $view->query->pager->display->display_options['block_description'] ;?>
	</h3>
</div>
	<ul class="post-list">
	<?php foreach ($rows as $id => $row): ?>
		<li class="item cf item-video">
			<?php print $row; ?>
		</li>
	<?php endforeach; ?>
	</ul>

