/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:14 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol MKLocationManagerOperation, OS_dispatch_group;
@class MKDirectionsRequest, GEODirectionsRequest, GEOQuickETARequest, GEOQuickETARequester, NSObject, GEORouteAttributes, NSError;

@interface MKDirections : NSObject {

	MKDirectionsRequest* _request;
	GEODirectionsRequest* _geoRequest;
	GEOQuickETARequest* _etaRequest;
	GEOQuickETARequester* _etaRequester;
	id<MKLocationManagerOperation> _locationOperation;
	NSObject*<OS_dispatch_group> _waypointsDispatchGroup;
	GEORouteAttributes* _routeAttributes;
	NSError* _previousError;

}

@property (getter=isCalculating,nonatomic,readonly) BOOL calculating; 
-(id)init;
-(void)_cleanupLocationOperation;
-(BOOL)isCalculating;
-(void)_establishCurrentLocationAndThen:(/*^block*/id)arg1 ;
-(void)_calculateDirectionsWithTraits:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_issueDirectionsRequestForOrigin:(id)arg1 destination:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)calculateDirectionsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_performWithValidCurrentLocationAndWaypointsForQuickETA:(BOOL)arg1 traits:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)_issueETARequestForOrigin:(id)arg1 destination:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_calculateETAWithTraits:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)calculateETAWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)initWithRequest:(id)arg1 ;
-(void)cancel;
-(void)dealloc;
@end
