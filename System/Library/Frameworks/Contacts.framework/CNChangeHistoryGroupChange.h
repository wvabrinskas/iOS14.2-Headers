/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:20 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, CNGroup, CNChangeHistoryAnchor, NSNumber;

@interface CNChangeHistoryGroupChange : NSObject <NSSecureCoding> {

	NSString* _groupIdentifier;
	long long _changeType;
	CNGroup* _group;
	CNChangeHistoryAnchor* _changeAnchor;
	NSNumber* _changeID;
	NSString* _externalID;
	NSString* _externalURI;
	NSString* _externalModificationTag;

}

@property (assign,nonatomic) long long changeType;                              //@synthesize changeType=_changeType - In the implementation block
@property (nonatomic,retain) CNGroup * group;                                   //@synthesize group=_group - In the implementation block
@property (nonatomic,retain) CNChangeHistoryAnchor * changeAnchor;              //@synthesize changeAnchor=_changeAnchor - In the implementation block
@property (nonatomic,retain) NSNumber * changeID;                               //@synthesize changeID=_changeID - In the implementation block
@property (nonatomic,retain) NSString * externalID;                             //@synthesize externalID=_externalID - In the implementation block
@property (nonatomic,retain) NSString * externalURI;                            //@synthesize externalURI=_externalURI - In the implementation block
@property (nonatomic,retain) NSString * externalModificationTag;                //@synthesize externalModificationTag=_externalModificationTag - In the implementation block
@property (nonatomic,readonly) NSString * groupIdentifier;                      //@synthesize groupIdentifier=_groupIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setChangeType:(long long)arg1 ;
-(void)setExternalModificationTag:(NSString *)arg1 ;
-(NSString *)groupIdentifier;
-(long long)changeType;
-(CNChangeHistoryAnchor *)changeAnchor;
-(void)setChangeID:(NSNumber *)arg1 ;
-(id)initWithIdentifier:(id)arg1 changeType:(long long)arg2 changeAnchor:(id)arg3 changeID:(id)arg4 externalID:(id)arg5 ;
-(void)setChangeAnchor:(CNChangeHistoryAnchor *)arg1 ;
-(void)setGroup:(CNGroup *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)externalURI;
-(id)description;
-(NSString *)externalID;
-(void)setExternalURI:(NSString *)arg1 ;
-(CNGroup *)group;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)externalModificationTag;
-(void)setExternalID:(NSString *)arg1 ;
-(NSNumber *)changeID;
@end
