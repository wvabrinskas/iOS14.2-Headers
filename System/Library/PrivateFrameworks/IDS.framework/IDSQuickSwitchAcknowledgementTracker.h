/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:54 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/IDS.framework/IDS
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <IDS/IDS-Structs.h>
@class NSMutableSet;

@interface IDSQuickSwitchAcknowledgementTracker : NSObject {

	NSMutableSet* _delegateIdentifiers;
	opaque_pthread_mutex_t _delegateIdentifiersMutex;

}

@property (nonatomic,readonly) BOOL isAwaitingAcknowledgement; 
-(void)stopAwaitingAcknowledgementFromServiceDelegateWithIdentifier:(id)arg1 ;
-(id)init;
-(id)identifierForServiceDelegate:(id)arg1 ;
-(void)_accessDelegateIdentifiersInCriticalSectionWithBlock:(/*^block*/id)arg1 ;
-(void)stopAwaitingAcknowledgementFromAllServiceDelegates;
-(BOOL)isAwaitingAcknowledgement;
-(void)dealloc;
-(id)awaitAcknowledgementFromServiceDelegate:(id)arg1 ;
@end
