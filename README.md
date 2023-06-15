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

It also comes packaged with examples that illustrates how to import a book
outline and export book outlines using Views Data Export.

Requirements
------------

* Feeds
* Feeds Tamper
* UUID

Installation
------------

* Install this module using the official Backdrop CMS instructions at
  <https://backdropcms.org/guide/modules>
* To get started quick, install one or all of the following example modules:
  Feeds Node Helper Import, Feeds Node Helper Export.
* Go to `admin/structure/feeds` to further configure importers.

License
-------

This project is GPL v2 software. See the LICENSE.txt file in this directory for
complete text.

Maintainers
-----------

* [Herb v/d Dool](https://github.com/herbdool/)
* Seeking maintainers.

Credits
-------

Ported to Backdrop by [Herb v/d Dool](https://github.com/herbdool/).

Drupal version currently maintained by:

* [Bryan Ollendyke](https://www.drupal.org/u/btopro)
