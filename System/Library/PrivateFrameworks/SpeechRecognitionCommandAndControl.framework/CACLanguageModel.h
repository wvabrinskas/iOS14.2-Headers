/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:44 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SpeechRecognitionCommandAndControl.framework/SpeechRecognitionCommandAndControl
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SpeechRecognitionCommandAndControl/SpeechRecognitionCommandAndControl-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSMutableDictionary, NSMutableArray, NSArray;

@interface CACLanguageModel : NSObject <NSCopying> {

	NSString* _identifier;
	NSString* _text;
	NSMutableDictionary* _attributes;
	NSMutableArray* _children;

}

@property (retain) NSString * identifier;                           //@synthesize identifier=_identifier - In the implementation block
@property (retain) NSString * text;                                 //@synthesize text=_text - In the implementation block
@property (readonly) NSMutableDictionary * attributes;              //@synthesize attributes=_attributes - In the implementation block
@property (readonly) NSArray * children;                            //@synthesize children=_children - In the implementation block
-(NSArray *)children;
-(void)setText:(NSString *)arg1 ;
-(NSString *)text;
-(NSString *)identifier;
-(id)_mutableAttributes;
-(id)description;
-(void)setIdentifier:(NSString *)arg1 ;
-(id)_mutableChildren;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSMutableDictionary *)attributes;
-(void)removeAllChildren;
-(id)initWithText:(id)arg1 identifier:(id)arg2 attributes:(id)arg3 ;
-(void)addChildLanguageModel:(id)arg1 ;
-(id)objectForAttribute:(id)arg1 ;
-(RXLanguageObjectRef)createRXLanguageObjectRef;
-(void)setObject:(id)arg1 forAttribute:(id)arg2 ;
-(id)_initWithLanguageModel:(id)arg1 ;
-(void)logTreeDescriptionWithLevel:(int)arg1 ;
@end

