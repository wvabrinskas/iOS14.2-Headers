/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:48:06 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/VoiceOverServices.framework/VoiceOverServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSArray, NSString;

@interface VOSCommandCategory : NSObject {

	NSArray* _commands;
	NSString* _localizedCategoryName;

}

@property (nonatomic,retain) NSArray * commands;                            //@synthesize commands=_commands - In the implementation block
@property (nonatomic,retain) NSString * localizedCategoryName;              //@synthesize localizedCategoryName=_localizedCategoryName - In the implementation block
+(id)output;
+(id)interaction;
+(id)editing;
+(id)rotor;
+(id)other;
+(id)system;
+(id)scrolling;
+(id)allCategories;
+(id)basicNavigation;
+(id)textNavigation;
+(id)advancedNavigation;
+(id)speechAndAudio;
+(id)voiceOverFeatures;
+(id)internalOnly;
+(id)handwriting;
+(id)brailleScreenInput;
+(BOOL)categories:(id)arg1 containsCommand:(id)arg2 ;
-(id)init;
-(NSString *)localizedCategoryName;
-(void)setLocalizedCategoryName:(NSString *)arg1 ;
-(NSArray *)commands;
-(void)setCommands:(NSArray *)arg1 ;
-(id)initWithCommands:(id)arg1 localizedCategoryName:(id)arg2 ;
-(BOOL)containsCommand:(id)arg1 ;
@end

