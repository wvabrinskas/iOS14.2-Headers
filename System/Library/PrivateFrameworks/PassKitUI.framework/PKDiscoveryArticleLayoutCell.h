/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:11 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UICollectionViewCell.h>

@class PKDiscoveryShelfView;

@interface PKDiscoveryArticleLayoutCell : UICollectionViewCell {

	PKDiscoveryShelfView* _shelfView;

}

@property (nonatomic,retain) PKDiscoveryShelfView * shelfView;              //@synthesize shelfView=_shelfView - In the implementation block
-(id)preferredLayoutAttributesFittingAttributes:(id)arg1 ;
-(void)layoutSubviews;
-(PKDiscoveryShelfView *)shelfView;
-(void)setShelfView:(PKDiscoveryShelfView *)arg1 ;
-(void)prepareForReuse;
@end
