/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:34 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WorkflowKit/WorkflowKit-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSString;

@interface WFPBAlert : PBCodable <NSCopying> {

	NSMutableArray* _buttons;
	NSString* _message;
	int _preferredStyle;
	NSString* _title;
	SCD_Struct_WF105 _has;

}

@property (nonatomic,readonly) BOOL hasTitle; 
@property (nonatomic,retain) NSString * title;                      //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) BOOL hasMessage; 
@property (nonatomic,retain) NSString * message;                    //@synthesize message=_message - In the implementation block
@property (nonatomic,retain) NSMutableArray * buttons;              //@synthesize buttons=_buttons - In the implementation block
@property (assign,nonatomic) BOOL hasPreferredStyle; 
@property (assign,nonatomic) int preferredStyle;                    //@synthesize preferredStyle=_preferredStyle - In the implementation block
+(Class)buttonsType;
-(void)mergeFrom:(id)arg1 ;
-(void)setMessage:(NSString *)arg1 ;
-(int)preferredStyle;
-(unsigned long long)hash;
-(NSMutableArray *)buttons;
-(unsigned long long)buttonsCount;
-(void)clearButtons;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(NSString *)message;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(void)setPreferredStyle:(int)arg1 ;
-(BOOL)hasTitle;
-(void)copyTo:(id)arg1 ;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(BOOL)hasMessage;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setButtons:(NSMutableArray *)arg1 ;
-(void)addButtons:(id)arg1 ;
-(id)buttonsAtIndex:(unsigned long long)arg1 ;
-(void)setHasPreferredStyle:(BOOL)arg1 ;
-(BOOL)hasPreferredStyle;
-(id)preferredStyleAsString:(int)arg1 ;
-(int)StringAsPreferredStyle:(id)arg1 ;
@end

