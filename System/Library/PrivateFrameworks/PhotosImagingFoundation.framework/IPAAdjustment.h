/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:08 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosImagingFoundation.framework/PhotosImagingFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosImagingFoundation/PhotosImagingFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, IPAAdjustmentVersion, NSDictionary;

@interface IPAAdjustment : NSObject <NSCopying> {

	NSString* _identifier;
	IPAAdjustmentVersion* _version;
	NSDictionary* _settings;

}

@property (nonatomic,retain) NSString * identifier;                       //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) IPAAdjustmentVersion * version;              //@synthesize version=_version - In the implementation block
@property (nonatomic,retain) NSDictionary * settings;                     //@synthesize settings=_settings - In the implementation block
-(void)setVersion:(IPAAdjustmentVersion *)arg1 ;
-(void)setSettings:(NSDictionary *)arg1 ;
-(id)init;
-(IPAAdjustmentVersion *)version;
-(id)debugDescription;
-(NSString *)identifier;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(NSDictionary *)settings;
-(void)setIdentifier:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqualToAdjustment:(id)arg1 ;
-(id)_debugDescriptionSuffix;
@end
