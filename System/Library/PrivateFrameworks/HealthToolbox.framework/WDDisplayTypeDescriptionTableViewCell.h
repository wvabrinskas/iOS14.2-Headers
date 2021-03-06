/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:24 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UITableViewCell.h>

@class WDDisplayTypeDescriptionView, HKDisplayType;

@interface WDDisplayTypeDescriptionTableViewCell : UITableViewCell {

	WDDisplayTypeDescriptionView* _descriptionView;
	BOOL _showAttributionText;
	HKDisplayType* _displayType;

}

@property (assign,nonatomic) BOOL showAttributionText;                 //@synthesize showAttributionText=_showAttributionText - In the implementation block
@property (nonatomic,retain) HKDisplayType * displayType;              //@synthesize displayType=_displayType - In the implementation block
+(double)minimumHeight;
+(id)defaultReuseIdentifier;
-(void)setupSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setDisplayType:(HKDisplayType *)arg1 ;
-(HKDisplayType *)displayType;
-(id)initWithDisplayType:(id)arg1 showAttributionText:(BOOL)arg2 reuseIdentifier:(id)arg3 ;
-(BOOL)showAttributionText;
-(void)setShowAttributionText:(BOOL)arg1 ;
@end

