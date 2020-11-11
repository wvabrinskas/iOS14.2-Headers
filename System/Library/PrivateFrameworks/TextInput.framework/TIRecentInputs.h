/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:06 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TextInput/TextInput-Structs.h>
#import <TextInput/TILexicon.h>

@class NSString;

@interface TIRecentInputs : TILexicon {

	BOOL _needsSync;
	NSString* _filePath;

}

@property (assign,nonatomic) BOOL needsSync;                   //@synthesize needsSync=_needsSync - In the implementation block
@property (nonatomic,retain) NSString * filePath;              //@synthesize filePath=_filePath - In the implementation block
+(id)recentInputForIdentifier:(id)arg1 ;
+(void)clearRecentInputForIdentifier:(id)arg1 ;
+(void)removeInput:(id)arg1 forSystemIdentifier:(id)arg2 ;
+(void)requestLexiconForRecentInputIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
+(id)recentInputAtPath:(id)arg1 ;
+(void)requestRemovalOfLexiconForRecentInputIdentifier:(id)arg1 ;
+(id)_sanitizeRecentInputString:(id)arg1 ;
+(id)_lexiconPathForLocalIdentifier:(id)arg1 ;
+(void)storeInput:(id)arg1 forSystemIdentifier:(id)arg2 atPath:(id)arg3 ;
+(void)recentInputForIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
+(void)storeInput:(id)arg1 forLocalIdentifier:(id)arg2 ;
+(void)storeInput:(id)arg1 forSystemIdentifier:(id)arg2 ;
+(BOOL)identifierIsSystemIdentifier:(id)arg1 ;
-(NSString *)filePath;
-(BOOL)needsSync;
-(void)setNeedsSync:(BOOL)arg1 ;
-(void)storeIfNecessary;
-(id)lexiconByRemovingEntry:(id)arg1 ;
-(void)setFilePath:(NSString *)arg1 ;
-(id)lexiconWithAdditionalEntry:(id)arg1 maximumSize:(long long)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
