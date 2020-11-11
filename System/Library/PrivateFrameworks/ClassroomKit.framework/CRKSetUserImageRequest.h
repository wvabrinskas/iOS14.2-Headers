/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:56 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Catalyst/CATTaskRequest.h>

@class NSString, NSData, DMFControlGroupIdentifier;

@interface CRKSetUserImageRequest : CATTaskRequest {

	NSString* _userIdentifier;
	NSData* _userImageData;
	DMFControlGroupIdentifier* _courseIdentifier;

}

@property (nonatomic,copy) NSString * userIdentifier;                                   //@synthesize userIdentifier=_userIdentifier - In the implementation block
@property (nonatomic,copy) NSData * userImageData;                                      //@synthesize userImageData=_userImageData - In the implementation block
@property (nonatomic,retain) DMFControlGroupIdentifier * courseIdentifier;              //@synthesize courseIdentifier=_courseIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
+(Class)whitelistedClassForResultObject;
-(NSString *)userIdentifier;
-(void)setUserIdentifier:(NSString *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(DMFControlGroupIdentifier *)courseIdentifier;
-(void)setCourseIdentifier:(DMFControlGroupIdentifier *)arg1 ;
-(NSData *)userImageData;
-(void)setUserImageData:(NSData *)arg1 ;
@end
