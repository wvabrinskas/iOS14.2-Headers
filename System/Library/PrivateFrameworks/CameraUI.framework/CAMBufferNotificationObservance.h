/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:44 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CameraUI/CAMBufferObservance.h>

@class NSString, NSObject, NSNotificationCenter;

@interface CAMBufferNotificationObservance : CAMBufferObservance {

	NSString* _notification;
	NSObject* _object;
	NSNotificationCenter* _notificationCenter;

}

@property (nonatomic,copy,readonly) NSString * notification;                           //@synthesize notification=_notification - In the implementation block
@property (nonatomic,__weak,readonly) NSObject * object;                               //@synthesize object=_object - In the implementation block
@property (nonatomic,readonly) NSNotificationCenter * notificationCenter;              //@synthesize notificationCenter=_notificationCenter - In the implementation block
-(NSNotificationCenter *)notificationCenter;
-(NSString *)notification;
-(NSObject *)object;
-(void)setupObservanceForBuffer:(id)arg1 ;
-(void)teardownObservanceForBuffer:(id)arg1 ;
-(void)fulfillWithChange:(id)arg1 ;
-(id)initWithNotification:(id)arg1 object:(id)arg2 center:(id)arg3 removeOnceEnabled:(BOOL)arg4 ;
@end

