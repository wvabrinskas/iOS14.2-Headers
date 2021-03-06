/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:41 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/BlastDoor.framework/BlastDoor
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <BlastDoor/BlastDoor-Structs.h>
#import <BlastDoor/_BlastDoorLPSpecializationMetadata.h>

@class NSString, _BlastDoorLPImage, NSDate;

@interface _BlastDoorLPFileMetadata : _BlastDoorLPSpecializationMetadata {

	NSString* _name;
	NSString* _type;
	unsigned long long _size;
	_BlastDoorLPImage* _thumbnail;
	_BlastDoorLPImage* _icon;
	NSDate* _creationDate;

}

@property (nonatomic,copy) NSString * name;                              //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSString * type;                              //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) unsigned long long size;                    //@synthesize size=_size - In the implementation block
@property (nonatomic,retain) _BlastDoorLPImage * thumbnail;              //@synthesize thumbnail=_thumbnail - In the implementation block
@property (nonatomic,retain) _BlastDoorLPImage * icon;                   //@synthesize icon=_icon - In the implementation block
@property (nonatomic,retain) NSDate * creationDate;                      //@synthesize creationDate=_creationDate - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)keyPathsForValuesAffecting_dummyPropertyForObservation;
-(void)setSize:(unsigned long long)arg1 ;
-(unsigned long long)hash;
-(_BlastDoorLPImage *)icon;
-(void)encodeWithCoder:(id)arg1 ;
-(_BlastDoorLPImage *)thumbnail;
-(void)setIcon:(_BlastDoorLPImage *)arg1 ;
-(void)setCreationDate:(NSDate *)arg1 ;
-(void)setType:(NSString *)arg1 ;
-(void)setThumbnail:(_BlastDoorLPImage *)arg1 ;
-(unsigned long long)size;
-(NSString *)name;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)type;
-(id)initWithCoder:(id)arg1 ;
-(void)_enumerateAsynchronousFields:(/*^block*/id)arg1 ;
-(NSDate *)creationDate;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setName:(NSString *)arg1 ;
@end

