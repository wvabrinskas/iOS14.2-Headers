/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:12 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/MKFontManager.h>
@class UIFont;


@protocol MKFontManager <NSObject>
@property (nonatomic,readonly) UIFont * largeTitleFontStatic; 
@property (nonatomic,readonly) UIFont * largeTitleFont; 
@property (nonatomic,readonly) UIFont * mediumTitleFont; 
@property (nonatomic,readonly) UIFont * brandTitleFont; 
@property (nonatomic,readonly) UIFont * subtitleFont; 
@property (nonatomic,readonly) UIFont * bodyFont; 
@property (nonatomic,readonly) UIFont * boldBodyFont; 
@property (nonatomic,readonly) UIFont * mediumBodyFont; 
@property (nonatomic,readonly) UIFont * sectionHeaderFont; 
@property (nonatomic,readonly) UIFont * sectionHeaderButtonFont; 
@property (nonatomic,readonly) UIFont * attributionFont; 
@property (nonatomic,readonly) UIFont * smallAttributionFont; 
@property (nonatomic,readonly) UIFont * rowButtonFont; 
@property (nonatomic,readonly) UIFont * rowGlyphButtonFont; 
@property (nonatomic,readonly) UIFont * ratingOverallFont; 
@property (nonatomic,readonly) UIFont * ratingOverallPercentageFont; 
@property (nonatomic,readonly) UIFont * recommendSubtitleFont; 
@property (nonatomic,readonly) UIFont * ratingCallToActionGlyphFont; 
@property (nonatomic,readonly) UIFont * ratingCallToActionLabelFont; 
@property (nonatomic,readonly) UIFont * ratingCallToActionHeaderLabelFont; 
@required
-(UIFont *)sectionHeaderFont;
-(UIFont *)sectionHeaderButtonFont;
-(UIFont *)smallAttributionFont;
-(UIFont *)attributionFont;
-(id)iconFontToMatch:(id)arg1;
-(UIFont *)largeTitleFontStatic;
-(UIFont *)mediumTitleFont;
-(UIFont *)brandTitleFont;
-(UIFont *)mediumBodyFont;
-(UIFont *)rowButtonFont;
-(UIFont *)rowGlyphButtonFont;
-(UIFont *)ratingOverallFont;
-(UIFont *)ratingOverallPercentageFont;
-(UIFont *)ratingCallToActionLabelFont;
-(UIFont *)largeTitleFont;
-(UIFont *)subtitleFont;
-(UIFont *)boldBodyFont;
-(UIFont *)ratingCallToActionHeaderLabelFont;
-(UIFont *)bodyFont;
-(UIFont *)recommendSubtitleFont;
-(UIFont *)ratingCallToActionGlyphFont;

@end


@class UIFont, NSString;

@interface MKFontManager : NSObject <MKFontManager> {

	BOOL _useSmallFont;

}

@property (assign,nonatomic) BOOL useSmallFont;                                         //@synthesize useSmallFont=_useSmallFont - In the implementation block
@property (nonatomic,readonly) UIFont * largeTitleFontStatic; 
@property (nonatomic,readonly) UIFont * largeTitleFont; 
@property (nonatomic,readonly) UIFont * mediumTitleFont; 
@property (nonatomic,readonly) UIFont * brandTitleFont; 
@property (nonatomic,readonly) UIFont * subtitleFont; 
@property (nonatomic,readonly) UIFont * bodyFont; 
@property (nonatomic,readonly) UIFont * boldBodyFont; 
@property (nonatomic,readonly) UIFont * mediumBodyFont; 
@property (nonatomic,readonly) UIFont * sectionHeaderFont; 
@property (nonatomic,readonly) UIFont * sectionHeaderButtonFont; 
@property (nonatomic,readonly) UIFont * attributionFont; 
@property (nonatomic,readonly) UIFont * smallAttributionFont; 
@property (nonatomic,readonly) UIFont * rowButtonFont; 
@property (nonatomic,readonly) UIFont * rowGlyphButtonFont; 
@property (nonatomic,readonly) UIFont * ratingOverallFont; 
@property (nonatomic,readonly) UIFont * ratingOverallPercentageFont; 
@property (nonatomic,readonly) UIFont * recommendSubtitleFont; 
@property (nonatomic,readonly) UIFont * ratingCallToActionGlyphFont; 
@property (nonatomic,readonly) UIFont * ratingCallToActionLabelFont; 
@property (nonatomic,readonly) UIFont * ratingCallToActionHeaderLabelFont; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)setUseSmallFont:(BOOL)arg1 ;
+(id)sharedManager;
-(UIFont *)sectionHeaderFont;
-(UIFont *)sectionHeaderButtonFont;
-(UIFont *)smallAttributionFont;
-(UIFont *)attributionFont;
-(void)setUseSmallFont:(BOOL)arg1 ;
-(id)iconFontToMatch:(id)arg1 ;
-(UIFont *)largeTitleFontStatic;
-(UIFont *)mediumTitleFont;
-(UIFont *)brandTitleFont;
-(UIFont *)mediumBodyFont;
-(UIFont *)rowButtonFont;
-(UIFont *)rowGlyphButtonFont;
-(UIFont *)ratingOverallFont;
-(BOOL)useSmallFont;
-(UIFont *)ratingOverallPercentageFont;
-(UIFont *)ratingCallToActionLabelFont;
-(UIFont *)largeTitleFont;
-(UIFont *)subtitleFont;
-(UIFont *)boldBodyFont;
-(UIFont *)ratingCallToActionHeaderLabelFont;
-(UIFont *)bodyFont;
-(UIFont *)recommendSubtitleFont;
-(UIFont *)ratingCallToActionGlyphFont;
@end

