<?php

/**
 * @file
 * Default theme implementation to display a node.
 *
 * Available variables:
 * - $title: the (sanitized) title of the node.
 * - $content: An array of node items. Use render($content) to print them all,
 *   or print a subset such as render($content['field_example']). Use
 *   hide($content['field_example']) to temporarily suppress the printing of a
 *   given element.
 * - $user_picture: The node author's picture from user-picture.tpl.php.
 * - $date: Formatted creation date. Preprocess functions can reformat it by
 *   calling format_date() with the desired parameters on the $created variable.
 * - $name: Themed username of node author output from theme_username().
 * - $node_url: Direct URL of the current node.
 * - $display_submitted: Whether submission information should be displayed.
 * - $submitted: Submission information created from $name and $date during
 *   template_preprocess_node().
 * - $classes: String of classes that can be used to style contextually through
 *   CSS. It can be manipulated through the variable $classes_array from
 *   preprocess functions. The default values can be one or more of the
 *   following:
 *   - node: The current template type; for example, "theming hook".
 *   - node-[type]: The current node type. For example, if the node is a
 *     "Blog entry" it would result in "node-blog". Note that the machine
 *     name will often be in a short form of the human readable label.
 *   - node-teaser: Nodes in teaser form.
 *   - node-preview: Nodes in preview mode.
 *   The following are controlled through the node publishing options.
 *   - node-promoted: Nodes promoted to the front page.
 *   - node-sticky: Nodes ordered above other non-sticky nodes in teaser
 *     listings.
 *   - node-unpublished: Unpublished nodes visible only to administrators.
 * - $title_prefix (array): An array containing additional output populated by
 *   modules, intended to be displayed in front of the main title tag that
 *   appears in the template.
 * - $title_suffix (array): An array containing additional output populated by
 *   modules, intended to be displayed after the main title tag that appears in
 *   the template.
 *
 * Other variables:
 * - $node: Full node object. Contains data that may not be safe.
 * - $type: Node type; for example, story, page, blog, etc.
 * - $comment_count: Number of comments attached to the node.
 * - $uid: User ID of the node author.
 * - $created: Time the node was published formatted in Unix timestamp.
 * - $classes_array: Array of html class attribute values. It is flattened
 *   into a string within the variable $classes.
 * - $zebra: Outputs either "even" or "odd". Useful for zebra striping in
 *   teaser listings.
 * - $id: Position of the node. Increments each time it's output.
 *
 * Node status variables:
 * - $view_mode: View mode; for example, "full", "teaser".
 * - $teaser: Flag for the teaser state (shortcut for $view_mode == 'teaser').
 * - $page: Flag for the full page state.
 * - $promote: Flag for front page promotion state.
 * - $sticky: Flags for sticky post setting.
 * - $status: Flag for published status.
 * - $comment: State of comment settings for the node.
 * - $readmore: Flags true if the teaser content of the node cannot hold the
 *   main body content.
 * - $is_front: Flags true when presented in the front page.
 * - $logged_in: Flags true when the current user is a logged-in member.
 * - $is_admin: Flags true when the current user is an administrator.
 *
 * Field variables: for each field instance attached to the node a corresponding
 * variable is defined; for example, $node->body becomes $body. When needing to
 * access a field's raw values, developers/themers are strongly encouraged to
 * use these variables. Otherwise they will have to explicitly specify the
 * desired field language; for example, $node->body['en'], thus overriding any
 * language negotiation rule that was previously applied.
 *
 * @see template_preprocess()
 * @see template_preprocess_node()
 * @see template_process()
 *
 * @ingroup themeable
 */
$account = 'http://'.$_SERVER['SERVER_NAME'].'/'.'beetube'.'/user/'. $node->name;
$counter_view = explode(' reads',$content['links']['statistics']['#links']['statistics_counter']['title']);
$like = 0;
if($node->type == 'article') {
	$node_id = $node->nid;
	$like = flag_get_counts('node',$node_id,$reset = FALSE);
	$like = $like['like'];
	if($like == null)
		$like = 0;
	else
		$like = $like['like'];
}
?>
<div id="node-<?php print $node->nid; ?>" class="single-post <?php print $classes; ?> clearfix"<?php print $attributes; ?>>
  <?php print $user_picture; ?>
  <?php print render($title_prefix); ?>
  <?php if (!$page): ?>
    <h2 <?php print $title_attributes; ?>>
    	<a href="<?php print $node_url; ?>"><?php print $title; ?></a>
    </h2>
  <?php endif; ?>
  <?php print render($title_suffix); ?>

	<div class="content type-post"<?php print $content_attributes; ?>>
		<div class="video">
			<?php print render($content['field_media_link_video']); ?>
		</div><!-- end .video -->
		<div class="clear"></div>
		<div class="entry-header cf">
			<div class="inner cf">
				<h1 class="entry-title"><?php print render($content['field_subtitle']); ?></h1>
				<div class="entry-meta">
					<?php if ($display_submitted): ?>
				        <span class="author">
				        	<a href="<?php print $account ?>" title="Posts by admin" rel="author"><?php print $node->name; ?></a>
				        </span><!-- author --> 
			 			<span class="time"><?php echo date("jS M , Y", $node->created); ?></span>
			        	<span class="stats">
			        		<span class="views"><?php print $counter_view[0]; ?></span>
			        		<span class="comments">
			        			<i class="count"><?php print $node->comment_count; ?> </i>
			        		</span>
			        		<span class="jtheme-post-likes likes"><?php print $like; ?></span>
			        	</span> 
		        	<?php endif; ?>  
		      	</div>
		      	<div class="entry-actions">
		      		<span class="jtheme-like-post">
		      			<?php if(!empty($content['links']))
		      				unset($content['links']['statistics']['#links']['statistics_counter']['title']);/*hide total view*/
		      				print render($content['links']);
		      			?>
		      		</span>
		      	</div>
		      	<div id="social-share">
			      	<div class="social-share">
			      		<?php
							$block =block_load('block',6);
							$output = drupal_render(_block_get_renderable_array(_block_render_blocks(array($block))));
							print $output;
						?>
			      	</div>
			      	<div class="social-share">
			      		<?php
							$block =block_load('block',7);
							$output = drupal_render(_block_get_renderable_array(_block_render_blocks(array($block))));
							print $output;
						?>
			      	</div>
			      	<div class="social-share">
			      		<?php
							$block =block_load('block',8);
							$output = drupal_render(_block_get_renderable_array(_block_render_blocks(array($block))));
							print $output;
						?>
			      	</div>
			      	<div class="social-share">
			      		<?php
							$block =block_load('block',9);
							$output = drupal_render(_block_get_renderable_array(_block_render_blocks(array($block))));
							print $output;
						?>
			      	</div>
		      	</div>	
			</div><!-- end .inner cf -->
		</div>
		<div id="details" class="section-box">
			<div class="section-content">
				<div id="info" class="more-less" data-less-height="100" style="height: 100px;">
					<div class="entry-content rich-content">
						<?php print render($content['body']); ?>
					</div>
					<div id="extras">
						<div>
							<h4>Category:</h4>
							<?php print render($content['field_category']); ?>
						</div>
						<div>
							<h4>Tags:</h4>
							<?php print render($content['field_tags']); ?>
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
	    <?php //print render($comment); dpm($comment); ?>
	</div>
</div>