/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:13 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ActionPredictionHeuristicsInternal.framework/ActionPredictionHeuristicsInternal
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ActionPredictionHeuristicsInternal/ATXInformationHeuristicRefreshTrigger.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface ATXInformationHeuristicRefreshNotitifcationTrigger : ATXInformationHeuristicRefreshTrigger <NSSecureCoding> {

	BOOL _isDistributed;
	NSString* _notificationName;
	id _observerToken;

}
+(BOOL)supportsSecureCoding;
-(void)_start;
-(unsigned long long)hash;
-(void)encodeWithCoder:(id)arg1 ;
-(void)_stop;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithNotification:(id)arg1 distributed:(BOOL)arg2 ;
@end

