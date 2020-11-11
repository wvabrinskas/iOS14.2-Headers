/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:47 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <CoreData/CoreData-Structs.h>
@class NSDictionary, NSXPCStoreServerPerConnectionCache;

@interface NSXPCStoreConnectionInfo : NSObject {

	NSDictionary* _entitlements;
	NSXPCStoreServerPerConnectionCache* _cache;
	SCD_Struct_NS6 _token;
	id _userInfo;
	os_unfair_lock_s _lock;

}
-(id)entitlements;
-(id)cache;
-(id)persistentStoreCoordinator;
-(id)userInfo;
-(void)setUserInfo:(id)arg1 ;
-(id)description;
-(id)initForToken:(SCD_Struct_NS6)arg1 entitlementNames:(id)arg2 cache:(id)arg3 ;
-(SCD_Struct_NS6)auditToken;
-(void)dealloc;
@end
