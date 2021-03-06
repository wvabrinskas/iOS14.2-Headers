/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:12 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MapKit/MapKit-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/GEOResourceManifestTileGroupObserver.h>

@class UIView, VKMapView, NSString;

@interface MKBasicMapView : UIView <GEOResourceManifestTileGroupObserver> {

	UIView* _hostView;
	VKMapView* _mapView;
	double _mapModeStartTime;
	double _trafficStartTime;
	BOOL _changingViewSize;
	BOOL _inactive;
	BOOL _hasRenderedSomething;
	BOOL _inBackground;

}

@property (nonatomic,readonly) VKMapView * mapView;                                          //@synthesize mapView=_mapView - In the implementation block
@property (nonatomic,readonly) UIEdgeInsets edgeInsets; 
@property (getter=isInBackground,nonatomic,readonly) BOOL inBackground;                      //@synthesize inBackground=_inBackground - In the implementation block
@property (assign,nonatomic) BOOL rendersInBackground; 
@property (assign,nonatomic) BOOL hasRenderedSomething;                                      //@synthesize hasRenderedSomething=_hasRenderedSomething - In the implementation block
@property (assign,nonatomic) double mapModeStartTime;                                        //@synthesize mapModeStartTime=_mapModeStartTime - In the implementation block
@property (assign,nonatomic) double trafficStartTime;                                        //@synthesize trafficStartTime=_trafficStartTime - In the implementation block
@property (getter=isChangingViewSize,nonatomic,readonly) BOOL changingViewSize;              //@synthesize changingViewSize=_changingViewSize - In the implementation block
@property (assign,nonatomic) BOOL inactive;                                                  //@synthesize inactive=_inactive - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isInBackground;
-(void)setInactive:(BOOL)arg1 ;
-(BOOL)isPointValidForGesturing:(CGPoint)arg1 ;
-(BOOL)inactive;
-(void)resourceManifestManagerDidChangeActiveTileGroup:(id)arg1 ;
-(void)setTrafficStartTime:(double)arg1 ;
-(UIEdgeInsets)edgeInsets;
-(void)_sceneWillEnterForeground:(id)arg1 ;
-(void)willMoveToWindow:(id)arg1 ;
-(double)calloutContainerCanvasScale;
-(void)_updateForCurrentScreen;
-(void)_finishedSnapshot:(id)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)_updateMapViewHidden;
-(void)_animateCanvasForBounds:(CGRect)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(void)_updateBackgroundState;
-(void)addCalloutSubview:(id)arg1 ;
-(void)_updateStatsForTrafficEnabledTime:(BOOL)arg1 ;
-(void)_updateBackgroundState:(long long)arg1 ;
-(void)updateStatsForTrafficEnabledTime;
-(void)didMoveToWindow;
-(void)_registerSceneNotifications;
-(void)_updateStatsForTimeSpentInCurrentMapTypeIsShowingFlyover:(BOOL)arg1 ignoreIfViewInWindow:(BOOL)arg2 ;
-(void)_didEnterBackground;
-(CGPoint)convertCoordinate:(CLLocationCoordinate2D)arg1 toPointToView:(id)arg2 ;
-(double)mapModeStartTime;
-(void)setRendersInBackground:(BOOL)arg1 ;
-(CGPoint)convertCoordinate:(CLLocationCoordinate2D)arg1 toCameraModelPointToView:(id)arg2 ;
-(CGSize)calloutContainerCanvasSize;
-(void)updateStatsForTimeSpentInCurrentMapTypeIsShowingFlyover:(BOOL)arg1 ;
-(void)_sceneDidEnterBackground:(id)arg1 ;
-(void)setHidden:(BOOL)arg1 ;
-(VKMapView *)mapView;
-(BOOL)isChangingViewSize;
-(BOOL)hasRenderedSomething;
-(void)_unregisterSceneNotifications;
-(CLLocationCoordinate2D)convertPoint:(CGPoint)arg1 toCoordinateFromView:(id)arg2 ;
-(void)setMapModeStartTime:(double)arg1 ;
-(BOOL)rendersInBackground;
-(void)updateStatsForSwitchingToMapType:(int)arg1 ;
-(double)trafficStartTime;
-(void)setHasRenderedSomething:(BOOL)arg1 ;
-(void)updateStatsForEnablingTraffic:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 andGlobe:(BOOL)arg2 shouldRasterize:(BOOL)arg3 ;
-(void)dealloc;
@end

