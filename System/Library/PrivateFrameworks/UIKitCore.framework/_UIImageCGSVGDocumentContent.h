/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:40 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIImageContent.h>

@interface _UIImageCGSVGDocumentContent : _UIImageContent {

	CGSVGDocumentRef _svgDocumentRef;

}
-(CGSize)sizeInPixels;
-(BOOL)canProvideFullResCGImage;
-(id)initWithScale:(double)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)isCGSVGDocument;
-(id)initWithCGSVGDocument:(CGSVGDocumentRef)arg1 scale:(double)arg2 ;
-(CGSVGDocumentRef)CGSVGDocument;
-(void)_drawWithoutEffectInRect:(CGRect)arg1 context:(CGContextRef)arg2 ;
-(void)dealloc;
@end

