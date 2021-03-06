/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:27 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Foundation/Foundation-Structs.h>
#import <libobjc.A.dylib/BSXPCSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface NSValue : NSObject <BSXPCSecureCoding, NSCopying, NSSecureCoding>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) const char* objCType; 
+(id)bs_valueWithCGRect:(CGRect)arg1 ;
+(id)bs_valueWithCGPoint:(CGPoint)arg1 ;
+(id)bs_valueWithCGSize:(CGSize)arg1 ;
+(id)bs_valueWithCGAffineTransform:(CGAffineTransform)arg1 ;
+(id)allocWithZone:(NSZone*)arg1 ;
+(BOOL)supportsSecureCoding;
+(id)valueWithBytes:(const void*)arg1 objCType:(const char*)arg2 ;
+(id)valueWithRange:(NSRange)arg1 ;
+(id)valueWithNonretainedObject:(id)arg1 ;
+(id)valueWithWeakObject:(id)arg1 ;
+(id)valueWithRect:(CGRect)arg1 ;
+(id)valueWithSize:(CGSize)arg1 ;
+(id)valueWithPoint:(CGPoint)arg1 ;
+(id)valueWithPointer:(const void*)arg1 ;
+(id)valueWithEdgeInsets:(NSEdgeInsets)arg1 ;
+(id)value:(const void*)arg1 withObjCType:(const char*)arg2 ;
-(CGRect)bs_CGRectValue;
-(void)encodeWithBSXPCCoder:(id)arg1 ;
-(CGPoint)bs_CGPointValue;
-(id)initWithBSXPCCoder:(id)arg1 ;
-(BOOL)supportsBSXPCSecureCoding;
-(CGSize)bs_CGSizeValue;
-(CGAffineTransform)bs_CGAffineTransformValue;
-(BOOL)bs_getValue:(out void*)arg1 ofSize:(unsigned long long)arg2 ;
-(BOOL)isNSValue__;
-(NSRange)rangeValue;
-(void)getValue:(void*)arg1 ;
-(id)init;
-(CGRect)rectValue;
-(CGSize)sizeValue;
-(unsigned long long)hash;
-(const char*)objCType;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithBytes:(const void*)arg1 objCType:(const char*)arg2 ;
-(CGPoint)pointValue;
-(void*)pointerValue;
-(id)nonretainedObjectValue;
-(void)getValue:(void*)arg1 size:(unsigned long long)arg2 ;
-(NSString *)description;
-(BOOL)isEqual:(id)arg1 ;
-(NSEdgeInsets)edgeInsetsValue;
-(BOOL)_matchType:(const char*)arg1 size:(unsigned long long)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEqualToValue:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(Class)classForCoder;
-(id)weakObjectValue;
-(id)replacementObjectForPortCoder:(id)arg1 ;
-(BOOL)_matchType:(const char*)arg1 size:(unsigned long long)arg2 strict:(BOOL)arg3 ;
@end

