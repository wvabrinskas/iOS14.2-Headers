/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:57 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AssistantServices/AssistantServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID, NSData, NSDictionary;

@interface AFMyriadSession : NSObject <NSCopying, NSSecureCoding> {

	unsigned long long _generation;
	NSUUID* _sessionId;
	NSUUID* _currentElectionAdvertisementId;
	NSData* _currentElectionAdvertisementData;
	NSDictionary* _electionAdvertisementDataByIds;

}

@property (nonatomic,readonly) unsigned long long generation;                                   //@synthesize generation=_generation - In the implementation block
@property (nonatomic,copy,readonly) NSUUID * sessionId;                                         //@synthesize sessionId=_sessionId - In the implementation block
@property (nonatomic,copy,readonly) NSUUID * currentElectionAdvertisementId;                    //@synthesize currentElectionAdvertisementId=_currentElectionAdvertisementId - In the implementation block
@property (nonatomic,copy,readonly) NSData * currentElectionAdvertisementData;                  //@synthesize currentElectionAdvertisementData=_currentElectionAdvertisementData - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * electionAdvertisementDataByIds;              //@synthesize electionAdvertisementDataByIds=_electionAdvertisementDataByIds - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)newWithBuilder:(/*^block*/id)arg1 ;
-(NSUUID *)sessionId;
-(unsigned long long)generation;
-(NSUUID *)currentElectionAdvertisementId;
-(id)_descriptionWithIndent:(unsigned long long)arg1 ;
-(NSData *)currentElectionAdvertisementData;
-(NSDictionary *)electionAdvertisementDataByIds;
-(id)initWithGeneration:(unsigned long long)arg1 sessionId:(id)arg2 currentElectionAdvertisementId:(id)arg3 currentElectionAdvertisementData:(id)arg4 electionAdvertisementDataByIds:(id)arg5 ;
-(unsigned long long)hash;
-(void)encodeWithCoder:(id)arg1 ;
-(id)mutatedCopyWithMutator:(/*^block*/id)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

