/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:48:11 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/Widgets.framework/Widgets
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UITextView.h>

@class NSMutableAttributedString, UIColor;

@interface WGWidgetAttributionView : UITextView {

	NSMutableAttributedString* _widgetAttributedString;
	UIColor* _legibilityTextColor;

}

@property (nonatomic,retain) UIColor * legibilityTextColor;              //@synthesize legibilityTextColor=_legibilityTextColor - In the implementation block
+(void)requestAttributedStringForIdentifier:(id)arg1 withHandler:(/*^block*/id)arg2 ;
+(id)widgetAttributionIDsInOrder;
-(id)_attributionBackgroundColor;
-(UIColor *)legibilityTextColor;
-(id)_paragraphStyle;
-(void)layoutSubviews;
-(id)_attributionFont;
-(void)setLegibilityTextColor:(UIColor *)arg1 ;
-(id)initWithWidgetAttributedString:(id)arg1 ;
-(void)_configureAttributedString;
@end

