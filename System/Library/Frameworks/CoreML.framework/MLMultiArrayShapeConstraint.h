/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:37 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, NSOrderedSet;

@interface MLMultiArrayShapeConstraint : NSObject <NSSecureCoding> {

	long long _type;
	NSArray* _sizeRangeForDimension;
	NSOrderedSet* _shapeSet;

}

@property (nonatomic,readonly) NSOrderedSet * shapeSet;                      //@synthesize shapeSet=_shapeSet - In the implementation block
@property (nonatomic,readonly) long long type;                               //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) NSArray * sizeRangeForDimension;              //@synthesize sizeRangeForDimension=_sizeRangeForDimension - In the implementation block
@property (nonatomic,readonly) NSArray * enumeratedShapes; 
+(BOOL)supportsSecureCoding;
-(NSArray *)sizeRangeForDimension;
-(id)findAvailableShape:(id)arg1 ;
-(BOOL)isAllowedShape:(id)arg1 error:(id*)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithEnumeratedShapes:(id)arg1 ;
-(id)initUnspecified;
-(long long)type;
-(id)initWithCoder:(id)arg1 ;
-(NSOrderedSet *)shapeSet;
-(NSArray *)enumeratedShapes;
-(id)initWithSizeRangeForDimension:(id)arg1 ;
@end

