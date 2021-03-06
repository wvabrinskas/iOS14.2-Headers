/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:50 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NanoPassKit/NanoPassKit-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSMutableArray;

@interface NPKProtoStandalonePaymentProvisioningFlowPickerItem : PBCodable <NSCopying> {

	NSString* _identifier;
	NSMutableArray* _products;
	NSString* _title;

}

@property (nonatomic,readonly) BOOL hasIdentifier; 
@property (nonatomic,retain) NSString * identifier;                  //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) BOOL hasTitle; 
@property (nonatomic,retain) NSString * title;                       //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSMutableArray * products;              //@synthesize products=_products - In the implementation block
+(Class)productsType;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasIdentifier;
-(unsigned long long)hash;
-(id)dictionaryRepresentation;
-(NSString *)identifier;
-(BOOL)readFrom:(id)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)hasTitle;
-(void)copyTo:(id)arg1 ;
-(NSMutableArray *)products;
-(NSString *)title;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setProducts:(NSMutableArray *)arg1 ;
-(void)addProducts:(id)arg1 ;
-(unsigned long long)productsCount;
-(void)clearProducts;
-(id)productsAtIndex:(unsigned long long)arg1 ;
@end

