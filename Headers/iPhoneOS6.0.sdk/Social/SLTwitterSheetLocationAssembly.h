/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Social.framework/Social
 */

#import "Social-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSDictionary, UIImageView, UIView, UIButton;

__attribute__((visibility("hidden")))
@interface SLTwitterSheetLocationAssembly : XXUnknownSuperclass {
@private
	int _geotagStatus;
	UIView* _assemblyView;
	UIButton* _locationButton;
	UIImageView* _locationImageView;
	UIButton* _locationLabel;
	UIButton* _cancelLocationButton;
	NSDictionary* _locationInfo;
	id _locationAssemblyDelegate;
	BOOL _usingLocationOverride;
}
@property(readonly, assign, nonatomic) UIView* assemblyView;	// @synthesize=_assemblyView
@property(assign, nonatomic) int geotagStatus;	// @synthesize=_geotagStatus
@property(assign, nonatomic) __weak id locationAssemblyDelegate;	// @synthesize=_locationAssemblyDelegate
@property(readonly, assign, nonatomic) CGSize locationImageSize;
@property(retain, nonatomic) NSDictionary* locationInfo;	// @synthesize=_locationInfo
@property(assign, nonatomic) BOOL usingLocationOverride;	// @synthesize=_usingLocationOverride
-(id)init;
-(void).cxx_destruct;
// declared property getter: -(id)assemblyView;
-(void)cancelLocationButtonTapped:(id)tapped;
// declared property getter: -(int)geotagStatus;
// declared property getter: -(id)locationAssemblyDelegate;
-(void)locationButtonTapped:(id)tapped;
// declared property getter: -(CGSize)locationImageSize;
// declared property getter: -(id)locationInfo;
// declared property setter: -(void)setGeotagStatus:(int)status;
// declared property setter: -(void)setLocationAssemblyDelegate:(id)delegate;
// declared property setter: -(void)setLocationInfo:(id)info;
-(void)setLocationLabelText:(id)text;
// declared property setter: -(void)setUsingLocationOverride:(BOOL)override;
-(void)updateAssembly;
-(void)updateLocationImage;
// declared property getter: -(BOOL)usingLocationOverride;
@end

