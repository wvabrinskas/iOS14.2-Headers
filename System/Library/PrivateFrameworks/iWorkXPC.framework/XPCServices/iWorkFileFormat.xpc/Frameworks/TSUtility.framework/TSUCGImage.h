/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:48:21 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/iWorkXPC.framework/XPCServices/iWorkFileFormat.xpc/Frameworks/TSUtility.framework/TSUtility
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TSUtility/TSUtility-Structs.h>
#import <TSUtility/TSUImage.h>

@interface TSUCGImage : TSUImage {

	CGImageRef mCGImage;
	long long mOrientation;
	double mScale;

}
-(long long)imageOrientation;
-(id)initWithCGImage:(CGImageRef)arg1 scale:(double)arg2 orientation:(long long)arg3 ;
-(CGSize)size;
-(CGImageRef)CGImage;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)scale;
-(void)dealloc;
-(CGImageRef)CGImageForSize:(CGSize)arg1 ;
@end

