/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:31 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/AdPlatformsCommon.framework/AdPlatformsCommon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSUUID, Protocol;


@protocol APXPCActionRequesterProtocol <NSObject>
@property (nonatomic,readonly) NSUUID * delegateID; 
@property (nonatomic,readonly) id exportedObject; 
@property (nonatomic,readonly) Protocol * exportedInterface; 
@optional
-(id)exportedObject;
-(Protocol *)exportedInterface;
-(void)extendCollectionClassesForExportedInterface:(id)arg1;
-(void)extendCollectionClassesForRemoteInterface:(id)arg1;

@required
+(id)machService;
+(BOOL)canShareConnection;
-(void)connectionInterrupted;
-(void)connectionInvalidated;
-(id)remoteObjectInterface;
-(NSUUID *)delegateID;

@end

