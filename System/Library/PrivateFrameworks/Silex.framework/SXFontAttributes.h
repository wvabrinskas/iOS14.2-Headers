/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:59 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Silex/Silex-Structs.h>
#import <libobjc.A.dylib/SXFontAttributes.h>

@class NSString;

@interface SXFontAttributes : NSObject <SXFontAttributes> {

	NSString* _familyName;
	long long _weight;
	long long _width;
	long long _style;

}

@property (nonatomic,readonly) NSString * familyName;               //@synthesize familyName=_familyName - In the implementation block
@property (nonatomic,readonly) long long weight;                    //@synthesize weight=_weight - In the implementation block
@property (nonatomic,readonly) long long style;                     //@synthesize style=_style - In the implementation block
@property (nonatomic,readonly) long long width;                     //@synthesize width=_width - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(long long)weight;
-(long long)width;
-(unsigned long long)hash;
-(NSString *)familyName;
-(NSString *)description;
-(BOOL)isEqual:(id)arg1 ;
-(long long)style;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithFamilyName:(id)arg1 weight:(long long)arg2 width:(long long)arg3 style:(long long)arg4 ;
-(id)stringForWeight:(long long)arg1 ;
-(id)stringForWidth:(long long)arg1 ;
-(id)stringForStyle:(long long)arg1 ;
@end

