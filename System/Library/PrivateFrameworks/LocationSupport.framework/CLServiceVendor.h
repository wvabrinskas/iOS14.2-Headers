/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:24 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/LocationSupport.framework/LocationSupport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableDictionary, NSDictionary, NSMutableSet;

@interface CLServiceVendor : NSObject {

	NSMutableDictionary* _catalog;
	NSDictionary* _serviceReplacementMap;
	NSMutableSet* _unavailableServiceNames;
	NSMutableSet* _timeCoercibleSilos;
	int _missBehavior;
	double _currentGlobalLatchedAbsoluteTimestamp;
	NSMutableDictionary* _recordingFromTriggersByTo;
	NSMutableDictionary* _recordingToTriggersByFrom;

}
+(id)sharedInstance;
+(void)initialize;
+(void)rereadConfiguration:(id)arg1 ;
-(id)init;
-(BOOL)isServiceEnabled:(id)arg1 ;
-(BOOL)isServiceRunning:(id)arg1 ;
-(id)proxyForService:(id)arg1 forClient:(id)arg2 ;
-(id)setRecordingTriggerMap:(id)arg1 outputPathBase:(id)arg2 ;
-(BOOL)isTimeCoercionEnabled;
-(BOOL)ensureServiceIsRunning:(id)arg1 ;
-(void)setCurrentGlobalLatchedAbsoluteTimestamp:(double)arg1 ;
-(id)getServiceWithName:(id)arg1 ;
-(id)proxyForService:(id)arg1 ;
-(void)retireServiceWithName:(id)arg1 ;
-(void)enableTimeCoercion;
-(void)setServiceReplacementMap:(id)arg1 missBehavior:(int)arg2 ;
-(void)dealloc;
@end
