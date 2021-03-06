/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:47 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NanoAudioControl.framework/NanoAudioControl
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NanoAudioControl/NanoAudioControl-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSString;

@interface NACAudioRoutesMessage : PBCodable <NSCopying> {

	NSMutableArray* _audioRoutes;
	NSString* _category;

}

@property (nonatomic,readonly) BOOL hasCategory; 
@property (nonatomic,retain) NSString * category;                       //@synthesize category=_category - In the implementation block
@property (nonatomic,retain) NSMutableArray * audioRoutes;              //@synthesize audioRoutes=_audioRoutes - In the implementation block
+(Class)audioRoutesType;
-(void)mergeFrom:(id)arg1 ;
-(NSString *)category;
-(unsigned long long)hash;
-(void)clearAudioRoutes;
-(void)setCategory:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasCategory;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setAudioRoutes:(NSMutableArray *)arg1 ;
-(NSMutableArray *)audioRoutes;
-(void)addAudioRoutes:(id)arg1 ;
-(unsigned long long)audioRoutesCount;
-(id)audioRoutesAtIndex:(unsigned long long)arg1 ;
@end

