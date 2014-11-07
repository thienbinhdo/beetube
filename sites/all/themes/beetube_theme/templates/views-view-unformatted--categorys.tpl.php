<?php

/**
 * @file
 * Default simple view template to display a list of rows.
 *
 * @ingroup views_templates
 */
?>
<div class="loop-content switchable-view grid-mini">
	<div class="loop-header">
		<h1 class="loop-title">
			<span class="prefix">Category</span>
			<?php if (!empty($title)):dpm($title)?>
			  <span class="loop-subtitle"> <?php print $title; ?></span>
			<?php endif; ?>
		</h1>
	</div>
	<div class="nag cf">
		<?php foreach ($rows as $id => $row): ?>
			<div class="item cf item-video"><?php print $row; ?></div>
		<?php endforeach; ?>
	</div>
</div>
