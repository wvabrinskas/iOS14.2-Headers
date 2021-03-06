/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:47 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/AppleMediaServicesUI.framework/AppleMediaServicesUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AppleMediaServicesUI/AppleMediaServicesUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class UIColor;

@interface AMSUIWebAppearance : NSObject <NSCopying> {

	UIColor* _backgroundColor;

}

@property (nonatomic,retain) UIColor * backgroundColor;              //@synthesize backgroundColor=_backgroundColor - In the implementation block
+(id)secondarySystemGroupedBackgroundColor;
+(id)systemBackgroundColor;
+(id)secondarySystemBackgroundColor;
+(id)tertiarySystemBackgroundColor;
+(id)systemGroupedBackgroundColor;
+(id)tertiarySystemGroupedBackgroundColor;
+(id)tableViewAppearance;
+(id)defaultAppearance;
-(void)setBackgroundColor:(UIColor *)arg1 ;
-(UIColor *)backgroundColor;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)_convertHexString:(id)arg1 ;
-(void)updateBackgroundColorWithJSString:(id)arg1 ;
@end

