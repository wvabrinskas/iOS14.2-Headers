/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:16 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <VoiceServices/VoiceServices-Structs.h>
@class NSArray, NSString;

@interface VSTextPreProcessor : NSObject {

	NSArray* _rules;
	NSString* _languageID;
	CFStringTokenizerRef _tokenizer;

}
-(id)initWithContentsOfPath:(id)arg1 languageIdentifier:(id)arg2 ;
-(id)processedTextFromString:(id)arg1 ;
-(void)dealloc;
@end

