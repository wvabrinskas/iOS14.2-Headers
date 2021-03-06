/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:11 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PrivateFederatedLearning.framework/PrivateFederatedLearning
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface GPBFileDescriptor : NSObject {

	NSString* package_;
	NSString* objcPrefix_;
	unsigned char syntax_;

}

@property (nonatomic,copy,readonly) NSString * package; 
@property (nonatomic,copy,readonly) NSString * objcPrefix; 
@property (nonatomic,readonly) unsigned char syntax; 
-(NSString *)package;
-(unsigned char)syntax;
-(NSString *)objcPrefix;
-(id)initWithPackage:(id)arg1 syntax:(unsigned char)arg2 ;
-(id)initWithPackage:(id)arg1 objcPrefix:(id)arg2 syntax:(unsigned char)arg3 ;
-(void)dealloc;
@end

