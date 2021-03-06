/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:30 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NotesUI/NotesUI-Structs.h>
#import <UIKitCore/UIView.h>

@class CKShare, NSArray, UIStackView;

@interface ICCollaboratorAvatarsView : UIView {

	double _borderWidth;
	double _dimension;
	CKShare* _share;
	double _shadowOpacity;
	double _shadowRadius;
	double _spacing;
	NSArray* _avatarContainerViews;
	UIStackView* _avatarStackView;
	CGSize _shadowOffset;

}

@property (nonatomic,retain) NSArray * avatarContainerViews;                         //@synthesize avatarContainerViews=_avatarContainerViews - In the implementation block
@property (nonatomic,retain) UIStackView * avatarStackView;                          //@synthesize avatarStackView=_avatarStackView - In the implementation block
@property (assign,nonatomic) double borderWidth;                                     //@synthesize borderWidth=_borderWidth - In the implementation block
@property (assign,nonatomic) double dimension;                                       //@synthesize dimension=_dimension - In the implementation block
@property (assign,nonatomic,__weak) CKShare * share;                                 //@synthesize share=_share - In the implementation block
@property (assign,nonatomic) CGSize shadowOffset;                                    //@synthesize shadowOffset=_shadowOffset - In the implementation block
@property (assign,nonatomic) double shadowOpacity;                                   //@synthesize shadowOpacity=_shadowOpacity - In the implementation block
@property (assign,nonatomic) double shadowRadius;                                    //@synthesize shadowRadius=_shadowRadius - In the implementation block
@property (assign,nonatomic) double spacing;                                         //@synthesize spacing=_spacing - In the implementation block
@property (nonatomic,readonly) unsigned long long displayedAvatarCount; 
-(double)spacing;
-(CKShare *)share;
-(double)dimension;
-(void)setShadowRadius:(double)arg1 ;
-(void)setShadowOpacity:(double)arg1 ;
-(void)setSpacing:(double)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(double)shadowOpacity;
-(void)setShadowOffset:(CGSize)arg1 ;
-(void)commonInit;
-(CGSize)shadowOffset;
-(double)shadowRadius;
-(void)setBorderWidth:(double)arg1 ;
-(void)setDimension:(double)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)updateUI;
-(void)setShare:(CKShare *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(double)borderWidth;
-(void)setUpAvatarContainerViews;
-(void)updateShadows;
-(UIStackView *)avatarStackView;
-(id)createAvatarContainerView;
-(void)setAvatarContainerViews:(NSArray *)arg1 ;
-(NSArray *)avatarContainerViews;
-(void)setAvatarStackView:(UIStackView *)arg1 ;
-(unsigned long long)displayedAvatarCount;
@end

