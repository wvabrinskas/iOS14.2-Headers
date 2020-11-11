/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:00 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface _UIHostedWindowHostingHandle : NSObject <NSSecureCoding> {

	int _pid;
	unsigned _contextID;
	CGAffineTransform _rootLayerTransform;
	CGRect _rootLayerFrame;

}

@property (nonatomic,readonly) int pid;                                           //@synthesize pid=_pid - In the implementation block
@property (nonatomic,readonly) unsigned contextID;                                //@synthesize contextID=_contextID - In the implementation block
@property (nonatomic,readonly) CGAffineTransform rootLayerTransform;              //@synthesize rootLayerTransform=_rootLayerTransform - In the implementation block
@property (nonatomic,readonly) CGRect rootLayerFrame;                             //@synthesize rootLayerFrame=_rootLayerFrame - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)hostedWindowHostingHandleWithContextID:(unsigned)arg1 rootLayerTransform:(CGAffineTransform)arg2 rootLayerFrame:(CGRect)arg3 ;
-(int)pid;
-(CGRect)rootLayerFrame;
-(CGAffineTransform)rootLayerTransform;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned)contextID;
@end
