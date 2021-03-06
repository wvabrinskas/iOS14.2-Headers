/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:07 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/MetricKit.framework/MetricKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray;

@interface MXCallStackThread : NSObject <NSSecureCoding> {

	BOOL _attributedThread;
	NSArray* _topFrames;

}

@property (readonly) BOOL attributedThread;              //@synthesize attributedThread=_attributedThread - In the implementation block
@property (readonly) NSArray * topFrames;                //@synthesize topFrames=_topFrames - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)toDictionary;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithTopCallStackFrames:(id)arg1 isAttributedThread:(BOOL)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)attributedThread;
-(NSArray *)topFrames;
@end

