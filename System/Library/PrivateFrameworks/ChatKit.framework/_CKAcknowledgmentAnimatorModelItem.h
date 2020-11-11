/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:22 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class CKEntity, NSIndexPath;

@interface _CKAcknowledgmentAnimatorModelItem : NSObject {

	CKEntity* _entity;
	NSIndexPath* _indexPath;
	long long _ackVoteCount;
	long long _acknowledgmentType;

}

@property (nonatomic,retain) CKEntity * entity;                         //@synthesize entity=_entity - In the implementation block
@property (nonatomic,retain) NSIndexPath * indexPath;                   //@synthesize indexPath=_indexPath - In the implementation block
@property (assign,nonatomic) long long ackVoteCount;                    //@synthesize ackVoteCount=_ackVoteCount - In the implementation block
@property (assign,nonatomic) long long acknowledgmentType;              //@synthesize acknowledgmentType=_acknowledgmentType - In the implementation block
-(void)setEntity:(CKEntity *)arg1 ;
-(void)setAckVoteCount:(long long)arg1 ;
-(NSIndexPath *)indexPath;
-(void)setIndexPath:(NSIndexPath *)arg1 ;
-(long long)ackVoteCount;
-(long long)acknowledgmentType;
-(void)setAcknowledgmentType:(long long)arg1 ;
-(CKEntity *)entity;
@end
