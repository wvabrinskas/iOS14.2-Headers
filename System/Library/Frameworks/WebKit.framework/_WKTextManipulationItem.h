/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:01 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <WebKit/WebKit-Structs.h>
@class NSString, NSDictionary, NSArray;

@interface _WKTextManipulationItem : NSObject {

	RetainPtr<NSString>* _identifier;
	RetainPtr<NSArray<_WKTextManipulationToken *> >* _tokens;

}

@property (nonatomic,copy,readonly) NSString * safari_debugDescription; 
@property (nonatomic,copy,readonly) NSString * safari_privacyPreservingDescription; 
@property (nonatomic,copy,readonly) NSDictionary * safari_dictionaryRepresentation; 
@property (nonatomic,copy,readonly) NSString * safari_jsonRepresentation; 
@property (nonatomic,copy,readonly) NSString * identifier; 
@property (nonatomic,copy,readonly) NSArray * tokens; 
@property (nonatomic,copy,readonly) NSString * debugDescription; 
+(id)safari_textManipulationItemWithTranslationResult:(id)arg1 ;
-(NSString *)safari_privacyPreservingDescription;
-(void)safari_updateTranslationRequest:(id)arg1 ;
-(id)_safari_descriptionPreservingPrivacy:(BOOL)arg1 ;
-(NSString *)safari_debugDescription;
-(NSDictionary *)safari_dictionaryRepresentation;
-(BOOL)safari_isEqualToManipulationItem:(id)arg1 includingContentEquality:(BOOL)arg2 ;
-(NSString *)safari_jsonRepresentation;
-(NSArray *)tokens;
-(id)initWithIdentifier:(id)arg1 tokens:(id)arg2 ;
-(NSString *)debugDescription;
-(NSString *)identifier;
-(BOOL)isEqualToTextManipulationItem:(id)arg1 includingContentEquality:(BOOL)arg2 ;
-(id)_descriptionPreservingPrivacy:(BOOL)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
@end
