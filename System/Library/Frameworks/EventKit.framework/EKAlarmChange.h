/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:35 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <EventKit/EKObjectChange.h>
#import <libobjc.A.dylib/EKOwnerIDProviding.h>

@class EKObjectID;

@interface EKAlarmChange : EKObjectChange <EKOwnerIDProviding> {

	EKObjectID* _ownerID;

}

@property (nonatomic,readonly) EKObjectID * ownerID;              //@synthesize ownerID=_ownerID - In the implementation block
+(int)entityType;
+(void)fetchAlarmChangesInStore:(id)arg1 resultHandler:(/*^block*/id)arg2 ;
+(void)fetchAlarmChangesInSource:(id)arg1 resultHandler:(/*^block*/id)arg2 ;
+(void)fetchAlarmChangesInCalendar:(id)arg1 resultHandler:(/*^block*/id)arg2 ;
-(EKObjectID *)ownerID;
-(id)initWithChangeProperties:(id)arg1 ;
@end
