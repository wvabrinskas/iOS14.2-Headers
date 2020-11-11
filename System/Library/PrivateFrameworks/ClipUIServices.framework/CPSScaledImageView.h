/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:57 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ClipUIServices.framework/ClipUIServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ClipUIServices/ClipUIServices-Structs.h>
#import <UIKitCore/UIImageView.h>

@class NSString;

@interface CPSScaledImageView : UIImageView {

	CGSize _scaledImageSize;
	BOOL _needsUpdateScaledImageSize;
	NSString* _textStyleForScaling;

}

@property (nonatomic,retain) NSString * textStyleForScaling;              //@synthesize textStyleForScaling=_textStyleForScaling - In the implementation block
-(CGSize)intrinsicContentSize;
-(NSString *)textStyleForScaling;
-(void)setTextStyleForScaling:(NSString *)arg1 ;
-(void)invalidateIntrinsicContentSize;
-(void)traitCollectionDidChange:(id)arg1 ;
@end
