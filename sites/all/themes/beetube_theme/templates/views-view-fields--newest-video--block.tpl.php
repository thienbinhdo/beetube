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
/*$path = 'http://'.$_SERVER['SERVER_NAME'].'/'.'beetube'.'/'.'self-hosted';*/
$path = 'http://'.$_SERVER['SERVER_NAME'].'/'.'beetube'.'/node/'. $row->nid;
$account = 'http://'.$_SERVER['SERVER_NAME'].'/'.'beetube'.'/user/'. $row->node_comment_statistics_last_comment_uid;
/*global $user->uid;
dpm($user);*/
?>
	<div class="section-box">
		<div class="section-header">
			<h2 class="section-title">
				<span class="name">Newest Videos</span>
			</h2>
		</div>
		<div class="section-content list-large">
			<div class="nag cf item item-video">
				<div class="thumb">
				  	<a class="clip-link" href="<?php print $path; ?>">
						<span class="clip">
					      <?php print $fields['field_image']->content; ?>
					      <span class="vertical-align"></span>
					    </span>
				    	<span class="overlay"></span>
				  	</a>
					<div class="hori-like">
						<p class="stats">
							<span class="jtheme-post-likes likes">
							<i class="count"><?php print $fields['count']->content; ?></i>
							</span>
						</p>
					</div>
				</div>
				<div class="data">
					<h2 class="entry-title"><a href="#"><?php print $fields['field_subtitle']->content; ?></a></h2>
					<p class="entry-meta">
						<span class="author vcard">
						<a class="url fn n" href="<?php print $account ?>" title="View all posts by admin" rel="author">admin</a></span>
						<time class="entry-date"><?php print $fields['created']->content; ?></time>
					</p>
					<p class="stats">
						<span class="views">
							<i class="count"><?php print $fields['totalcount']->content; ?></i> 
							<span class="suffix"></span>
						</span>
						<span class="comments"> 
							<i class="count"><?php print $fields['comment_count']->content; ?></i>	
							<span class="suffix"></span>
						</span>
						<span class="jtheme-post-likes likes">
							<i class="count"><?php print $fields['count']->content; ?></i> 
							<span class="suffix"></span>
						</span>
					</p>
					<p class="entry-summary"><?php print $fields['field_description']->content; ?></p>
				</div>
			</div>
		</div>
	</div>
