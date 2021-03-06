/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:28 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Foundation/Foundation-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMutableDictionary, NSString;

@interface NSProgressValues : NSObject <NSSecureCoding> {

	NSMutableDictionary* _userInfo;
	NSProgressFraction _selfFraction;
	NSProgressFraction _childFraction;
	double _remoteFractionCompleted;
	NSString* _localizedDescription;
	NSString* _localizedAdditionalDescription;
	BOOL _isCancellable;
	BOOL _isPausable;
	BOOL _isCancelled;
	BOOL _isPaused;
	BOOL _usingChildUserInfo;
	NSString* _kind;
	BOOL _isPrioritizable;
	long long _portionOfParent;

}
+(BOOL)supportsSecureCoding;
+(id)_importantKeys;
+(id)decodableClasses;
-(void)setTotalUnitCount:(long long)arg1 ;
-(long long)completedUnitCount;
-(id)init;
-(void)setCompletedUnitCount:(long long)arg1 ;
-(void)setFractionCompleted:(double)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setFinished:(BOOL)arg1 ;
-(double)fractionCompleted;
-(id)_indentedDescription:(unsigned long long)arg1 ;
-(long long)totalUnitCount;
-(id)description;
-(BOOL)isFinished;
-(NSProgressFraction)overallFraction;
-(id)initWithCoder:(id)arg1 ;
-(void)setIndeterminate:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isIndeterminate;
-(void)dealloc;
@end

