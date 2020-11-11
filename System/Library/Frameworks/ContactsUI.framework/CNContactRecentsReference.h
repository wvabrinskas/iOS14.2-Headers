/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:15 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSNumber, NSString;

@interface CNContactRecentsReference : NSObject <NSSecureCoding> {

	NSNumber* _recentContactID;
	NSString* _domain;

}

@property (nonatomic,readonly) NSNumber * recentContactID;              //@synthesize recentContactID=_recentContactID - In the implementation block
@property (nonatomic,readonly) NSString * domain;                       //@synthesize domain=_domain - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)domain;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithRecentContactID:(id)arg1 domain:(id)arg2 ;
-(NSNumber *)recentContactID;
@end
