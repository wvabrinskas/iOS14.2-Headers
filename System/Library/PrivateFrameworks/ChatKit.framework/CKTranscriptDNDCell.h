/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:23 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UITableViewCell.h>

@class UISwitch;

@interface CKTranscriptDNDCell : UITableViewCell {

	UISwitch* _muteSwitch;

}

@property (nonatomic,retain) UISwitch * muteSwitch;              //@synthesize muteSwitch=_muteSwitch - In the implementation block
+(double)preferredHeight;
+(id)identifier;
-(UISwitch *)muteSwitch;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setMuteSwitch:(UISwitch *)arg1 ;
-(void)layoutSubviews;
@end

