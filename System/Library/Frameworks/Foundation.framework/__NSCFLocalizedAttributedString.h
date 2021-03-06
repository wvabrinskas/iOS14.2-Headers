/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:27 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSString.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSAttributedString, NSDictionary;

@interface __NSCFLocalizedAttributedString : NSString <NSSecureCoding> {

	NSAttributedString* _original;
	NSDictionary* _formatConfiguration;

}
+(const CFStringRef)createStringRequiringInflectionWithFormat:(CFStringRef)arg1 formatOptions:(CFDictionaryRef)arg2 arguments:(char*)arg3 ;
+(const CFStringRef)copyStringWithMarkup:(CFStringRef)arg1 formatConfiguration:(CFDictionaryRef)arg2 ;
+(id)whitelistedStringWithAttributedString:(id)arg1 ;
-(unsigned long long)fastestEncoding;
-(const unsigned short*)_fastCharacterContents;
-(BOOL)isEqualToString:(id)arg1 ;
-(void)getCharacters:(unsigned short*)arg1 range:(NSRange)arg2 ;
-(id)substringWithRange:(NSRange)arg1 ;
-(id)initWithAttributedStringMarkup:(id)arg1 formatConfiguration:(id)arg2 ;
-(id)substringToIndex:(unsigned long long)arg1 ;
-(unsigned short)characterAtIndex:(unsigned long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)length;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)_initWithAttributedString:(id)arg1 ;
-(id)__baseAttributedString;
-(id)substringFromIndex:(unsigned long long)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)compare:(id)arg1 options:(unsigned long long)arg2 range:(NSRange)arg3 locale:(id)arg4 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(const char*)_fastCStringContents:(BOOL)arg1 ;
-(Class)classForCoder;
-(void)dealloc;
@end

