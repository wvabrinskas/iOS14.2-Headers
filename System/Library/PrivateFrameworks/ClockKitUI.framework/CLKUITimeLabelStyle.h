/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:57 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ClockKitUI.framework/ClockKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ClockKitUI/ClockKitUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class CLKFont;

@interface CLKUITimeLabelStyle : NSObject <NSCopying> {

	CLKFont* _threeDigitFont;
	CLKFont* _fourDigitFont;
	CLKFont* _designatorFont;

}

@property (nonatomic,retain) CLKFont * threeDigitFont;              //@synthesize threeDigitFont=_threeDigitFont - In the implementation block
@property (nonatomic,retain) CLKFont * fourDigitFont;               //@synthesize fourDigitFont=_fourDigitFont - In the implementation block
@property (nonatomic,retain) CLKFont * designatorFont;              //@synthesize designatorFont=_designatorFont - In the implementation block
-(unsigned long long)hash;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setDesignatorFont:(CLKFont *)arg1 ;
-(void)setThreeDigitFont:(CLKFont *)arg1 ;
-(void)setFourDigitFont:(CLKFont *)arg1 ;
-(CLKFont *)threeDigitFont;
-(CLKFont *)fourDigitFont;
-(CLKFont *)designatorFont;
@end

