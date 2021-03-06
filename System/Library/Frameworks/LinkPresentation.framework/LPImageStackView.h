/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:16 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <LinkPresentation/LinkPresentation-Structs.h>
#import <LinkPresentation/LPComponentView.h>

@class NSArray, LPImageViewStyle, NSMutableArray;

@interface LPImageStackView : LPComponentView {

	NSArray* _images;
	LPImageViewStyle* _style;
	NSMutableArray* _imageViews;

}
-(id)init;
-(void)setDelegate:(id)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutComponentView;
-(id)initWithImages:(id)arg1 style:(id)arg2 ;
-(CGSize)_layoutImagesForSize:(CGSize)arg1 applyingLayout:(BOOL)arg2 ;
@end

