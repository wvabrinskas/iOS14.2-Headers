/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:48:02 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/UserNotificationsSettings.framework/UserNotificationsSettings
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UserNotificationsSettings/UserNotificationsSettings-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, UNNotificationIcon, UNNotificationSourceSettings;

@interface UNNotificationSource : NSObject <NSCopying, NSSecureCoding> {

	BOOL _isHiddenFromSettings;
	NSString* _sourceIdentifier;
	NSString* _displayName;
	UNNotificationIcon* _icon;
	UNNotificationSourceSettings* _sourceSettings;

}

@property (nonatomic,copy,readonly) NSString * sourceIdentifier;                                //@synthesize sourceIdentifier=_sourceIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL isHiddenFromSettings;                                       //@synthesize isHiddenFromSettings=_isHiddenFromSettings - In the implementation block
@property (nonatomic,copy,readonly) NSString * displayName;                                     //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,copy,readonly) UNNotificationIcon * icon;                                  //@synthesize icon=_icon - In the implementation block
@property (nonatomic,copy,readonly) UNNotificationSourceSettings * sourceSettings;              //@synthesize sourceSettings=_sourceSettings - In the implementation block
+(BOOL)supportsSecureCoding;
-(UNNotificationIcon *)icon;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)displayName;
-(id)description;
-(NSString *)sourceIdentifier;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(UNNotificationSourceSettings *)sourceSettings;
-(BOOL)isHiddenFromSettings;
-(id)initWithIdentifier:(id)arg1 isHidden:(BOOL)arg2 displayName:(id)arg3 icon:(id)arg4 settings:(id)arg5 ;
@end

