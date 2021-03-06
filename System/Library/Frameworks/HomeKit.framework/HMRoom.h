/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:22 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/HMObjectMerge.h>
#import <libobjc.A.dylib/HMMutableApplicationData.h>

@class NSUUID, HMApplicationData, HMFUnfairLock, NSString, HMHome, _HMContext, NSArray;

@interface HMRoom : NSObject <NSSecureCoding, HMObjectMerge, HMMutableApplicationData> {

	HMFUnfairLock* _lock;
	NSUUID* _uniqueIdentifier;
	NSString* _name;
	NSUUID* _uuid;
	HMHome* _home;
	HMApplicationData* _applicationData;
	_HMContext* _context;

}

@property (nonatomic,retain) _HMContext * context;                             //@synthesize context=_context - In the implementation block
@property (assign,nonatomic,__weak) HMHome * home;                             //@synthesize home=_home - In the implementation block
@property (nonatomic,retain) NSUUID * uuid;                                    //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,copy,readonly) NSString * name;                           //@synthesize name=_name - In the implementation block
@property (nonatomic,copy,readonly) NSArray * accessories; 
@property (nonatomic,copy,readonly) NSUUID * uniqueIdentifier;                 //@synthesize uniqueIdentifier=_uniqueIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (copy,readonly) NSUUID * applicationDataIdentifier; 
@property (nonatomic,retain) HMApplicationData * applicationData;              //@synthesize applicationData=_applicationData - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setUuid:(NSUUID *)arg1 ;
-(void)setApplicationData:(HMApplicationData *)arg1 ;
-(id)init;
-(HMApplicationData *)applicationData;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)_mergeWithNewObject:(id)arg1 operations:(id)arg2 ;
-(void)_unconfigureContext;
-(void)_unconfigure;
-(NSString *)name;
-(id)initWithName:(id)arg1 ;
-(_HMContext *)context;
-(NSUUID *)applicationDataIdentifier;
-(void)__configureWithContext:(id)arg1 home:(id)arg2 ;
-(NSUUID *)uuid;
-(void)_updateName:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)updateName:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(NSArray *)accessories;
-(id)initWithCoder:(id)arg1 ;
-(void)updateApplicationData:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(HMHome *)home;
-(void)setContext:(_HMContext *)arg1 ;
-(void)setHome:(HMHome *)arg1 ;
-(void)_updateRoomName:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)dealloc;
-(void)setName:(NSString *)arg1 ;
-(NSUUID *)uniqueIdentifier;
@end

