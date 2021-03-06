/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:36 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <VideosUI/VideosUI-Structs.h>
@class UIView, IKViewElement, NSString;

@interface VUIBadgeViewWrapper : NSObject {

	UIView* _badgeView;
	IKViewElement* _badgeElement;
	NSString* _badgeType;
	CGSize _badgeSize;
	CGRect _badgeFrame;

}

@property (nonatomic,retain) UIView * badgeView;                        //@synthesize badgeView=_badgeView - In the implementation block
@property (nonatomic,retain) IKViewElement * badgeElement;              //@synthesize badgeElement=_badgeElement - In the implementation block
@property (assign,nonatomic) CGSize badgeSize;                          //@synthesize badgeSize=_badgeSize - In the implementation block
@property (assign,nonatomic) CGRect badgeFrame;                         //@synthesize badgeFrame=_badgeFrame - In the implementation block
@property (nonatomic,retain) NSString * badgeType;                      //@synthesize badgeType=_badgeType - In the implementation block
-(NSString *)badgeType;
-(void)setBadgeType:(NSString *)arg1 ;
-(UIView *)badgeView;
-(CGRect)badgeFrame;
-(CGSize)badgeSize;
-(void)setBadgeView:(UIView *)arg1 ;
-(void)setBadgeSize:(CGSize)arg1 ;
-(IKViewElement *)badgeElement;
-(void)setBadgeElement:(IKViewElement *)arg1 ;
-(void)setBadgeFrame:(CGRect)arg1 ;
@end

