/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:26 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/_SFPBTableAlignmentSchema.h>
@class NSArray, _SFPBStringDictionary, NSData;


@protocol _SFPBTableAlignmentSchema <NSObject>
@property (nonatomic,copy) NSArray * tableColumnAlignments; 
@property (nonatomic,retain) _SFPBStringDictionary * metadata; 
@property (nonatomic,readonly) NSData * jsonData; 
@required
-(NSData *)jsonData;
-(void)setMetadata:(id)arg1;
-(void)addTableColumnAlignment:(id)arg1;
-(void)clearTableColumnAlignment;
-(unsigned long long)tableColumnAlignmentCount;
-(id)tableColumnAlignmentAtIndex:(unsigned long long)arg1;
-(id)initWithDictionary:(id)arg1;
-(_SFPBStringDictionary *)metadata;
-(id)initWithJSON:(id)arg1;
-(void)setTableColumnAlignments:(id)arg1;
-(NSArray *)tableColumnAlignments;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, _SFPBStringDictionary, NSData, NSString;

@interface _SFPBTableAlignmentSchema : PBCodable <_SFPBTableAlignmentSchema, NSSecureCoding> {

	NSArray* _tableColumnAlignments;
	_SFPBStringDictionary* _metadata;

}

@property (nonatomic,copy) NSArray * tableColumnAlignments;                 //@synthesize tableColumnAlignments=_tableColumnAlignments - In the implementation block
@property (nonatomic,retain) _SFPBStringDictionary * metadata;              //@synthesize metadata=_metadata - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSData *)jsonData;
-(id)initWithFacade:(id)arg1 ;
-(void)setMetadata:(_SFPBStringDictionary *)arg1 ;
-(unsigned long long)hash;
-(void)addTableColumnAlignment:(id)arg1 ;
-(void)clearTableColumnAlignment;
-(unsigned long long)tableColumnAlignmentCount;
-(id)tableColumnAlignmentAtIndex:(unsigned long long)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(_SFPBStringDictionary *)metadata;
-(BOOL)readFrom:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setTableColumnAlignment:(id)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(void)setTableColumnAlignments:(NSArray *)arg1 ;
-(NSArray *)tableColumnAlignments;
@end
