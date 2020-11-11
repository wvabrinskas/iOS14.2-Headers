/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:53 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <EventKitUI/EventKitUI-Structs.h>
#import <EventKitUI/EKEventDetailItem.h>

@class EKEventMapCell, MKMapItemView, UIView, CLLocation;

@interface EKEventMapDetailItem : EKEventDetailItem {

	EKEventMapCell* _cell;
	MKMapItemView* _mapView;
	UIView* _loadingView;
	CLLocation* _location;
	EKEventMapCell* _oldCell;
	BOOL _animationHasRan;
	BOOL _hasMapItemLaunchOptionFromTimeToLeaveNotification;

}

@property (assign,nonatomic) BOOL hasMapItemLaunchOptionFromTimeToLeaveNotification;              //@synthesize hasMapItemLaunchOptionFromTimeToLeaveNotification=_hasMapItemLaunchOptionFromTimeToLeaveNotification - In the implementation block
-(double)defaultCellHeightForSubitemAtIndex:(unsigned long long)arg1 forWidth:(double)arg2 ;
-(void)setHasMapItemLaunchOptionFromTimeToLeaveNotification:(BOOL)arg1 ;
-(id)cellForSubitemAtIndex:(unsigned long long)arg1 ;
-(void)_loadMapItem:(id)arg1 withCoordinateSpan:(CGPoint)arg2 ;
-(BOOL)configureWithCalendar:(id)arg1 preview:(BOOL)arg2 ;
-(void)reset;
-(BOOL)hasMapItemLaunchOptionFromTimeToLeaveNotification;
-(CGPoint)_makeSpanWithCoordinate:(CLLocationCoordinate2D)arg1 radius:(double)arg2 minRadius:(double)arg3 ;
-(void)_animateMapIfNeededWithPresentingController:(id)arg1 presentingView:(id)arg2 ;
-(double)_mapHeight;
-(void)setupMapView;
-(void)updateViewColors;
-(void)eventViewController:(id)arg1 tableViewDidScroll:(id)arg2 ;
-(id)_mapRelatedViewConstraintsForMapRelatedView:(id)arg1 inCell:(id)arg2 ;
@end
