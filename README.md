# LWImporter
[![Build Status](https://travis-ci.org/sunhr/LWImporter.svg?branch=master)](https://travis-ci.org/sunhr/LWImporter)


Xcode Extension for Importing Header while Writing Objective-C Code

# Feature
![image](https://raw.githubusercontent.com/sunhr/LWImporter/master/res/function.gif)


# Building
0. Setup Code Signing for Target `LWImporterContainer` and `LWImporter` by applying your own Team
1. Build Target `LWImporter`
2. Copy all `app` and `appex` products to your `Application` folder
3. Open `LWImporterContainer.app` then close it
4. Open `Preference - Extension` of macOS, make sure `LWImporter` is selected as Xcode Source Editor
5. Restart Xcode and enjoy it, add a shortcut if you like
