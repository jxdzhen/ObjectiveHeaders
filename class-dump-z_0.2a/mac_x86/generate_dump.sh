if [ -z $1 ]
	then
		echo ""
		echo "Objective C Frameworks Header Dump Generator"
		echo "Version: 1.0 Release Date: 2012-06-27"
		echo ""
		echo "Authors:"
		echo "@loretoparisi @christian_zanin"
		echo ""
 		echo "Usage:"
		echo "generate_dump <framework root folder> <output folder>"
		echo ""
		exit
fi

if [ -z $2 ]
	then
		echo "Error. Please specifify the output folder"
		echo "Usage:"
                echo "generate_dump <framework root folder> <output folder>"
                echo ""
                exit
fi

if [ ! -d $1 ] 
	then
		echo ""
		echo "Error. Framework directory does not exists"
		echo "Generally frameworks are like the following"
		echo "/Applications/Xcode.app/Contents/Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS6.0.sdk/System/Library/Frameworks/"
		echo ""
		exit
fi

#FPATH=/Applications/Xcode45-DP2.app/Contents/Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS6.0.sdk/System/Library/Frameworks/

FPATH=$1
ROOTFOLDER=$2

if [ -d $ROOTFOLDER ]
	then
 		rm $ROOTFOLDER
fi
mkdir $ROOTFOLDER
COUNTEXT="$(ls -l $FPATH | wc -l)"
echo "All frameworks are $COUNTEXT"

COUNT=0
for r in $(find $FPATH -maxdepth 1 -type d -exec ls -l "{}" \;| grep '\-rwxr\-xr\-x'  | awk '{ print $9 }')
	do
		FILE=$FPATH$r.framework/$r
		if [ -a $FILE ] 
			then
				echo "Framework is $FILE"
				let COUNT=COUNT+1
				echo "Processing $r..."
				./class-dump-z -H -k -k -S -z -o $ROOTFOLDER/$r $FPATH/$r.framework/$r
				echo "...DONE"
		fi
	done
echo "Frameworks are $COUNT"
