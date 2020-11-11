/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:15 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <LinkPresentation/LinkPresentation-Structs.h>
#import <LinkPresentation/LPSpecializationMetadata.h>
#import <libobjc.A.dylib/LPLinkMetadataPresentationTransformer.h>
#import <libobjc.A.dylib/LPLinkMetadataPreviewTransformer.h>
#import <libobjc.A.dylib/LPLinkMetadataBackwardCompatibility.h>
#import <libobjc.A.dylib/LPMultipleMetadataPresentationTransformer.h>

@class NSString, LPImage, NSDate;

@interface LPFileMetadata : LPSpecializationMetadata <LPLinkMetadataPresentationTransformer, LPLinkMetadataPreviewTransformer, LPLinkMetadataBackwardCompatibility, LPMultipleMetadataPresentationTransformer> {

	NSString* _name;
	NSString* _type;
	unsigned long long _size;
	LPImage* _thumbnail;
	LPImage* _icon;
	NSDate* _creationDate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * name;                         //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSString * type;                         //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) unsigned long long size;               //@synthesize size=_size - In the implementation block
@property (nonatomic,retain) LPImage * thumbnail;                   //@synthesize thumbnail=_thumbnail - In the implementation block
@property (nonatomic,retain) LPImage * icon;                        //@synthesize icon=_icon - In the implementation block
@property (nonatomic,retain) NSDate * creationDate;                 //@synthesize creationDate=_creationDate - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)keyPathsForValuesAffecting_dummyPropertyForObservation;
-(void)setSize:(unsigned long long)arg1 ;
-(unsigned long long)hash;
-(LPImage *)icon;
-(void)encodeWithCoder:(id)arg1 ;
-(LPImage *)thumbnail;
-(void)setIcon:(LPImage *)arg1 ;
-(void)setCreationDate:(NSDate *)arg1 ;
-(void)setType:(NSString *)arg1 ;
-(void)setThumbnail:(LPImage *)arg1 ;
-(unsigned long long)size;
-(long long)summaryTypeForTransformer:(id)arg1 ;
-(id)_fileTypeStringForTransformer:(id)arg1 ;
-(id)_fileDetailStringForTransformer:(id)arg1 ;
-(BOOL)_isWatchFace;
-(id)_nameForTransformer:(id)arg1 ;
-(id)_bottomCaptionStringForTransformer:(id)arg1 ;
-(BOOL)_shouldUseSquareIcon;
-(BOOL)_shouldUseCircularIcon;
-(BOOL)_shouldUseBackground;
-(BOOL)_isPlainText;
-(id)_singleLineDescriptionForRemoteFileWithTransformer:(id)arg1 ;
-(BOOL)_isImage;
-(NSString *)name;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)type;
-(id)previewSummaryForTransformer:(id)arg1 ;
-(id)previewImageForTransformer:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)_enumerateAsynchronousFields:(/*^block*/id)arg1 ;
-(void)populateMetadataForBackwardCompatibility:(id)arg1 ;
-(id)presentationPropertiesForTransformer:(id)arg1 ;
-(BOOL)canGeneratePresentationPropertiesForURL:(id)arg1 ;
-(NSDate *)creationDate;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setName:(NSString *)arg1 ;
@end
