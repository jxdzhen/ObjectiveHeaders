ObjectiveHeaders
================
The project aims to be a helper for developers that need a better understanding of iOS/MacOS SDKs.

Authors:
---------

- @loretoparisi
- @christian_zanin


Basic Usage:
---------

- Go to class-dump executable folder: class-dump-z_0.2a/
- Run the script generate_dump passing the frameworks folder and a output folder:

    generate_dump [framework root folder] [output folder]


Examples:
---------

- How to dump Xcode iOS6.0 headers from Xcode sdk:

    ./generate_dump.sh /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS6.0.sdk/System/Library/Frameworks/ iPhoneOS6.0.sdk