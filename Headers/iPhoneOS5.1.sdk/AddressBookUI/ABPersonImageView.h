/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

#import "AddressBookUI-Structs.h"
#import "ABPasteboardControl.h"

@class ABImageWellLabelView, NSOperation, UIImage, ABClippingImageView, NSOperationQueue, NSMutableDictionary;
@protocol ABPersonImageDataDelegate, ABStyleProvider;

@interface ABPersonImageView : ABPasteboardControl {
@private
	void* _displayedPerson;
	ABClippingImageView* _personImageView;
	ABClippingImageView* _wellBorderView;
	ABClippingImageView* _currentBorderView;
	ABClippingImageView* _outlineBorderView;
	ABClippingImageView* _pressedView;
	ABClippingImageView* _pasteboardMaskImageView;
	ABImageWellLabelView* _wellLabel;
	void* _personImageDataCache;
	UIImage* _personImage;
	UIImage* _defaultOrganizationImage;
	UIImage* _imageWellImage;
	UIImage* _outlineImage;
	UIImage* _maskImage;
	UIImage* _pressedImage;
	UIImage* _editOverlayImage;
	UIImage* _wellBorderImage;
	UIImage* _pasteboardMaskImage;
	UIImage* _genericPersonImage;
	BOOL _allowsEditing;
	BOOL _isEditing;
	BOOL _showLabel;
	BOOL _scalesContentToFit;
	BOOL _multiplePhotoBackdropEnabled;
	BOOL _shouldPickBestImage;
	BOOL _needsReflow;
	BOOL _needsReload;
	id<ABStyleProvider> _styleProvider;
	void* _backgroundLoadingAddressBook;
	void* _backgroundLoadingPerson;
	NSOperationQueue* _backgroundLoadingQueue;
	NSOperation* _backgroundLoadingOperation;
	NSMutableDictionary* _imageCache;
	id<ABPersonImageDataDelegate> _imageDataDelegate;
}
@property(assign, nonatomic) BOOL allowsEditing;	// @synthesize=_allowsEditing
@property(retain, nonatomic) NSOperation* asyncImageLoadingOperation;	// @synthesize=_backgroundLoadingOperation
@property(retain, nonatomic) NSOperationQueue* asyncImageLoadingQueue;	// @synthesize=_backgroundLoadingQueue
@property(assign, nonatomic) void* backgroundLoadingAddressBook;	// @synthesize=_backgroundLoadingAddressBook
@property(assign, nonatomic) void* backgroundLoadingPerson;	// @synthesize=_backgroundLoadingPerson
@property(assign, nonatomic) id<ABPersonImageDataDelegate> imageDataDelegate;	// @synthesize=_imageDataDelegate
@property(retain, nonatomic) NSMutableDictionary* imageLoadingCache;	// @synthesize=_imageCache
@property(readonly, retain, nonatomic) UIImage* maskImage;
@property(readonly, retain, nonatomic) UIImage* outlineImage;
@property(assign, nonatomic) BOOL scalesContentToFit;	// @synthesize=_scalesContentToFit
@property(assign, nonatomic) BOOL shouldPickBestImage;	// @synthesize=_shouldPickBestImage
@property(retain, nonatomic) id<ABStyleProvider> styleProvider;	// @synthesize=_styleProvider
+(id)newImageWithName:(id)name;
+(CGSize)sizeForOptimalPerformance;
-(id)initWithFrame:(CGRect)frame;
-(float)_borderViewAlpha;
-(id)_newDictionaryWithImageData;
-(id)_supportedPasteboardImageTypesIncludingCustomTypes:(BOOL)types;
-(void)abMenuControllerWillHide;
-(void)abMenuControllerWillShow:(id)abMenuController;
-(BOOL)abShouldShowMenu;
// declared property getter: -(BOOL)allowsEditing;
// declared property getter: -(id)asyncImageLoadingOperation;
// declared property getter: -(id)asyncImageLoadingQueue;
// declared property getter: -(void*)backgroundLoadingAddressBook;
// declared property getter: -(void*)backgroundLoadingPerson;
-(BOOL)canPerformAction:(SEL)action withSender:(id)sender;
-(void)copy:(id)copy;
-(id)copyDefaultImageForPerson:(void*)person;
-(id)copyImageForPerson:(void*)person withFrameSize:(CGSize)frameSize operation:(id)operation cache:(id)cache;
-(void)dealloc;
-(void*)displayedPerson;
-(id)editOverlayImage;
-(void)finishedEditingAnimation;
-(id)genericOrganizationImage;
-(id)genericPersonImage;
-(BOOL)genericPlaceholderImageShouldApplyMaskAndOverlay;
-(BOOL)hasImageToDisplay;
// declared property getter: -(id)imageDataDelegate;
-(CGRect)imageFrameForBounds:(CGRect)bounds;
// declared property getter: -(id)imageLoadingCache;
-(void)layoutSubviews;
// declared property getter: -(id)maskImage;
-(id)outlineBorderView;
// declared property getter: -(id)outlineImage;
-(void)paste:(id)paste;
-(id)pasteboardMaskImage;
-(id)pasteboardMaskImageView;
-(id)pressedImage;
-(id)pressedView;
-(void)reflow;
-(void)reflowIfNeeded;
-(void)reload;
-(void)reloadIfNeeded;
// declared property getter: -(BOOL)scalesContentToFit;
// declared property setter: -(void)setAllowsEditing:(BOOL)editing;
// declared property setter: -(void)setAsyncImageLoadingOperation:(id)operation;
// declared property setter: -(void)setAsyncImageLoadingQueue:(id)queue;
// declared property setter: -(void)setBackgroundLoadingAddressBook:(void*)book;
// declared property setter: -(void)setBackgroundLoadingPerson:(void*)person;
-(void)setBackgroundLoadingQueue:(id)queue addressBook:(void*)book;
-(void)setBackgroundLoadingQueue:(id)queue addressBook:(void*)book cache:(id)cache;
-(void)setDisplayedPerson:(void*)person;
-(void)setHighlighted:(BOOL)highlighted;
// declared property setter: -(void)setImageDataDelegate:(id)delegate;
// declared property setter: -(void)setImageLoadingCache:(id)cache;
-(void)setIsEditing:(BOOL)editing animate:(BOOL)animate;
-(void)setMultiplePhotoBackdropEnabled:(BOOL)enabled;
-(void)setNeedsReflow;
-(void)setNeedsReload;
// declared property setter: -(void)setScalesContentToFit:(BOOL)fit;
// declared property setter: -(void)setShouldPickBestImage:(BOOL)pickBestImage;
-(void)setShowsLabel:(BOOL)label animate:(BOOL)animate;
// declared property setter: -(void)setStyleProvider:(id)provider;
// declared property getter: -(BOOL)shouldPickBestImage;
-(void)sizeOverlayToFitIfNecessary:(id)fitIfNecessary;
// declared property getter: -(id)styleProvider;
-(id)wellBorderImage;
-(id)wellBorderView;
@end
