/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:35 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SplashBoard.framework/SplashBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SplashBoard/SplashBoard-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/BSXPCCoding.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface XBDisplayEdgeInsetsWrapper : NSObject <NSCopying, BSXPCCoding, NSSecureCoding> {

	double _topInset;
	double _leftInset;
	double _bottomInset;
	double _rightInset;

}

@property (nonatomic,readonly) double topInset;                     //@synthesize topInset=_topInset - In the implementation block
@property (nonatomic,readonly) double leftInset;                    //@synthesize leftInset=_leftInset - In the implementation block
@property (nonatomic,readonly) double bottomInset;                  //@synthesize bottomInset=_bottomInset - In the implementation block
@property (nonatomic,readonly) double rightInset;                   //@synthesize rightInset=_rightInset - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)makeWithEdgeInsets:(UIEdgeInsets)arg1 ;
-(UIEdgeInsets)edgeInsets;
-(void)encodeWithCoder:(id)arg1 ;
-(double)bottomInset;
-(BOOL)hasZeroInsets;
-(NSString *)description;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithXPCDictionary:(id)arg1 ;
-(double)topInset;
-(double)leftInset;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithXPCDictionary:(id)arg1 ;
-(double)rightInset;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithTop:(double)arg1 left:(double)arg2 bottom:(double)arg3 right:(double)arg4 ;
@end

