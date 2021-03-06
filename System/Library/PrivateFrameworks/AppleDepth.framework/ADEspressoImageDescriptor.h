/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:36 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/AppleDepth.framework/AppleDepth
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <AppleDepth/AppleDepth-Structs.h>
@class NSString, ADImageDescriptor;

@interface ADEspressoImageDescriptor : NSObject {

	BOOL _isInput;
	NSString* _name;
	ADImageDescriptor* _imageDescriptor;

}

@property (nonatomic,readonly) NSString * name;                                  //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) ADImageDescriptor * imageDescriptor;              //@synthesize imageDescriptor=_imageDescriptor - In the implementation block
@property (nonatomic,readonly) BOOL isInput;                                     //@synthesize isInput=_isInput - In the implementation block
-(NSString *)name;
-(BOOL)isInput;
-(ADImageDescriptor *)imageDescriptor;
-(id)initWithName:(id)arg1 pixelFormat:(unsigned)arg2 portraitSize:(CGSize)arg3 landscapeSize:(CGSize)arg4 isInput:(BOOL)arg5 ;
-(id)initWithName:(id)arg1 pixelFormat:(unsigned)arg2 size:(CGSize)arg3 isInput:(BOOL)arg4 ;
@end

