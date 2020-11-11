/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:55 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Catalyst/CATTaskRequest.h>

@class DMFControlGroupIdentifier, NSArray;

@interface CRKLeaveControlGroupRequest : CATTaskRequest {

	DMFControlGroupIdentifier* _groupIdentifier;
	NSArray* _leaderIdentifiers;

}

@property (nonatomic,retain) DMFControlGroupIdentifier * groupIdentifier;              //@synthesize groupIdentifier=_groupIdentifier - In the implementation block
@property (nonatomic,copy) NSArray * leaderIdentifiers;                                //@synthesize leaderIdentifiers=_leaderIdentifiers - In the implementation block
+(BOOL)supportsSecureCoding;
-(DMFControlGroupIdentifier *)groupIdentifier;
-(void)setGroupIdentifier:(DMFControlGroupIdentifier *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSArray *)leaderIdentifiers;
-(void)setLeaderIdentifiers:(NSArray *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end
