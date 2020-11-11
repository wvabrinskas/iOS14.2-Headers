/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:13 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ITMLKit/ITMLKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSAttributedString, NSString;

@interface IKTextParser : NSObject <NSCopying> {

	NSAttributedString* _attributedString;

}

@property (nonatomic,retain,readonly) NSString * string; 
@property (nonatomic,retain,readonly) NSAttributedString * attributedString;              //@synthesize attributedString=_attributedString - In the implementation block
+(id)textWithDOMElement:(id)arg1 usingParseBlock:(/*^block*/id)arg2 ;
+(id)textWithAttributedString:(id)arg1 ;
-(NSAttributedString *)attributedString;
-(unsigned long long)hash;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)string;
-(id)attributedStringWithFont:(id)arg1 foregroundColor:(id)arg2 textAlignment:(long long)arg3 style:(id)arg4 ;
-(id)attributedStringWithFont:(id)arg1 style:(id)arg2 ;
-(id)attributedStringWithFontHandler:(/*^block*/id)arg1 style:(id)arg2 ;
-(id)attributedStringWithFontHandler:(/*^block*/id)arg1 style:(id)arg2 defaultAttributes:(id*)arg3 ;
-(id)attributedStringWithFontHandler:(/*^block*/id)arg1 style:(id)arg2 foregroundColor:(id)arg3 textAlignment:(long long)arg4 ;
-(id)attributedStringWithFontHandler:(/*^block*/id)arg1 style:(id)arg2 foregroundColor:(id)arg3 textAlignment:(long long)arg4 defaultAttributes:(id*)arg5 ;
-(id)_attributedStringFromDomElement:(id)arg1 usingParseBlock:(/*^block*/id)arg2 ;
-(id)_attributesWithFont:(id)arg1 style:(id)arg2 ;
-(id)_attributedStringWithDefaultAttributes:(id)arg1 fontHandler:(/*^block*/id)arg2 style:(id)arg3 ;
-(id)_attributesWithFont:(id)arg1 style:(id)arg2 foregroundColor:(id)arg3 textAlignment:(long long)arg4 ;
-(id)_stringFromDateElement:(id)arg1 unformattedString:(id)arg2 ;
-(id)_stringFromDurationElement:(id)arg1 unformattedString:(id)arg2 ;
-(id)_stringFromNumberElement:(id)arg1 unformattedString:(id)arg2 ;
@end
