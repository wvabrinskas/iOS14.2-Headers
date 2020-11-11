/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:48 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUI/PhotosUI-Structs.h>
#import <PhotosUI/PUPhotoEditBaseAdjustmentCell.h>

@protocol PUPhotoEditBaseAdjustmentCellDelegate;
@interface PUPhotoEditAdjustmentCell : PUPhotoEditBaseAdjustmentCell {

	BOOL _shouldDisplayValueLabel;
	id<PUPhotoEditBaseAdjustmentCellDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<PUPhotoEditBaseAdjustmentCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL shouldDisplayValueLabel;                                           //@synthesize shouldDisplayValueLabel=_shouldDisplayValueLabel - In the implementation block
@property (assign,nonatomic) BOOL displayMappedValue; 
-(void)setSelected:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id<PUPhotoEditBaseAdjustmentCellDelegate>)delegate;
-(void)setEnabled:(BOOL)arg1 ;
-(void)setDelegate:(id<PUPhotoEditBaseAdjustmentCellDelegate>)arg1 ;
-(void)setImageName:(id)arg1 ;
-(void)setIsUserModifying:(BOOL)arg1 ;
-(void)setDisplayMappedValue:(BOOL)arg1 ;
-(void)setShouldDisplayValueLabel:(BOOL)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)_setupEventHandler;
-(void)_updateValueLabelVisibility;
-(BOOL)displayMappedValue;
-(void)handleButton:(id)arg1 ;
-(BOOL)shouldDisplayValueLabel;
@end
