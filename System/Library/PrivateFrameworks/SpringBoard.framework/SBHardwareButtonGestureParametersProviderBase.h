/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:27 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/SBHardwareButtonGestureParametersProvider.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>

@class SBHardwareButtonGestureParameters, NSMapTable, NSString;

@interface SBHardwareButtonGestureParametersProviderBase : NSObject <SBHardwareButtonGestureParametersProvider, BSDescriptionProviding> {

	NSMapTable* _observers;

}

@property (nonatomic,retain) NSMapTable * observers;                                                             //@synthesize observers=_observers - In the implementation block
@property (nonatomic,readonly) SBHardwareButtonGestureParameters * hardwareButtonGestureParameters; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)succinctDescription;
-(NSMapTable *)observers;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)setObservers:(NSMapTable *)arg1 ;
-(NSString *)description;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(SBHardwareButtonGestureParameters *)hardwareButtonGestureParameters;
-(void)addHardwareButtonGestureParametersObserver:(id)arg1 ;
-(void)publishUpdatedParameters:(id)arg1 ;
-(void)removeHardwareButtonGestureParametersObserver:(id)arg1 ;
@end
