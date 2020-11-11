/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:44 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CloudKit/CKDatabaseOperationInfo.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class CKUploadRequestConfiguration, CKRecordID, NSString;

@interface CKMarkAssetBrokenOperationInfo : CKDatabaseOperationInfo <NSSecureCoding> {

	BOOL _touchRepairZone;
	BOOL _bypassPCSEncryptionForTouchRepairZone;
	BOOL _simulateCorruptAsset;
	BOOL _writeRepairRecord;
	CKUploadRequestConfiguration* _uploadRequestConfiguration;
	CKRecordID* _recordID;
	NSString* _field;
	long long _listIndex;

}

@property (nonatomic,retain) CKUploadRequestConfiguration * uploadRequestConfiguration;              //@synthesize uploadRequestConfiguration=_uploadRequestConfiguration - In the implementation block
@property (nonatomic,retain) CKRecordID * recordID;                                                  //@synthesize recordID=_recordID - In the implementation block
@property (nonatomic,retain) NSString * field;                                                       //@synthesize field=_field - In the implementation block
@property (assign,nonatomic) long long listIndex;                                                    //@synthesize listIndex=_listIndex - In the implementation block
@property (assign,nonatomic) BOOL touchRepairZone;                                                   //@synthesize touchRepairZone=_touchRepairZone - In the implementation block
@property (assign,nonatomic) BOOL bypassPCSEncryptionForTouchRepairZone;                             //@synthesize bypassPCSEncryptionForTouchRepairZone=_bypassPCSEncryptionForTouchRepairZone - In the implementation block
@property (assign,nonatomic) BOOL simulateCorruptAsset;                                              //@synthesize simulateCorruptAsset=_simulateCorruptAsset - In the implementation block
@property (assign,nonatomic) BOOL writeRepairRecord;                                                 //@synthesize writeRepairRecord=_writeRepairRecord - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)field;
-(CKUploadRequestConfiguration *)uploadRequestConfiguration;
-(void)setListIndex:(long long)arg1 ;
-(id)init;
-(CKRecordID *)recordID;
-(long long)listIndex;
-(void)setField:(NSString *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setTouchRepairZone:(BOOL)arg1 ;
-(BOOL)touchRepairZone;
-(BOOL)simulateCorruptAsset;
-(void)setSimulateCorruptAsset:(BOOL)arg1 ;
-(BOOL)bypassPCSEncryptionForTouchRepairZone;
-(BOOL)writeRepairRecord;
-(void)setBypassPCSEncryptionForTouchRepairZone:(BOOL)arg1 ;
-(void)setWriteRepairRecord:(BOOL)arg1 ;
-(void)setRecordID:(CKRecordID *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setUploadRequestConfiguration:(CKUploadRequestConfiguration *)arg1 ;
@end
