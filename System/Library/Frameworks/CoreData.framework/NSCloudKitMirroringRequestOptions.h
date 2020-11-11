/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:48 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class CKOperationConfiguration;

@interface NSCloudKitMirroringRequestOptions : NSObject {

	CKOperationConfiguration* _operationConfiguration;

}

@property (nonatomic,retain) CKOperationConfiguration * operationConfiguration;              //@synthesize operationConfiguration=_operationConfiguration - In the implementation block
@property (assign,nonatomic) long long qualityOfService; 
@property (assign,nonatomic) BOOL allowsCellularAccess; 
-(void)setQualityOfService:(long long)arg1 ;
-(id)init;
-(CKOperationConfiguration *)operationConfiguration;
-(long long)qualityOfService;
-(void)setAllowsCellularAccess:(BOOL)arg1 ;
-(BOOL)allowsCellularAccess;
-(void)setOperationConfiguration:(CKOperationConfiguration *)arg1 ;
-(id)copy;
-(void)dealloc;
@end
