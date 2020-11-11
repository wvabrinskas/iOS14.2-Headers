/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:01 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Silex/Silex-Structs.h>
#import <libobjc.A.dylib/SXViewportChangeListener.h>
#import <libobjc.A.dylib/SXComponentControllerObserver.h>
#import <libobjc.A.dylib/SXComponentExposureMonitor.h>

@protocol SXComponentExposureMonitor <NSObject>
@required
-(void)onExposureOf:(id)arg1 traits:(unsigned long long)arg2 then:(/*^block*/id)arg3;
-(void)conditionsChanged;
-(void)onExposureOf:(id)arg1 then:(/*^block*/id)arg2;
-(void)stopTrackingExposureOfComponentView:(id)arg1;
-(void)stopTrackingExposureOfComponentView:(id)arg1;
-(void)onExposureOf:(id)arg1 traits:(unsigned long long)arg2 then:(/*^block*/id)arg3 when:(/*^block*/id)arg4;
-(void)onExposureOf:(id)arg1 then:(/*^block*/id)arg2 when:(/*^block*/id)arg3;

@end


@protocol SXHost;
@class SXViewport, NSMutableSet, NSString;

@interface SXComponentExposureMonitor : NSObject <SXViewportChangeListener, SXComponentControllerObserver, SXComponentExposureMonitor> {

	SXViewport* _viewport;
	id<SXHost> _host;
	NSMutableSet* _trackingComponents;

}

@property (nonatomic,readonly) SXViewport * viewport;                        //@synthesize viewport=_viewport - In the implementation block
@property (nonatomic,readonly) id<SXHost> host;                              //@synthesize host=_host - In the implementation block
@property (nonatomic,retain) NSMutableSet * trackingComponents;              //@synthesize trackingComponents=_trackingComponents - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(SXViewport *)viewport;
-(id<SXHost>)host;
-(void)viewport:(id)arg1 documentSizeDidChangeFromSize:(CGSize)arg2 ;
-(void)viewport:(id)arg1 dynamicBoundsDidChangeFromBounds:(CGRect)arg2 ;
-(NSMutableSet *)trackingComponents;
-(void)onExposureOf:(id)arg1 traits:(unsigned long long)arg2 then:(/*^block*/id)arg3 ;
-(void)viewport:(id)arg1 appearStateChangedFromState:(unsigned long long)arg2 ;
-(void)conditionsChanged;
-(id)initWithViewport:(id)arg1 appStateMonitor:(id)arg2 componentController:(id)arg3 host:(id)arg4 ;
-(void)beginExposure:(id)arg1 ;
-(void)onExposureOf:(id)arg1 then:(/*^block*/id)arg2 ;
-(void)stopTrackingExposureOfComponentView:(id)arg1 ;
-(void)performMonitoring;
-(void)onExposureOf:(id)arg1 traits:(unsigned long long)arg2 then:(/*^block*/id)arg3 when:(/*^block*/id)arg4 ;
-(void)trackExposureForTracking:(id)arg1 ;
-(void)endExposure:(id)arg1 ;
-(void)componentControllerDidPresent:(id)arg1 ;
-(void)onExposureOf:(id)arg1 then:(/*^block*/id)arg2 when:(/*^block*/id)arg3 ;
-(void)setTrackingComponents:(NSMutableSet *)arg1 ;
@end
