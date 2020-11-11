/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:23 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ShareSheet.framework/ShareSheet
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID, NSNumber;

@interface _UIHostActivityProxy : NSObject <NSSecureCoding> {

	BOOL _disabled;
	BOOL _favorite;
	BOOL _restricted;
	BOOL _longPressable;
	NSUUID* _proxyIdentifier;
	NSNumber* _imageSlot;
	NSNumber* _labelSlot;
	double _platterTextHeight;
	NSUUID* _activityIdentifierShare;
	NSUUID* _activityIdentifierOpen;
	NSUUID* _activityIdentifierCopy;

}

@property (nonatomic,retain) NSUUID * proxyIdentifier;                               //@synthesize proxyIdentifier=_proxyIdentifier - In the implementation block
@property (nonatomic,retain) NSNumber * imageSlot;                                   //@synthesize imageSlot=_imageSlot - In the implementation block
@property (nonatomic,retain) NSNumber * labelSlot;                                   //@synthesize labelSlot=_labelSlot - In the implementation block
@property (assign,nonatomic) double platterTextHeight;                               //@synthesize platterTextHeight=_platterTextHeight - In the implementation block
@property (nonatomic,retain) NSUUID * activityIdentifierShare;                       //@synthesize activityIdentifierShare=_activityIdentifierShare - In the implementation block
@property (nonatomic,retain) NSUUID * activityIdentifierOpen;                        //@synthesize activityIdentifierOpen=_activityIdentifierOpen - In the implementation block
@property (nonatomic,retain) NSUUID * activityIdentifierCopy;                        //@synthesize activityIdentifierCopy=_activityIdentifierCopy - In the implementation block
@property (assign,getter=isDisabled,nonatomic) BOOL disabled;                        //@synthesize disabled=_disabled - In the implementation block
@property (assign,getter=isFavorite,nonatomic) BOOL favorite;                        //@synthesize favorite=_favorite - In the implementation block
@property (assign,getter=isRestricted,nonatomic) BOOL restricted;                    //@synthesize restricted=_restricted - In the implementation block
@property (assign,getter=isLongPressable,nonatomic) BOOL longPressable;              //@synthesize longPressable=_longPressable - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setDisabled:(BOOL)arg1 ;
-(void)setFavorite:(BOOL)arg1 ;
-(NSUUID *)proxyIdentifier;
-(BOOL)isDisabled;
-(unsigned long long)hash;
-(BOOL)isRestricted;
-(void)encodeWithCoder:(id)arg1 ;
-(double)platterTextHeight;
-(void)setRestricted:(BOOL)arg1 ;
-(void)setProxyIdentifier:(NSUUID *)arg1 ;
-(void)setImageSlot:(NSNumber *)arg1 ;
-(void)setLabelSlot:(NSNumber *)arg1 ;
-(void)setPlatterTextHeight:(double)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)isLongPressable;
-(void)setLongPressable:(BOOL)arg1 ;
-(NSUUID *)activityIdentifierShare;
-(NSUUID *)activityIdentifierOpen;
-(NSUUID *)activityIdentifierCopy;
-(BOOL)isFavorite;
-(id)initWithCoder:(id)arg1 ;
-(void)setActivityIdentifierShare:(NSUUID *)arg1 ;
-(void)setActivityIdentifierOpen:(NSUUID *)arg1 ;
-(void)setActivityIdentifierCopy:(NSUUID *)arg1 ;
-(NSNumber *)imageSlot;
-(NSNumber *)labelSlot;
@end
