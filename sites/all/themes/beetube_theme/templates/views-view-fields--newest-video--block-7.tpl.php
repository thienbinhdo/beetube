<?php

/**
 * @file
 * Default simple view template to all the fields as a row.
 *
 * - $view: The view in use.
 * - $fields: an array of $field objects. Each one contains:
 *   - $field->content: The output of the field.
 *   - $field->raw: The raw data for the field, if it exists. This is NOT output safe.
 *   - $field->class: The safe class id to use.
 *   - $field->handler: The Views field handler object controlling this field. Do not use
 *     var_export to dump this object, as it can't handle the recursion.
 *   - $field->inline: Whether or not the field should be inline.
 *   - $field->inline_html: either div or span based on the above flag.
 *   - $field->wrapper_prefix: A complete wrapper containing the inline_html to use.
 *   - $field->wrapper_suffix: The closing tag for the wrapper.
 *   - $field->separator: an optional separator that may appear before a field.
 *   - $field->label: The wrap label text to use.
 *   - $field->label_html: The full HTML of the label to use including
 *     configured element type.
 * - $row: The raw result object from the query, with all data it fetched.
 *
 * @ingroup views_templates
 */
$account = 'http://'.$_SERVER['SERVER_NAME'].'/'.'beetube'.'/user/'. $row->node_comment_statistics_last_comment_uid;
?>
<div class="type-post">
	<div id="video">
		<div class="screen fluid-width-video-wrapper">
			<div class="wp-video-shortcode-wrapper meplayer">
				<div class="mejs-mediaelement">
					<?php print $fields['field_media_link_video']->content; ?>
				</div>
			</div>
		</div>
	</div> <!-- #video -->

	<div class="entry-header cf">
		<div class="inner cf">
			<h1 class="entry-title"><?php print $fields['field_subtitle']->content; ?></h1>
			<div class="entry-meta">
				<span class="author">
					<a href="<?php print $account ?>" title="Posts by admin" rel="author">admin</a>
				</span>
				<time class="entry-date"><?php print $fields['created']->content; ?></time>
				<span class="stats">
					<span class="views">
						<i class="count"><?php print $fields['totalcount']->content; ?></i> 
						<span class="suffix"></span>
					</span>
					<span class="comments"> 
						<i class="count"><?php print $fields['comment_count']->content; ?></i>	
						<span class="suffix"></span>
					</span>
					<span class="jtheme-post-likes likes liked">
						<i class="count"><?php print $fields['count']->content; ?></i> 
						<span class="suffix"></span>
					</span>
				</span>
			</div>
			<div class="entry-actions">
				<span class="jtheme-like-post">
					<?php print $fields['ops']->content; ?>
				</span>
			</div>
			<div id="social-share">
				<?php
					$block =block_load('block',6);
					$output = drupal_render(_block_get_renderable_array(_block_render_blocks(array($block))));
					print $output;
				?>
				<?php
					$block =block_load('block',7);
					$output = drupal_render(_block_get_renderable_array(_block_render_blocks(array($block))));
					print $output;
				?>
				<?php
					$block =block_load('block',8);
					$output = drupal_render(_block_get_renderable_array(_block_render_blocks(array($block))));
					print $output;
				?>
				<?php
					$block =block_load('block',9);
					$output = drupal_render(_block_get_renderable_array(_block_render_blocks(array($block))));
					print $output;
				?>
			</div>
		</div>
	</div> <!-- .entry-header -->

	<div id="details" class="section-box">
		<div class="section-content">
			<div id="info" class="more-less" data-less-height="100" style="height: 100px;">
				<div class="entry-content rich-content">
					<?php print $fields['body']->content; ?>
				</div>
				<div id="extras">
					<div>
						<h4>Category:</h4>
						<?php print $fields['field_category']->content; ?>
					</div>
					<div>
						<h4>Tags:</h4>
						<?php print $fields['field_tags']->content; ?>
					</div>			
				</div>
			</div><!-- end #info -->
		</div> <!-- end .section-content -->
		
		<div class="info-toggle">
			<a href="#" class="info-toggle-button">
				<span class="more-text">Show less</span> 
				<span class="less-text">Show more</span>
			</a>
		</div> <!-- end .info-toogle-->
	</div> <!-- #details -->
</div>	