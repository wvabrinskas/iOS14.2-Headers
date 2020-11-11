/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:31 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NotesUI/NotesUI-Structs.h>
#import <NotesUI/ICAttachmentBrickImageViewV2.h>

@class CALayer;

@interface ICAttachmentBrickSmallMapViewV2 : ICAttachmentBrickImageViewV2 {

	CALayer* _borderLayer;
	CALayer* _effectsLayer;

}

@property (nonatomic,retain) CALayer * borderLayer;               //@synthesize borderLayer=_borderLayer - In the implementation block
@property (nonatomic,retain) CALayer * effectsLayer;              //@synthesize effectsLayer=_effectsLayer - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setContentsScale:(double)arg1 ;
-(void)setCornerRadius:(double)arg1 ;
-(CALayer *)borderLayer;
-(void)setBorderLayer:(CALayer *)arg1 ;
-(void)updateSublayersBounds:(CGRect)arg1 ;
-(void)setEffectsLayer:(CALayer *)arg1 ;
-(CALayer *)effectsLayer;
@end
