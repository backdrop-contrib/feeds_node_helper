Feeds Node Helper
=================

A collection of useful Feeds Import targets and Tampers. This is how book
content can be imported and exported between Backdrop sites. It provides helpers
for the following:

* UUIDs
* Book parent based UUIDs
* Book Weights
* Content Types (by default Feeds just maps to 1 type, this allows multiple)

This also adds two Transformations to Feeds Tampers:

* Current User ID - ignores current value and changes it to the current user
  id. Useful for allowing active user to self-import content.
* Convert to GET value - ignores current value and instead allows for the use
  of a value present in the address bar at the time of import. This allows you
  to craft addresses like import/{name}?ref=123 in order to allow for importing
  certain fields using the current field as a reference (for example). There are
  a million different uses of this, here's a video showing how this tamper can
  be used: <https://www.youtube.com/watch?v=V20UTH8yo5E>.

It also comes packaged with a Feature that illustrates how to import a book
outline using this module. 1.4 will come packaged with a view that exports in the correct format to help ease migrations or at least show an example of how to do this.

Requirements
------------

* Job Scheduler <https://github.com/backdrop-contrib/job_scheduler>
* PHP safe mode is not supported, depending on your Feeds Importer configuration safe mode may cause no problems though.

Installation
------------

* Install Feeds, Feeds Admin UI.
* To get started quick, install one or all of the following Feature modules: Feeds News, Feeds Import, Feeds Fast News (more info below).
* Make sure cron is correctly configured <https://backdropcms.org/user-guide/setting-cron>
* Go to `import/` to import data.

License
-------

This project is GPL v2 software. See the LICENSE.txt file in this directory for complete text.

Maintainers
-----------

* Seeking maintainers.

Credits
-------

Drupal version currently maintained by:

* [Bryan Ollendyke](https://www.drupal.org/u/btopro)

