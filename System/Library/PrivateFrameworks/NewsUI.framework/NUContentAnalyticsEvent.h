/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:27 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NUAnalyticsEvent.h>

@class SXAnalyticsEvent, NSString;

@interface NUContentAnalyticsEvent : NSObject <NUAnalyticsEvent> {

	SXAnalyticsEvent* _event;

}

@property (nonatomic,readonly) SXAnalyticsEvent * event;              //@synthesize event=_event - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithEvent:(id)arg1 ;
-(SXAnalyticsEvent *)event;
@end

