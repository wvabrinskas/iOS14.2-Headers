/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:16 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/DrawingKit.framework/DrawingKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <DrawingKit/DrawingKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID, NSDate, DKDrawing;

@interface HWHandwritingItem : NSObject <NSCopying, NSSecureCoding> {

	NSUUID* _uuid;
	NSDate* _creationDate;
	DKDrawing* _drawing;

}

@property (retain) NSUUID * uuid;                      //@synthesize uuid=_uuid - In the implementation block
@property (retain) NSDate * creationDate;              //@synthesize creationDate=_creationDate - In the implementation block
@property (retain) DKDrawing * drawing;                //@synthesize drawing=_drawing - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setUuid:(NSUUID *)arg1 ;
-(id)init;
-(id)initWithDrawing:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setCreationDate:(NSDate *)arg1 ;
-(DKDrawing *)drawing;
-(NSUUID *)uuid;
-(void)setDrawing:(DKDrawing *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDate *)creationDate;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
