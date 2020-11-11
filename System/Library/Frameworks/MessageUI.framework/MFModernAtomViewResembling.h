/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:07 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class UIFont;


@protocol MFModernAtomViewResembling <NSObject>
@property (assign,nonatomic) BOOL isPrimaryAddressAtom; 
@property (assign,nonatomic) BOOL hidesVIPIndicator; 
@property (assign,nonatomic) BOOL separatorHidden; 
@property (assign,nonatomic) BOOL separatorIsLeftAligned; 
@property (assign,nonatomic) double scale; 
@property (assign,nonatomic) int separatorStyle; 
@property (assign,nonatomic) unsigned long long presentationOptions; 
@property (nonatomic,readonly) CGPoint baselinePoint; 
@property (nonatomic,readonly) UIEdgeInsets edgeInsets; 
@property (nonatomic,retain) UIFont * titleFont; 
@required
-(int)separatorStyle;
-(void)setSeparatorStyle:(int)arg1;
-(UIEdgeInsets)edgeInsets;
-(void)setScale:(double)arg1;
-(BOOL)isPrimaryAddressAtom;
-(BOOL)separatorHidden;
-(void)performBuildInAnimationFromTextColor:(id)arg1 withDuration:(double)arg2;
-(void)setIsPrimaryAddressAtom:(BOOL)arg1;
-(BOOL)hidesVIPIndicator;
-(void)setHidesVIPIndicator:(BOOL)arg1;
-(BOOL)separatorIsLeftAligned;
-(void)setSeparatorIsLeftAligned:(BOOL)arg1;
-(void)setTitleFont:(id)arg1;
-(void)setSeparatorHidden:(BOOL)arg1;
-(void)setPresentationOptions:(unsigned long long)arg1;
-(unsigned long long)presentationOptions;
-(CGPoint)baselinePoint;
-(UIFont *)titleFont;
-(double)scale;

@end
