/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:56 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, CKDPRecordFieldIdentifier, CKDPRecordFieldValue;

@interface CKDPRecordField : PBCodable <NSCopying> {

	NSMutableArray* _actions;
	CKDPRecordFieldIdentifier* _identifier;
	CKDPRecordFieldValue* _value;

}

@property (nonatomic,readonly) BOOL hasIdentifier; 
@property (nonatomic,retain) CKDPRecordFieldIdentifier * identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) BOOL hasValue; 
@property (nonatomic,retain) CKDPRecordFieldValue * value;                        //@synthesize value=_value - In the implementation block
@property (nonatomic,retain) NSMutableArray * actions;                            //@synthesize actions=_actions - In the implementation block
+(Class)actionType;
+(id)emptyFieldWithKey:(id)arg1 ;
-(void)setActions:(NSMutableArray *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)_CKLogToFileHandle:(id)arg1 atDepth:(int)arg2 ;
-(BOOL)hasIdentifier;
-(unsigned long long)hash;
-(unsigned long long)actionsCount;
-(void)clearActions;
-(id)dictionaryRepresentation;
-(CKDPRecordFieldIdentifier *)identifier;
-(BOOL)readFrom:(id)arg1 ;
-(void)addAction:(id)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setIdentifier:(CKDPRecordFieldIdentifier *)arg1 ;
-(CKDPRecordFieldValue *)value;
-(BOOL)hasValue;
-(void)writeTo:(id)arg1 ;
-(void)setValue:(CKDPRecordFieldValue *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSMutableArray *)actions;
-(id)actionAtIndex:(unsigned long long)arg1 ;
@end
