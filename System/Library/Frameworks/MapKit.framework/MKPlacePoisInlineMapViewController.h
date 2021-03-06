/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:10 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MapKit/MKPlaceInlineMapViewController.h>
#import <libobjc.A.dylib/MKStackingViewControllerFixedHeightAware.h>

@class NSArray, _MKPlacePoisInlineMapContentView, CLLocation, NSString;

@interface MKPlacePoisInlineMapViewController : MKPlaceInlineMapViewController <MKStackingViewControllerFixedHeightAware> {

	NSArray* _fetchedMapItems;
	_MKPlacePoisInlineMapContentView* _mapContentView;
	BOOL _resizableViewsDisabled;
	CLLocation* _location;

}

@property (nonatomic,retain) CLLocation * location;                    //@synthesize location=_location - In the implementation block
@property (assign,nonatomic) BOOL resizableViewsDisabled;              //@synthesize resizableViewsDisabled=_resizableViewsDisabled - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)inlineMapWithMapItem:(id)arg1 options:(unsigned long long)arg2 ;
-(long long)preferredUserInterfaceStyle;
-(CLLocation *)location;
-(void)setLocation:(CLLocation *)arg1 ;
-(BOOL)_canShowWhileLocked;
-(void)viewDidLoad;
-(void)_updateMap;
-(void)_handleTapOnMap;
-(id)visibleMapItems;
-(void)fetchPoisForBrand;
-(BOOL)resizableViewsDisabled;
-(void)setResizableViewsDisabled:(BOOL)arg1 ;
-(void)loadView;
-(id)geoCamera;
@end

