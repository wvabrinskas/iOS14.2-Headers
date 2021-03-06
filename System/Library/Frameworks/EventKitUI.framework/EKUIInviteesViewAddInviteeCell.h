/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:52 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UITableViewCell.h>

@class UILabel, NSArray, NSString;

@interface EKUIInviteesViewAddInviteeCell : UITableViewCell {

	UILabel* _simpleTextLabel;
	NSArray* _persistentConstraints;
	NSString* _simpleText;

}

@property (nonatomic,retain) UILabel * simpleTextLabel;                    //@synthesize simpleTextLabel=_simpleTextLabel - In the implementation block
@property (nonatomic,retain) NSArray * persistentConstraints;              //@synthesize persistentConstraints=_persistentConstraints - In the implementation block
@property (nonatomic,retain) NSString * simpleText;                        //@synthesize simpleText=_simpleText - In the implementation block
+(id)_simpleTextLabelFont;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setSimpleTextLabel:(UILabel *)arg1 ;
-(UILabel *)simpleTextLabel;
-(NSString *)simpleText;
-(void)setSimpleText:(NSString *)arg1 ;
-(NSArray *)persistentConstraints;
-(void)setPersistentConstraints:(NSArray *)arg1 ;
-(void)updateConstraints;
@end

