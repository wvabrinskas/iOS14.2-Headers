/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:39 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSMutableDictionary;

@interface PKCloudRecordArrayDatabase : NSObject <NSSecureCoding> {

	NSString* _identifier;
	NSMutableDictionary* _cloudRecordByDatabaseZone;

}

@property (nonatomic,retain) NSMutableDictionary * cloudRecordByDatabaseZone;              //@synthesize cloudRecordByDatabaseZone=_cloudRecordByDatabaseZone - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)allItems;
-(void)encodeWithCoder:(id)arg1 ;
-(long long)count;
-(id)allObjects;
-(id)countByZoneID;
-(id)description;
-(id)descriptionWithDetailedOutput:(BOOL)arg1 includeItem:(BOOL)arg2 ;
-(void)addCloudRecord:(id)arg1 ;
-(void)applyCloudRecordDatabase:(id)arg1 ;
-(id)allRecordsWithRecordType:(id)arg1 ;
-(id)allRecordNames;
-(NSMutableDictionary *)cloudRecordByDatabaseZone;
-(void)setCloudRecordByDatabaseZone:(NSMutableDictionary *)arg1 ;
-(id)initWithIdentifier:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end

