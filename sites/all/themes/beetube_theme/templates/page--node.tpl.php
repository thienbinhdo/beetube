<?php
/**
 * @file
 * Default theme implementation to display a single Drupal page.
 *
 * The doctype, html, head and body tags are not in this template. Instead they
 * can be found in the html.tpl.php template in this directory.
 *
 * Available variables:
 *
 * General utility variables:
 * - $base_path: The base URL path of the Drupal installation. At the very
 *   least, this will always default to /.
 * - $directory: The directory the template is located in, e.g. modules/system
 *   or themes/bartik.
 * - $is_front: TRUE if the current page is the front page.
 * - $logged_in: TRUE if the user is registered and signed in.
 * - $is_admin: TRUE if the user has permission to accessa dministration pages.
 *
 * Site identity:
 * - $front_page: The URL of the front page. Use this instead of $base_path,
 *   when linking to the front page. This includes the language domain or
 *   prefix.
 * - $logo: The path to the logo image, as defined in theme configuration.
 * - $site_name: The name of the site, empty when display has been disabled
 *   in theme settings.
 * - $site_slogan: The slogan of the site, empty when display has been disabled
 *   in theme settings.
 *
 * Navigation:
 * - $main_menu (array): An array containing the Main menu links for the
 *   site, if they have been configured.
 * - $secondary_menu (array): An array containing the Secondary menu links for
 *   the site, if they have been configured.
 * - $breadcrumb: The breadcrumb trail for the current page.
 *
 * Page content (in order of occurrence in the default page.tpl.php):
 * - $title_prefix (array): An array containing additional output populated by
 *   modules, intended to be displayed in front of the main title tag that
 *   appears in the template.
 * - $title: The page title, for use in the actual HTML content.
 * - $title_suffix (array): An array containing additional output populated by
 *   modules, intended to be displayed after the main title tag that appears in
 *   the template.
 * - $messages: HTML for status and error messages. Should be displayed
 *   prominently.
 * - $tabs (array): Tabs linking to any sub-pages beneath the current page
 *   (e.g., the view and edit tabs when displaying a node).
 * - $action_links (array): Actions local to the page, such as 'Add menu' on the
 *   menu administration interface.
 * - $feed_icons: A string of all feed icons for the current page.
 * - $node: The node object, if there is an automatically-loaded node
 *   associated with the page, and the node ID is the second argument
 *   in the page's path (e.g. node/12345 and node/12345/revisions, but not
 *   comment/reply/12345).
 *
 * Regions:
 * - $page['help']: Dynamic help text, mostly for admin pages.
 * - $page['highlighted']: Items for the highlighted content region.
 * - $page['content']: The main content of the current page.
 * - $page['sidebar_first']: Items for the first sidebar.
 * - $page['sidebar_second']: Items for the second sidebar.
 * - $page['header']: Items for the header region.
 * - $page['footer']: Items for the footer region.
 *
 * @see bootstrap_preprocess_page()
 * @see template_preprocess()
 * @see template_preprocess_page()
 * @see bootstrap_process_page()
 * @see template_process()
 * @see html.tpl.php
 *
 * @ingroup themeable
 */
?>
<header id="header" role="banner" >
	<?php if (!empty($primary_nav) || !empty($secondary_nav) || !empty($page['navigation'])): ?>
		<div id="top-nav">
		  	<div class="wrap cf">
			        <div class="tnav">
		            <?php if (!empty($primary_nav)): ?>
		              <?php print render($primary_nav); ?>
		            <?php endif; ?>
		        </div>
		            <?php if (!empty($secondary_nav)): ?>
		              <?php print render($secondary_nav); ?>
		            <?php endif; ?>
		            <div id="header-search" class="right col-sm-3">
			        	<?php if (!empty($page['navigation'])): ?>
		            	<?php print render($page['navigation']); ?>
		          	<?php endif; ?>
		          	</div>
		  	</div>
		</div>
	<?php endif; ?>
    <div class="header-secend">
	    <div class="wrap cf">
	      <div id="branding" class="navbar-header">
	        <?php if ($logo): ?>
	        <a class="logo navbar-btn pull-left" href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>">
	          <img src="<?php print $logo; ?>" alt="<?php print t('Home'); ?>" />
	        </a>
	        <?php endif; ?>

	        <?php if (!empty($site_name)): ?>
	        <a class="name navbar-brand" href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>"><?php print $site_name; ?></a>
	        <?php endif; ?>
	        <?php if (!empty($site_slogan)): ?>
	          <p class="lead"><?php print $site_slogan; ?></p>
	        <?php endif; ?>

	        <!-- .btn-navbar is used as the toggle for collapsed navbar content -->
	        <button type="button" class="navbar-toggle" data-toggle="collapse" data-target=".navbar-collapse">
	          <span class="sr-only">Toggle navigation</span>
	          <span class="icon-bar"></span>
	          <span class="icon-bar"></span>
	          <span class="icon-bar"></span>
	        </button>
	      </div> <!-- #end branding -->

	        <?php print render($page['header']); ?>
	    </div>
    </div>
</header><!-- /#page-header -->

<div id="main-nav">
	<div class="wrap cf">
		<?php if (!empty($page['highlighted'])): ?>
	        <div><?php print render($page['highlighted']); ?></div>
	      <?php endif; ?>
	</div>
</div> <!-- #main-nav -->

<div class="cat-featured wall">
	<?php if (!empty($page['top_nav'])): ?>
	    <aside role="complementary">
	        <?php print render($page['top_nav']); ?>
	    </aside>
	<?php endif; ?>
</div> <!-- .cat-featured -->

<div class="entry-header wrap cf">
	<div class="inner cf">
		
	</div>
</div>

<div id="main" class="main-container container">   
    <div class="wrap cf">
	    <?php print render($title_prefix); ?>
	    <?php if (!empty($title)): ?>
	    <?php endif; ?>
	    <?php print render($title_suffix); ?>
	    <?php print $messages; ?>
	    <?php if (!empty($tabs)): ?>
	    <?php print render($tabs); ?>
	    <?php endif; ?>
	    <?php if (!empty($action_links)): ?>
	       <ul class="action-links"><?php print render($action_links);dpm($action_links) ?></ul>
	    <?php endif; ?>

	    <div id="content">
	    	<?php print render($page['content']); ?>
    	</div>
	    <div id="sidebar">
			<?php print render($page['sidebar_second']); ?>
	    </div> 
    </div>
</div> <!-- .main-container -->

<footer id="footer">
  <?php print render($page['footer']); ?>
</footer> <!-- end footer -->

