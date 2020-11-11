/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:10 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <iTunesStoreUI/SUScriptObject.h>

@class NSDictionary, NSString;

@interface SUScriptFacebookFriend : SUScriptObject {

	NSDictionary* _dictionary;

}

@property (readonly) NSString * identifier; 
@property (readonly) NSString * name; 
+(void)initialize;
+(id)webScriptNameForKeyName:(id)arg1 ;
-(NSString *)identifier;
-(NSString *)name;
-(id)initWithName:(id)arg1 ;
-(id)_className;
-(id)attributeKeys;
-(void)dealloc;
-(id)scriptAttributeKeys;
-(id)initWithFriendDictionary:(id)arg1 ;
@end
