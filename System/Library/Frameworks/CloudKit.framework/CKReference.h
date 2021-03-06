/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:46 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CloudKit/CloudKit-Structs.h>
#import <libobjc.A.dylib/CKRecordValue.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class CKRecordID, NSString;

@interface CKReference : NSObject <CKRecordValue, NSSecureCoding, NSCopying> {

	unsigned long long _referenceAction;
	CKRecordID* _recordID;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long referenceAction;              //@synthesize referenceAction=_referenceAction - In the implementation block
@property (nonatomic,copy,readonly) CKRecordID * recordID;                      //@synthesize recordID=_recordID - In the implementation block
+(BOOL)supportsSecureCoding;
+(int)ckdpReferenceTypeForCKReferenceAction:(unsigned long long)arg1 ;
+(unsigned long long)ckReferenceActionForCKDPRecordReferenceType:(int)arg1 ;
-(id)CKPropertiesDescription;
-(id)init;
-(id)CKDescriptionPropertiesWithPublic:(BOOL)arg1 private:(BOOL)arg2 shouldExpand:(BOOL)arg3 ;
-(unsigned long long)hash;
-(id)ckShortDescription;
-(CKRecordID *)recordID;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)debugDescription;
-(NSString *)description;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)referenceAction;
-(id)initWithRecord:(id)arg1 action:(unsigned long long)arg2 ;
-(id)initWithRecordID:(id)arg1 action:(unsigned long long)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(id)_initBare;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

