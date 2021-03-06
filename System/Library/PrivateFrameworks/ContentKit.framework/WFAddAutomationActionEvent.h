/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:47 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ContentKit/WFEvent.h>

@class NSString;

@interface WFAddAutomationActionEvent : WFEvent {

	unsigned _actionIndex;
	NSString* _actionIdentifier;
	NSString* _shortcutIdentifier;

}

@property (nonatomic,copy) NSString * actionIdentifier;                //@synthesize actionIdentifier=_actionIdentifier - In the implementation block
@property (nonatomic,copy) NSString * shortcutIdentifier;              //@synthesize shortcutIdentifier=_shortcutIdentifier - In the implementation block
@property (assign,nonatomic) unsigned actionIndex;                     //@synthesize actionIndex=_actionIndex - In the implementation block
+(Class)codableEventClass;
-(NSString *)actionIdentifier;
-(NSString *)shortcutIdentifier;
-(void)setShortcutIdentifier:(NSString *)arg1 ;
-(void)setActionIdentifier:(NSString *)arg1 ;
-(unsigned)actionIndex;
-(void)setActionIndex:(unsigned)arg1 ;
@end

