/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:02 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GameCenterUI/GameCenterUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/RUIHeader.h>

@class GKLabel, NSString;

@interface GKRemoteUIHeaderView : UIView <RUIHeader> {

	BOOL _isFirstSection;
	GKLabel* _textLabel;
	double _height;
	double _bottomMargin;

}

@property (assign,nonatomic) BOOL isFirstSection;                   //@synthesize isFirstSection=_isFirstSection - In the implementation block
@property (nonatomic,retain) GKLabel * textLabel;                   //@synthesize textLabel=_textLabel - In the implementation block
@property (assign,nonatomic) double height;                         //@synthesize height=_height - In the implementation block
@property (assign,nonatomic) double bottomMargin;                   //@synthesize bottomMargin=_bottomMargin - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isFirstSection;
-(double)height;
-(void)setHeight:(double)arg1 ;
-(id)initWithAttributes:(id)arg1 ;
-(void)setSectionIsFirst:(BOOL)arg1 ;
-(double)headerHeightForWidth:(double)arg1 inTableView:(id)arg2 ;
-(double)bottomMargin;
-(void)setBottomMargin:(double)arg1 ;
-(GKLabel *)textLabel;
-(void)setTextLabel:(GKLabel *)arg1 ;
-(void)setIsFirstSection:(BOOL)arg1 ;
@end

