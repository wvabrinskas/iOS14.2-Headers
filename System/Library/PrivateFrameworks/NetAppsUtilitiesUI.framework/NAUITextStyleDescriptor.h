/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:52 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NetAppsUtilitiesUI.framework/NetAppsUtilitiesUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NetAppsUtilitiesUI/NetAppsUtilitiesUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface NAUITextStyleDescriptor : NSObject <NSCopying> {

	BOOL _allowsAccessibilitySizes;
	BOOL _allowsSmallSizes;
	unsigned _symbolicTraits;
	NSString* _textStyle;

}

@property (nonatomic,copy,readonly) NSString * textStyle;                  //@synthesize textStyle=_textStyle - In the implementation block
@property (nonatomic,readonly) unsigned symbolicTraits;                    //@synthesize symbolicTraits=_symbolicTraits - In the implementation block
@property (nonatomic,readonly) BOOL allowsAccessibilitySizes;              //@synthesize allowsAccessibilitySizes=_allowsAccessibilitySizes - In the implementation block
@property (nonatomic,readonly) BOOL allowsSmallSizes;                      //@synthesize allowsSmallSizes=_allowsSmallSizes - In the implementation block
+(id)fontWithTextStyleDescriptor:(id)arg1 ;
+(id)defaultFontForTextStyleDescriptor:(id)arg1 ;
+(id)na_identity;
+(id)descriptorWithTextStyle:(id)arg1 ;
-(unsigned)symbolicTraits;
-(id)init;
-(unsigned long long)hash;
-(id)descriptorByDisallowingAccessibilitySizes;
-(id)description;
-(id)initWithTextStyle:(id)arg1 symbolicTraits:(unsigned)arg2 allowsAccessibilitySizes:(BOOL)arg3 allowsSmallSizes:(BOOL)arg4 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)textStyle;
-(BOOL)allowsSmallSizes;
-(id)descriptorByAddingSymbolicTraits:(unsigned)arg1 removingSymbolicTraits:(unsigned)arg2 ;
-(BOOL)allowsAccessibilitySizes;
-(id)descriptorByDisallowingSmallSizes;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
