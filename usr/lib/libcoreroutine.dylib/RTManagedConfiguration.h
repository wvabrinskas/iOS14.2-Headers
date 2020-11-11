/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:06 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /usr/lib/libcoreroutine.dylib
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol RTManagedConfigurationObserver;
#import <libcoreroutine.dylib/libcoreroutine.dylib-Structs.h>
@interface RTManagedConfiguration : NSObject {

	id<RTManagedConfigurationObserver> _delegate;

}

@property (assign,nonatomic,__weak) id<RTManagedConfigurationObserver> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)allocWithZone:(NSZone*)arg1 ;
-(BOOL)effectiveBoolValueForSetting:(id)arg1 ;
-(BOOL)isDiagnosticsAndUsageAllowed;
-(id<RTManagedConfigurationObserver>)delegate;
-(void)setDelegate:(id<RTManagedConfigurationObserver>)arg1 ;
-(BOOL)isFindMyCarAllowed;
@end
