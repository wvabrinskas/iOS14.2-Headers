/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:08 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/ModelIO.framework/ModelIO
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ModelIO/ModelIO-Structs.h>
#import <ModelIO/MDLObject.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/MDLJointAnimation.h>

@class NSArray, MDLAnimatedVector3Array, MDLAnimatedQuaternionArray;

@interface MDLPackedJointAnimation : MDLObject <NSCopying, MDLJointAnimation> {

	NSArray* _jointPaths;
	MDLAnimatedVector3Array* _translations;
	MDLAnimatedQuaternionArray* _rotations;
	MDLAnimatedVector3Array* _scales;

}

@property (nonatomic,readonly) NSArray * jointPaths;                                //@synthesize jointPaths=_jointPaths - In the implementation block
@property (nonatomic,readonly) MDLAnimatedVector3Array * translations;              //@synthesize translations=_translations - In the implementation block
@property (nonatomic,readonly) MDLAnimatedQuaternionArray * rotations;              //@synthesize rotations=_rotations - In the implementation block
@property (nonatomic,readonly) MDLAnimatedVector3Array * scales;                    //@synthesize scales=_scales - In the implementation block
-(MDLAnimatedVector3Array *)translations;
-(MDLAnimatedVector3Array *)scales;
-(id)copyWithZone:(NSZone*)arg1 ;
-(MDLAnimatedQuaternionArray *)rotations;
-(NSArray *)jointPaths;
-(id)initWithName:(id)arg1 jointPaths:(id)arg2 ;
@end

