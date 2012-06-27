clear
FPATH=/Applications/Xcode45-DP2.app/Contents/Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS6.0.sdk/System/Library/Frameworks/
ROOTFOLDER=iPhoneOS6.0.sdk
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
