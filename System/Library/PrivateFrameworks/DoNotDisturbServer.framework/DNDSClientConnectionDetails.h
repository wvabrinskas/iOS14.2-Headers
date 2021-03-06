/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:13 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/DoNotDisturbServer.framework/DoNotDisturbServer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <DoNotDisturbServer/DoNotDisturbServer-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class NSUUID, NSSet;

@interface DNDSClientConnectionDetails : NSObject <NSCopying, NSMutableCopying> {

	NSUUID* _interruptionInvalidationAssertionUUID;
	NSSet* _assertionUpdateClientIdentifiers;
	BOOL _wantsStateUpdates;
	BOOL _wantsSettingsUpdates;

}

@property (nonatomic,copy,readonly) NSUUID * interruptionInvalidationAssertionUUID;              //@synthesize interruptionInvalidationAssertionUUID=_interruptionInvalidationAssertionUUID - In the implementation block
@property (nonatomic,copy,readonly) NSSet * assertionUpdateClientIdentifiers;                    //@synthesize assertionUpdateClientIdentifiers=_assertionUpdateClientIdentifiers - In the implementation block
@property (nonatomic,readonly) BOOL wantsStateUpdates;                                           //@synthesize wantsStateUpdates=_wantsStateUpdates - In the implementation block
@property (nonatomic,readonly) BOOL wantsSettingsUpdates;                                        //@synthesize wantsSettingsUpdates=_wantsSettingsUpdates - In the implementation block
-(id)init;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)_initWithInterruptionInvalidationAssertionUUID:(id)arg1 assertionUpdateClientIdentifiers:(id)arg2 wantsStateUpdates:(BOOL)arg3 wantsSettingsUpdates:(BOOL)arg4 ;
-(NSUUID *)interruptionInvalidationAssertionUUID;
-(NSSet *)assertionUpdateClientIdentifiers;
-(BOOL)wantsSettingsUpdates;
-(id)_initWithDetails:(id)arg1 ;
-(BOOL)wantsStateUpdates;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

