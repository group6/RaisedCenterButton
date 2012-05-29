RaisedCenterButton
==================

An example project to demonstrate how simple it is to implement a raised center button. Inspired by previous releases of Instagram and Path.

Motivation
----------

Previous examples show how you would implement it subclassing UITabBarController. The challenge is that if you actually want to use something like UIImagePickerController in your view hierarchy, the subclassed tabbar can't actually handle the transition correctly.  

This example takes a simplier approach and just layers a uibutton subclass on top of the tabbar.  

License
-------

While it's a simple example, I've add a license just to be clear that it's free to use.  See the license.txt file for details.

References
----------

* https://github.com/boctor/idev-recipes/tree/master/RaisedCenterTabBar
* http://idevrecipes.com/2010/12/16/raised-center-tab-bar-button/