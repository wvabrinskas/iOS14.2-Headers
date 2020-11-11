/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:45 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CloudKit/CloudKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData, NSURL;

@interface CKDeviceToDeviceShareInvitationToken : NSObject <NSCopying, NSSecureCoding> {

	NSData* _sharingInvitationData;
	NSURL* _shareURL;

}

@property (nonatomic,copy,readonly) NSData * sharingInvitationData;              //@synthesize sharingInvitationData=_sharingInvitationData - In the implementation block
@property (nonatomic,copy,readonly) NSURL * shareURL;                            //@synthesize shareURL=_shareURL - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)CKPropertiesDescription;
-(id)init;
-(unsigned long long)hash;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(NSURL *)shareURL;
-(id)initWithCoder:(id)arg1 ;
-(NSData *)sharingInvitationData;
-(id)initWithSharingInvitationData:(id)arg1 shareURL:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
