/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:26 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/_SFPBTextColumnSection.h>
@class NSArray, NSData;


@protocol _SFPBTextColumnSection <NSObject>
@property (nonatomic,copy) NSArray * textLines; 
@property (assign,nonatomic) BOOL textNoWrap; 
@property (assign,nonatomic) unsigned textWeight; 
@property (nonatomic,readonly) NSData * jsonData; 
@required
-(NSData *)jsonData;
-(void)addTextLines:(id)arg1;
-(void)clearTextLines;
-(unsigned long long)textLinesCount;
-(id)textLinesAtIndex:(unsigned long long)arg1;
-(id)initWithDictionary:(id)arg1;
-(id)initWithJSON:(id)arg1;
-(void)setTextLines:(id)arg1;
-(void)setTextNoWrap:(BOOL)arg1;
-(void)setTextWeight:(unsigned)arg1;
-(NSArray *)textLines;
-(BOOL)textNoWrap;
-(unsigned)textWeight;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, NSData, NSString;

@interface _SFPBTextColumnSection : PBCodable <_SFPBTextColumnSection, NSSecureCoding> {

	BOOL _textNoWrap;
	unsigned _textWeight;
	NSArray* _textLines;

}

@property (nonatomic,copy) NSArray * textLines;                     //@synthesize textLines=_textLines - In the implementation block
@property (assign,nonatomic) BOOL textNoWrap;                       //@synthesize textNoWrap=_textNoWrap - In the implementation block
@property (assign,nonatomic) unsigned textWeight;                   //@synthesize textWeight=_textWeight - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSData *)jsonData;
-(id)initWithFacade:(id)arg1 ;
-(unsigned long long)hash;
-(void)addTextLines:(id)arg1 ;
-(void)clearTextLines;
-(unsigned long long)textLinesCount;
-(id)textLinesAtIndex:(unsigned long long)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(void)setTextLines:(NSArray *)arg1 ;
-(void)setTextNoWrap:(BOOL)arg1 ;
-(void)setTextWeight:(unsigned)arg1 ;
-(NSArray *)textLines;
-(BOOL)textNoWrap;
-(unsigned)textWeight;
@end

