/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:50 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NanoPassKit/NanoPassKit-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSMutableArray;

@interface NPKProtoMarkPaymentPassForDeleteRequest : PBRequest <NSCopying> {

	NSString* _passID;
	NSMutableArray* _paymentApplicationAIDs;

}

@property (nonatomic,retain) NSString * passID;                                    //@synthesize passID=_passID - In the implementation block
@property (nonatomic,retain) NSMutableArray * paymentApplicationAIDs;              //@synthesize paymentApplicationAIDs=_paymentApplicationAIDs - In the implementation block
+(Class)paymentApplicationAIDsType;
-(void)mergeFrom:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)passID;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setPassID:(NSString *)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)addPaymentApplicationAIDs:(id)arg1 ;
-(unsigned long long)paymentApplicationAIDsCount;
-(void)clearPaymentApplicationAIDs;
-(id)paymentApplicationAIDsAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)paymentApplicationAIDs;
-(void)setPaymentApplicationAIDs:(NSMutableArray *)arg1 ;
@end
