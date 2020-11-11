/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:04 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/Intents.framework/Intents
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Intents/Intents-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/INCodableCoding.h>

@class INCodableAttribute, NSString, INCodableDescription;

@interface INCodableAttributeDialog : NSObject <NSSecureCoding, NSCopying, INCodableCoding> {

	BOOL _defaultDialog;
	INCodableAttribute* _codableAttribute;
	NSString* _formatString;
	NSString* _formatStringID;

}

@property (assign,setter=_setCodableAttribute:,nonatomic,__weak) INCodableAttribute * _codableAttribute;              //@synthesize codableAttribute=_codableAttribute - In the implementation block
@property (nonatomic,__weak,readonly) INCodableDescription * _codableDescription; 
@property (nonatomic,copy) NSString * formatString;                                                                   //@synthesize formatString=_formatString - In the implementation block
@property (nonatomic,copy) NSString * formatStringID;                                                                 //@synthesize formatStringID=_formatStringID - In the implementation block
@property (assign,getter=isDefaultDialog,nonatomic) BOOL defaultDialog;                                               //@synthesize defaultDialog=_defaultDialog - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(INCodableAttribute *)_codableAttribute;
-(BOOL)isDefaultDialog;
-(id)__INCodableDescriptionFormatStringKey;
-(INCodableDescription *)_codableDescription;
-(NSString *)formatString;
-(NSString *)formatStringID;
-(id)dictionaryRepresentationWithLocalizer:(id)arg1 ;
-(void)_setCodableAttribute:(id)arg1 ;
-(void)setDefaultDialog:(BOOL)arg1 ;
-(void)setFormatString:(NSString *)arg1 ;
-(id)localizedDialogWithIntent:(id)arg1 tokens:(id)arg2 localizer:(id)arg3 ;
-(id)__INCodableDescriptionFormatStringDictionaryLanguageCodeKey;
-(id)localizedDialogWithIntent:(id)arg1 tokens:(id)arg2 ;
-(void)updateWithDictionary:(id)arg1 ;
-(id)__INCodableDescriptionFormatStringIDKey;
-(void)setFormatStringID:(NSString *)arg1 ;
-(unsigned long long)hash;
-(void)encodeWithCoder:(id)arg1 ;
-(id)__INCodableDescriptionFormatStringLanguageCodeKey;
-(id)dictionaryRepresentation;
-(id)localizedDialogWithIntent:(id)arg1 tokens:(id)arg2 forLanguage:(id)arg3 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)__INCodableDescriptionFormatStringDictionaryKey;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
