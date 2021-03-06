/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:44 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIBoundingPath.h>

@class _UIBoundingPathBitmap;

@interface _UIComplexBoundingPath : _UIBoundingPath {

	double _scale;
	long long _orientation;
	_UIBoundingPathBitmap* _bitmap;

}
+(BOOL)supportsSecureCoding;
-(void)setCoordinateSpace:(id)arg1 ;
-(CGRect)_rectTuckedAgainstEdge:(unsigned long long)arg1 ofBoundingPathAndRect:(CGRect)arg2 withSize:(double)arg3 cornerRadii:(UIRectCornerRadii)arg4 minimumPadding:(double)arg5 ;
-(CGRect)_rectTuckedInCorner:(unsigned long long)arg1 ofBoundingPathAndRect:(CGRect)arg2 withSize:(CGSize)arg3 cornerRadii:(UIRectCornerRadii)arg4 minimumPadding:(double)arg5 ;
-(void)encodeWithCoder:(id)arg1 ;
-(CGRect)_largestInscribedRectInBoundingPathAndRect:(CGRect)arg1 withCenter:(CGPoint)arg2 aspectRatio:(double)arg3 ;
-(id)initWithCoordinateSpace:(id)arg1 orientation:(long long)arg2 scale:(double)arg3 boundingPathBitmap:(id)arg4 ;
-(BOOL)isNonRectangular;
-(CGRect)_portaitPixelRectWithPixelMinimumPaddingFromBoundingPath:(double)arg1 againstPortraitEdge:(unsigned long long)arg2 fromPortraitPixelRect:(CGRect)arg3 withPortraitPixelCornerRadii:(UIIntegralCornerRadii)arg4 ;
-(id)description;
-(id)boundingPathForCoordinateSpace:(id)arg1 withCornerRadii:(UIRectCornerRadii)arg2 orientation:(long long)arg3 scale:(double)arg4 ;
-(BOOL)_validateBitmap:(id)arg1 withOrientation:(long long)arg2 scale:(double)arg3 forCoordinateSpace:(id)arg4 ;
-(id)initWithCoder:(id)arg1 ;
-(UIIntegralRect)_rectByHorizontallyInsettingPortraitPixelRect:(UIIntegralRect)arg1 onPortraitEdges:(unsigned long long)arg2 performCompleteTest:(BOOL)arg3 ;
-(UIIntegralRect)_rectByVerticallyInsettingPortraitPixelRect:(UIIntegralRect)arg1 onPortraitEdges:(unsigned long long)arg2 performCompleteTest:(BOOL)arg3 ;
-(id)boundingPathForCoordinateSpace:(id)arg1 ;
-(id)_imageRepresentation;
-(CGRect)_largestInscribedPortraitPixelRectInBoundingPathWithPortraitPixelRect:(CGRect)arg1 portraitAspectRatio:(double)arg2 ;
-(CGRect)_portaitPixelRectWithPixelMinimumPaddingFromBoundingPath:(double)arg1 inPortaitCorner:(unsigned long long)arg2 fromPortraitPixelRect:(CGRect)arg3 withPortraitPixelCornerRadii:(UIIntegralCornerRadii)arg4 ;
-(BOOL)validateForCoordinateSpace;
-(id)initWithRectangularCoordinateSpace:(id)arg1 orientation:(long long)arg2 scale:(double)arg3 ;
-(CGRect)_inscribedRectInBoundingPathAndRect:(CGRect)arg1 byInsettingRect:(CGRect)arg2 onEdges:(unsigned long long)arg3 withOptions:(unsigned long long)arg4 ;
@end

