/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:09 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <iTunesStoreUI/SUScriptObject.h>

@class ACAccountType, NSString;

@interface SUScriptAppleAccountType : SUScriptObject {

	ACAccountType* _accountType;

}

@property (nonatomic,readonly) ACAccountType * nativeAccountType;              //@synthesize accountType=_accountType - In the implementation block
@property (readonly) id accessGranted; 
@property (readonly) NSString * accountTypeDescription; 
@property (readonly) NSString * identifier; 
+(void)initialize;
+(id)webScriptNameForKeyName:(id)arg1 ;
-(NSString *)identifier;
-(id)accessGranted;
-(NSString *)accountTypeDescription;
-(id)_className;
-(id)attributeKeys;
-(void)dealloc;
-(id)scriptAttributeKeys;
-(ACAccountType *)nativeAccountType;
-(id)initWithACAccountType:(id)arg1 ;
@end

