/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:47 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CloudKit/CloudKit-Structs.h>
#import <libobjc.A.dylib/CKXPCSuitableString.h>
#import <libobjc.A.dylib/CKSQLiteItem.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, CKRecordZoneID;

@interface CKRecordID : NSObject <CKXPCSuitableString, CKSQLiteItem, NSSecureCoding, NSCopying> {

	NSString* _recordName;
	CKRecordZoneID* _zoneID;

}

@property (nonatomic,copy) NSString * recordName;                   //@synthesize recordName=_recordName - In the implementation block
@property (nonatomic,copy) CKRecordZoneID * zoneID;                 //@synthesize zoneID=_zoneID - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)isValidRecordName:(id)arg1 outError:(id*)arg2 ;
+(BOOL)supportsSecureCoding;
-(CKRecordZoneID *)zoneID;
-(id)CKPropertiesDescription;
-(id)init;
-(id)CKDescriptionPropertiesWithPublic:(BOOL)arg1 private:(BOOL)arg2 shouldExpand:(BOOL)arg3 ;
-(unsigned long long)hash;
-(id)CKXPCSuitableString;
-(id)ckShortDescription;
-(long long)compareToRecordID:(id)arg1 ;
-(void)setRecordName:(NSString *)arg1 ;
-(id)CKPropertiesDescriptionWithProperties:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)sqliteRepresentation;
-(id)initWithRecordName:(id)arg1 ;
-(NSString *)description;
-(id)initWithSqliteRepresentation:(id)arg1 ;
-(void)setZoneID:(CKRecordZoneID *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)ck_bindInStatement:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(id)initWithRecordName:(id)arg1 zoneID:(id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)recordName;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

