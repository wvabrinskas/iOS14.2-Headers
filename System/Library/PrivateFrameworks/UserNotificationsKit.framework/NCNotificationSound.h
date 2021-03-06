/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:48:01 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/UserNotificationsKit.framework/UserNotificationsKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UserNotificationsKit/UserNotificationsKit-Structs.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>

@class NSString, NSDictionary, TLAlertConfiguration;

@interface NCNotificationSound : NSObject <BSDescriptionProviding> {

	long long _soundType;
	unsigned _systemSoundID;
	unsigned long long _soundBehavior;
	NSString* _ringtoneName;
	NSDictionary* _vibrationPattern;
	BOOL _repeats;
	double _maxDuration;
	NSDictionary* _controllerAttributes;
	NSString* _songPath;
	TLAlertConfiguration* _alertConfiguration;

}

@property (nonatomic,readonly) long long soundType;                                         //@synthesize soundType=_soundType - In the implementation block
@property (nonatomic,readonly) unsigned systemSoundID;                                      //@synthesize systemSoundID=_systemSoundID - In the implementation block
@property (nonatomic,readonly) unsigned long long soundBehavior;                            //@synthesize soundBehavior=_soundBehavior - In the implementation block
@property (nonatomic,copy,readonly) NSString * ringtoneName;                                //@synthesize ringtoneName=_ringtoneName - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * vibrationPattern;                        //@synthesize vibrationPattern=_vibrationPattern - In the implementation block
@property (getter=isRepeating,nonatomic,readonly) BOOL repeats;                             //@synthesize repeats=_repeats - In the implementation block
@property (nonatomic,readonly) double maxDuration;                                          //@synthesize maxDuration=_maxDuration - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * controllerAttributes;                    //@synthesize controllerAttributes=_controllerAttributes - In the implementation block
@property (nonatomic,copy,readonly) NSString * songPath;                                    //@synthesize songPath=_songPath - In the implementation block
@property (nonatomic,copy,readonly) TLAlertConfiguration * alertConfiguration;              //@synthesize alertConfiguration=_alertConfiguration - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)succinctDescription;
-(long long)soundType;
-(unsigned)systemSoundID;
-(NSDictionary *)vibrationPattern;
-(unsigned long long)hash;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(NSString *)debugDescription;
-(NSString *)ringtoneName;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(BOOL)isRepeating;
-(NSString *)description;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)songPath;
-(double)maxDuration;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(unsigned long long)soundBehavior;
-(id)succinctDescriptionBuilder;
-(TLAlertConfiguration *)alertConfiguration;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSDictionary *)controllerAttributes;
-(id)initWithNotificationSound:(id)arg1 ;
@end

