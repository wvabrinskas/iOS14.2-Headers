/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:58 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/ClockKit.framework/ClockKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ClockKit/ClockKit-Structs.h>
#import <ClockKit/CLKTextProvider.h>

@class NSArray, NSString;

@interface CLKLocalizableCompoundTextProvider : CLKTextProvider {

	NSArray* _textProviders;
	NSString* _formatKey;

}
+(BOOL)supportsSecureCoding;
-(unsigned long long)hash;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)_validate;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)_sessionAttributedTextForIndex:(unsigned long long)arg1 withStyle:(id)arg2 ;
-(id)JSONObjectRepresentation;
-(id)_initWithJSONObjectRepresentation:(id)arg1 ;
-(id)_arrayOfTextProviderJSONObjectRepresentations;
-(id)initWithFormatKey:(id)arg1 textProviders:(id)arg2 ;
-(id)_localizedTextProviderWithBundle:(id)arg1 forLocalization:(id)arg2 ;
-(id)_localizedStringForKey:(id)arg1 withBundle:(id)arg2 forLocalization:(id)arg3 ;
@end

