/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:38 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <libobjc.A.dylib/GEOPListStateCapturing.h>

@class NSString;

@interface GEOTileRequestBalancer : NSObject <GEOPListStateCapturing> {

	void* _requesters;
	void* _randomIndexGenerator;
	unsigned long long _maxRunningOperationsCount;
	unsigned long long _stateCaptureHandle;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)balancerForRequester:(id)arg1 tileKeys:(id)arg2 priorities:(id)arg3 ;
+(void)setMaxRunningOperationsCount:(unsigned long long)arg1 ;
+(unsigned long long)maxRunningOperationsCount;
-(id)captureStatePlistWithHints:(os_state_hints_s*)arg1 ;
-(void)_removeRequester:(id)arg1 ;
-(id)init;
-(void)requester:(id)arg1 updateRunningOperationsCount:(unsigned long long)arg2 ;
-(vector<(anonymous namespace)::RequesterTileKeys, std::__1::allocator<(anonymous namespace)::RequesterTileKeys> >*)requesters;
-(void)_startOperationsWithAvailableCount:(unsigned long long)arg1 ;
-(_wrap_iter<(anonymous namespace)::RequesterTileKeys *>*)_next_requester;
-(void)requester:(id)arg1 removeTileKey:(const GEOTileKey*)arg2 ;
-(void)_requester:(id)arg1 incrementRunningOperationsCount:(unsigned long long)arg2 ;
-(void)_pruneEmptyRequesters;
-(void)_requester:(id)arg1 removeTileKey:(GEOTileKey)arg2 ;
-(void)_requester:(id)arg1 updateRunningOperationsCount:(unsigned long long)arg2 ;
-(void)_startOperations;
-(void)_addRequester:(id)arg1 tileKeys:(id)arg2 priorities:(id)arg3 ;
-(void)removeRequester:(id)arg1 ;
-(void)requester:(id)arg1 updatePriority:(unsigned)arg2 tileKey:(const GEOTileKey*)arg3 ;
-(void)_requester:(id)arg1 updatePriority:(unsigned)arg2 tileKey:(GEOTileKey)arg3 ;
-(void)dealloc;
-(id)_initWithMaxRunningOperationsCount:(unsigned long long)arg1 ;
@end

