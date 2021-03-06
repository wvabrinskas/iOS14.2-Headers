/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:16 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class AppleSpell, CHSpellCheckerErrorModel;

@interface CHSpellChecker : NSObject {

	AppleSpell* _spellServer;
	CHSpellCheckerErrorModel* _errorModel;

}

@property (nonatomic,retain) CHSpellCheckerErrorModel * errorModel;              //@synthesize errorModel=_errorModel - In the implementation block
+(id)sharedSpellServer;
+(id)newErrorModel;
-(id)init;
-(BOOL)isWordInUserDictionaries:(id)arg1 caseSensitive:(BOOL)arg2 ;
-(void)dealloc;
-(id)correctionsForString:(id)arg1 shouldUseErrorModel:(BOOL)arg2 forLocale:(id)arg3 ;
-(id)topCorrectionForString:(id)arg1 contextBeforeToken:(id)arg2 contextSeparator:(id)arg3 shouldUseErrorModel:(BOOL)arg4 forLanguage:(id)arg5 ;
-(CHSpellCheckerErrorModel *)errorModel;
-(void)setErrorModel:(CHSpellCheckerErrorModel *)arg1 ;
@end

