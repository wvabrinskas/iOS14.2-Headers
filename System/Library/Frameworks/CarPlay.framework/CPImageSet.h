/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:57 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/CarPlay.framework/CarPlay
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CarPlay/CarPlay-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class UIImage, CPImageSetAssetRegistration;

@interface CPImageSet : NSObject <NSSecureCoding> {

	UIImage* _lightContentImage;
	UIImage* _darkContentImage;
	CPImageSetAssetRegistration* _currentAssetRegistration;

}

@property (nonatomic,retain) CPImageSetAssetRegistration * currentAssetRegistration;              //@synthesize currentAssetRegistration=_currentAssetRegistration - In the implementation block
@property (nonatomic,retain) UIImage * lightContentImage;                                         //@synthesize lightContentImage=_lightContentImage - In the implementation block
@property (nonatomic,retain) UIImage * darkContentImage;                                          //@synthesize darkContentImage=_darkContentImage - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)image;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithImage:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithImage:(id)arg1 treatmentBlock:(/*^block*/id)arg2 ;
-(UIImage *)lightContentImage;
-(UIImage *)darkContentImage;
-(CPImageSetAssetRegistration *)currentAssetRegistration;
-(void)setCurrentAssetRegistration:(CPImageSetAssetRegistration *)arg1 ;
-(void)setDarkContentImage:(UIImage *)arg1 ;
-(void)setLightContentImage:(UIImage *)arg1 ;
-(id)initWithLightContentImage:(id)arg1 darkContentImage:(id)arg2 ;
-(void)swapStyles;
-(void)resizeImagesToSize:(CGSize)arg1 ;
@end

