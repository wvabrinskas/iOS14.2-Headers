/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:15 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ProactiveML.framework/ProactiveML
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ProactiveML/ProactiveML-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDProactiveModelFittingSparseFloatMatrix : PBCodable <NSCopying> {

	SCD_Struct_AW6* _columnIndices;
	SCD_Struct_AW6* _rowIndices;
	SCD_Struct_AW7* _values;
	unsigned long long _columnLength;
	unsigned long long _rowLength;
	SCD_Struct_AW9 _has;

}

@property (nonatomic,readonly) unsigned long long columnIndicesCount; 
@property (nonatomic,readonly) unsigned long long* columnIndices; 
@property (assign,nonatomic) BOOL hasColumnLength; 
@property (assign,nonatomic) unsigned long long columnLength;                      //@synthesize columnLength=_columnLength - In the implementation block
@property (nonatomic,readonly) unsigned long long rowIndicesCount; 
@property (nonatomic,readonly) unsigned long long* rowIndices; 
@property (assign,nonatomic) BOOL hasRowLength; 
@property (assign,nonatomic) unsigned long long rowLength;                         //@synthesize rowLength=_rowLength - In the implementation block
@property (nonatomic,readonly) unsigned long long valuesCount; 
@property (nonatomic,readonly) float* values; 
+(id)sparseFloatMatrixFromDenseMatrix:(id)arg1 ;
+(id)sparseFloatMatrixFromSparseMatrix:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(unsigned long long)valuesCount;
-(unsigned long long)hash;
-(id)dictionaryRepresentation;
-(void)clearValues;
-(BOOL)readFrom:(id)arg1 ;
-(float*)values;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)addValues:(float)arg1 ;
-(float)valuesAtIndex:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(void)setValues:(float*)arg1 count:(unsigned long long)arg2 ;
-(unsigned long long)columnIndicesCount;
-(unsigned long long*)columnIndices;
-(void)clearColumnIndices;
-(void)addColumnIndices:(unsigned long long)arg1 ;
-(unsigned long long)columnIndicesAtIndex:(unsigned long long)arg1 ;
-(void)setColumnIndices:(unsigned long long*)arg1 count:(unsigned long long)arg2 ;
-(void)setColumnLength:(unsigned long long)arg1 ;
-(void)setHasColumnLength:(BOOL)arg1 ;
-(BOOL)hasColumnLength;
-(unsigned long long)rowIndicesCount;
-(unsigned long long*)rowIndices;
-(void)clearRowIndices;
-(void)addRowIndices:(unsigned long long)arg1 ;
-(unsigned long long)rowIndicesAtIndex:(unsigned long long)arg1 ;
-(void)setRowIndices:(unsigned long long*)arg1 count:(unsigned long long)arg2 ;
-(void)setRowLength:(unsigned long long)arg1 ;
-(void)setHasRowLength:(BOOL)arg1 ;
-(BOOL)hasRowLength;
-(unsigned long long)columnLength;
-(unsigned long long)rowLength;
-(float)valueAtRow:(unsigned long long)arg1 column:(unsigned long long)arg2 ;
@end
