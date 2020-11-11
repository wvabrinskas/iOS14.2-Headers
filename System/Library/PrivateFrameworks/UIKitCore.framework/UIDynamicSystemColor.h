/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:44 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIDynamicColor.h>

@class NSDictionary, UIColor;

@interface UIDynamicSystemColor : UIDynamicColor {

	NSDictionary* _colorsByThemeKey;
	os_unfair_lock_s _cachedColorLock;
	UIColor* _cachedColor;
	unsigned long long _cachedThemeKey;

}
-(unsigned long long)hash;
-(void)_setColorsByThemeKey:(id)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithName:(id)arg1 colorsByThemeKey:(id)arg2 ;
-(id)_colorsByThemeKey;
-(id)_resolvedColorWithTraitCollection:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
