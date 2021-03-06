/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:42 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/BookCoverUtility.framework/BookCoverUtility
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <BookCoverUtility/BookCoverUtility-Structs.h>
#import <libobjc.A.dylib/BCUPurgeableImage.h>

@protocol BCUPurgeableImage <NSObject>
@property (nonatomic,readonly) double contentsScale; 
@property (nonatomic,readonly) CGImageRef CGImage; 
@property (nonatomic,readonly) CGSize size; 
@property (nonatomic,readonly) id layerContents; 
@required
-(double)contentsScale;
-(CGSize)size;
-(CGImageRef)CGImage;
-(id)layerContents;
-(BOOL)markAsVolatile;
-(BOOL)markAsNonVolatile;

@end


@class NSString;

@interface BCUPurgeableImage : NSObject <BCUPurgeableImage> {

	CGImageRef _image;
	IOSurfaceRef _surface;
	double _contentsScale;

}

@property (nonatomic,readonly) double contentsScale;                //@synthesize contentsScale=_contentsScale - In the implementation block
@property (nonatomic,readonly) CGImageRef CGImage; 
@property (nonatomic,readonly) CGSize size; 
@property (nonatomic,readonly) id layerContents; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(double)contentsScale;
-(CGSize)size;
-(CGImageRef)CGImage;
-(void)dealloc;
-(id)layerContents;
-(id)initWithImage:(CGImageRef)arg1 surface:(IOSurfaceRef)arg2 contentsScale:(double)arg3 ;
-(BOOL)markAsVolatile;
-(BOOL)markAsNonVolatile;
@end

