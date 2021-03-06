/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:00 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <PhotosUICore/PhotosUICore-Structs.h>
@interface PXTilingCoordinateSpace : NSObject {

	PXTilingCoordinateSpace* _parentSpace;
	CGAffineTransform _transform;

}

@property (nonatomic,readonly) void* identifier; 
@property (assign,nonatomic,__weak) PXTilingCoordinateSpace * parentSpace;              //@synthesize parentSpace=_parentSpace - In the implementation block
@property (assign,nonatomic) CGAffineTransform transform;                               //@synthesize transform=_transform - In the implementation block
-(void)setTransform:(CGAffineTransform)arg1 ;
-(id)init;
-(CGAffineTransform)transform;
-(void*)identifier;
-(PXTilingCoordinateSpace *)parentSpace;
-(void)setParentSpace:(PXTilingCoordinateSpace *)arg1 ;
@end

