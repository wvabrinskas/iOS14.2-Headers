/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:57 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/UserManagement.framework/UserManagement
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface UMLog : NSObject {

	unsigned long long _type;

}

@property (assign,nonatomic) unsigned long long type;              //@synthesize type=_type - In the implementation block
+(id)standard;
+(id)error;
+(id)info;
+(id)fault;
+(id)debug;
-(void)setType:(unsigned long long)arg1 ;
-(void)logMessage:(id)arg1 ;
-(void)logPrivateFormat:(id)arg1 ;
-(void)logPublicFormat:(id)arg1 ;
-(unsigned long long)type;
@end
