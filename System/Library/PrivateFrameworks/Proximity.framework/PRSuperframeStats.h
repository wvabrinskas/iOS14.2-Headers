/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:34 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/Proximity.framework/Proximity
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <Proximity/Proximity-Structs.h>
@interface PRSuperframeStats : NSObject {

	shared_ptr<rose::ResponderSuperframeStats>* _stats;

}

@property (readonly) ResponderSuperframeStats stats; 
-(ResponderSuperframeStats)stats;
-(id)initWithStats:(const ResponderSuperframeStats*)arg1 ;
@end

