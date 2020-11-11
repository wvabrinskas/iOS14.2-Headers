/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:56 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol CKDOperationInfoDelegate <NSObject>
@property (getter=isInvalidated,nonatomic,readonly) BOOL invalidated; 
@required
-(BOOL)isInvalidated;
-(void)wasUnexpectedlyUnregisteredForOperationID:(id)arg1;
-(void)operationWithID:(id)arg1 receivedCallback:(id)arg2;

@end
