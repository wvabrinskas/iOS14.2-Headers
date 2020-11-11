/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:47 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NanoAudioControl.framework/NanoAudioControl
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NACRoutingController.h>

@protocol NACRoutingControllerDelegate;
@class NACXPCClient, NSString, NSArray, NACAudioRoute;

@interface NACRoutingControllerProxy : NSObject <NACRoutingController> {

	NACXPCClient* _xpcClient;
	NSString* _category;
	BOOL _isObserving;
	id<NACRoutingControllerDelegate> _delegate;
	NSArray* _availableAudioRoutes;
	NACAudioRoute* _pickedRoute;

}

@property (nonatomic,readonly) NACAudioRoute * pickedRoute;                                 //@synthesize pickedRoute=_pickedRoute - In the implementation block
@property (nonatomic,readonly) NSArray * availableAudioRoutes;                              //@synthesize availableAudioRoutes=_availableAudioRoutes - In the implementation block
@property (assign,nonatomic,__weak) id<NACRoutingControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<NACRoutingControllerDelegate>)delegate;
-(void)_applicationDidBecomeActiveNotification:(id)arg1 ;
-(void)_applicationWillResignActiveNotification:(id)arg1 ;
-(void)setDelegate:(id<NACRoutingControllerDelegate>)arg1 ;
-(id)initWithAudioCategory:(id)arg1 ;
-(NACAudioRoute *)pickedRoute;
-(void)dealloc;
-(void)beginObservingRoutes;
-(void)endObservingRoutes;
-(void)pickAudioRoute:(id)arg1 ;
-(NSArray *)availableAudioRoutes;
-(void)_audioRoutesDidChange;
@end
