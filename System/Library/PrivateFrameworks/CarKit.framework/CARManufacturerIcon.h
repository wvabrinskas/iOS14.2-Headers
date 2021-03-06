/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:13 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CarKit.framework/CarKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <CarKit/CarKit-Structs.h>
@class NSData;

@interface CARManufacturerIcon : NSObject {

	BOOL _prerendered;
	NSData* _imageData;
	CGSize _pixelSize;

}

@property (nonatomic,readonly) CGSize pixelSize;                                   //@synthesize pixelSize=_pixelSize - In the implementation block
@property (nonatomic,readonly) NSData * imageData;                                 //@synthesize imageData=_imageData - In the implementation block
@property (getter=isPrerendered,nonatomic,readonly) BOOL prerendered;              //@synthesize prerendered=_prerendered - In the implementation block
-(CGSize)pixelSize;
-(BOOL)isPrerendered;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(NSData *)imageData;
@end

