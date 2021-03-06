/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:08 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /usr/lib/libcoreroutine.dylib
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libcoreroutine.dylib/libcoreroutine.dylib-Structs.h>
#import <libcoreroutine.dylib/RTNotifier.h>

@interface RTUserSessionMonitor : RTNotifier {

	BOOL _previouslyActiveUser;

}

@property (assign,nonatomic) BOOL previouslyActiveUser;              //@synthesize previouslyActiveUser=_previouslyActiveUser - In the implementation block
@property (getter=activeUser,readonly) BOOL activeUser; 
+(id)allocWithZone:(NSZone*)arg1 ;
+(BOOL)supportsNotificationName:(id)arg1 ;
-(void)internalAddObserver:(id)arg1 name:(id)arg2 ;
-(id)init;
-(unsigned)uid;
-(void)internalRemoveObserver:(id)arg1 name:(id)arg2 ;
-(BOOL)activeUser;
-(BOOL)previouslyActiveUser;
-(void)setPreviouslyActiveUser:(BOOL)arg1 ;
@end

