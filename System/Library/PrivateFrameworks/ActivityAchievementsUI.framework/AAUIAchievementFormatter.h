/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:30 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ActivityAchievementsUI.framework/ActivityAchievementsUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class ACHAchievement, AAUIAchievementLocalizationProvider;

@interface AAUIAchievementFormatter : NSObject {

	BOOL _formatsForFriend;
	ACHAchievement* _achievement;
	AAUIAchievementLocalizationProvider* _locProvider;
	long long _style;

}

@property (nonatomic,retain) ACHAchievement * achievement;                                   //@synthesize achievement=_achievement - In the implementation block
@property (nonatomic,retain) AAUIAchievementLocalizationProvider * locProvider;              //@synthesize locProvider=_locProvider - In the implementation block
@property (assign,nonatomic) long long style;                                                //@synthesize style=_style - In the implementation block
@property (assign,nonatomic) BOOL formatsForFriend;                                          //@synthesize formatsForFriend=_formatsForFriend - In the implementation block
-(ACHAchievement *)achievement;
-(id)titleAttributes;
-(long long)style;
-(void)setAchievement:(ACHAchievement *)arg1 ;
-(void)setStyle:(long long)arg1 ;
-(BOOL)formatsForFriend;
-(AAUIAchievementLocalizationProvider *)locProvider;
-(id)descriptionAttributes;
-(BOOL)shouldShowEarnedShortDescription;
-(id)backsideAttributesWithSizeVariant:(long long)arg1 ;
-(id)localizedAttributedBacksideStringWithDateSizeVariant:(long long)arg1 ;
-(id)initWithStyle:(long long)arg1 achievement:(id)arg2 localizationProvider:(id)arg3 ;
-(id)localizedAttributedCombinedString;
-(id)localizedAttributedTitleString;
-(id)localizedAttributedDescriptionString;
-(id)localizedAttributedShortDescriptionString;
-(id)localizedAttributedBacksideString;
-(id)localizedAttributedShortenedBacksideString;
-(void)setFormatsForFriend:(BOOL)arg1 ;
-(void)setLocProvider:(AAUIAchievementLocalizationProvider *)arg1 ;
@end
