/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:38 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSString;


@protocol NNMKMailboxItem <NSObject>
@property (nonatomic,retain) NSString * subject; 
@property (nonatomic,retain) NSString * preview; 
@property (assign,nonatomic) unsigned long long status; 
@required
-(NSString *)subject;
-(NSString *)preview;
-(void)setSubject:(id)arg1;
-(void)removeState:(unsigned long long)arg1;
-(unsigned long long)status;
-(void)addState:(unsigned long long)arg1;
-(void)setStatus:(unsigned long long)arg1;
-(void)setPreview:(id)arg1;
-(BOOL)checkState:(unsigned long long)arg1;

@end

