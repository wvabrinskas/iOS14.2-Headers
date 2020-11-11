/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:57 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/OADFill.h>

@class OADColor;

@interface OADSolidFill : OADFill {

	OADColor* mColor;
	BOOL mIsColorOverridden;

}
+(id)defaultProperties;
+(id)blackFill;
+(id)whiteFill;
-(unsigned long long)hash;
-(void)setColor:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithDefaults;
-(id)color;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isColorOverridden;
-(void)setStyleColor:(id)arg1 ;
-(void)fixPropertiesForChangingParentPreservingEffectiveValues:(id)arg1 ;
-(BOOL)isAnythingOverridden;
-(void)removeUnnecessaryOverrides;
-(BOOL)usesPlaceholderColor;
@end
