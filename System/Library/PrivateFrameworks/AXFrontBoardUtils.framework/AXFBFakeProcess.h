/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:22 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/AXFrontBoardUtils.framework/AXFrontBoardUtils
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class AXFBFakeProcessState, NSString;

@interface AXFBFakeProcess : NSObject {

	AXFBFakeProcessState* _state;
	NSString* _bundleIdentifier;

}

@property (nonatomic,retain) AXFBFakeProcessState * state;              //@synthesize state=_state - In the implementation block
@property (nonatomic,retain) NSString * bundleIdentifier;               //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
-(void)setState:(AXFBFakeProcessState *)arg1 ;
-(NSString *)bundleIdentifier;
-(AXFBFakeProcessState *)state;
-(void)setBundleIdentifier:(NSString *)arg1 ;
@end

