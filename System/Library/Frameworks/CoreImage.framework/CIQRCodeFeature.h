/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:12 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreImage/CoreImage-Structs.h>
#import <CoreImage/CIFeature.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class CIQRCodeDescriptor, NSString;

@interface CIQRCodeFeature : CIFeature <NSSecureCoding, NSCopying> {

	CGRect bounds;
	CGPoint topLeft;
	CGPoint topRight;
	CGPoint bottomLeft;
	CGPoint bottomRight;
	CIQRCodeDescriptor* symbolDescriptor;

}

@property (readonly) CGRect bounds; 
@property (readonly) CGPoint topLeft; 
@property (readonly) CGPoint topRight; 
@property (readonly) CGPoint bottomLeft; 
@property (readonly) CGPoint bottomRight; 
@property (readonly) NSString * messageString; 
@property (readonly) CIQRCodeDescriptor * symbolDescriptor; 
+(BOOL)supportsSecureCoding;
+(id)featureWithInternalRepresentation:(SCD_Struct_CI23*)arg1 ;
-(id)initWithInternalRepresentation:(SCD_Struct_CI23*)arg1 ;
-(CGPoint)bottomRight;
-(CGPoint)topRight;
-(void)encodeWithCoder:(id)arg1 ;
-(CIQRCodeDescriptor *)symbolDescriptor;
-(CGPoint)bottomLeft;
-(NSString *)messageString;
-(id)type;
-(CGPoint)topLeft;
-(id)initWithCoder:(id)arg1 ;
-(CGRect)bounds;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
@end

