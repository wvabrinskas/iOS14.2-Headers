/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:08 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PrototypeTools/PTRowAction.h>

@class NSString;

@interface PTRestoreDefaultSettingsRowAction : PTRowAction {

	NSString* _settingsKeyPath;

}

@property (nonatomic,readonly) NSString * settingsKeyPath;              //@synthesize settingsKeyPath=_settingsKeyPath - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)actionWithSettingsKeyPath:(id)arg1 ;
+(id)action;
-(unsigned long long)hash;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(/*^block*/id)defaultHandler;
-(NSString *)settingsKeyPath;
@end
