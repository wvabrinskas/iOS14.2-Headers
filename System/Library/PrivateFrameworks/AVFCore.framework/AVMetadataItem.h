/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:00 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AVFCore/AVFCore-Structs.h>
#import <AVFCore/AVAsynchronousKeyValueLoading.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class AVMetadataItemInternal, NSString, NSNumber, NSDate, NSData, NSLocale, NSDictionary;

@interface AVMetadataItem : NSObject <AVAsynchronousKeyValueLoading, NSCopying, NSMutableCopying> {

	AVMetadataItemInternal* _priv;

}

@property (nonatomic,readonly) NSString * stringValue; 
@property (nonatomic,readonly) NSNumber * numberValue; 
@property (nonatomic,readonly) NSDate * dateValue; 
@property (nonatomic,readonly) NSData * dataValue; 
@property (nonatomic,copy,readonly) NSString * identifier; 
@property (nonatomic,copy,readonly) NSString * extendedLanguageTag; 
@property (nonatomic,copy,readonly) NSLocale * locale; 
@property (nonatomic,readonly) SCD_Struct_AV6 time; 
@property (nonatomic,readonly) SCD_Struct_AV6 duration; 
@property (nonatomic,copy,readonly) NSString * dataType; 
@property (nonatomic,copy,readonly) id<NSObject><NSCopying> value; 
@property (nonatomic,copy,readonly) NSDictionary * extraAttributes; 
+(void)initialize;
+(id)metadataItemsFromArray:(id)arg1 filteredByMetadataItemFilter:(id)arg2 ;
+(id)_isoUserDataKeysRequiringKeySpaceConversion;
+(id)identifierForKey:(id)arg1 keySpace:(id)arg2 ;
+(BOOL)_clientExpectsISOUserDataKeysInQuickTimeUserDataKeySpace;
+(id)keyForIdentifier:(id)arg1 ;
+(id)_replaceQuickTimeUserDataKeySpaceWithISOUserDataKeySpaceIfRequired:(id)arg1 ;
+(id)metadataItemsFromArray:(id)arg1 filteredAndSortedAccordingToPreferredLanguages:(id)arg2 ;
+(id)_metadataItemWithFigMetadataDictionary:(id)arg1 containerURL:(id)arg2 securityOptions:(unsigned)arg3 ;
+(id)metadataItemsFromArray:(id)arg1 withLocale:(id)arg2 ;
+(id)dataTypeForValue:(id)arg1 ;
+(id)keySpaceForIdentifier:(id)arg1 ;
+(id)_metadataItemWithFigMetadataDictionary:(id)arg1 ;
+(id)_figMetadataPropertyFromMetadataItems:(id)arg1 ;
+(id)metadataItemsFromArray:(id)arg1 withStringValue:(id)arg2 ;
+(id)metadataItemsFromArray:(id)arg1 filteredByIdentifiers:(id)arg2 ;
+(id)metadataItemsFromArray:(id)arg1 withKey:(id)arg2 keySpace:(id)arg3 ;
+(id)metadataItemWithPropertiesOfMetadataItem:(id)arg1 valueLoadingHandler:(/*^block*/id)arg2 ;
+(id)metadataItemsFromArray:(id)arg1 filteredByIdentifier:(id)arg2 ;
-(void)cancelLoading;
-(NSString *)dataType;
-(id)languageCode;
-(NSString *)extendedLanguageTag;
-(long long)statusOfValueForKey:(id)arg1 error:(id*)arg2 ;
-(NSDate *)dateValue;
-(NSLocale *)locale;
-(id)key;
-(id)init;
-(CGImageRef)imageValue;
-(NSString *)stringValue;
-(unsigned long long)hash;
-(NSNumber *)numberValue;
-(id)commonKey;
-(void)_updateIdentifier;
-(void)_updateCommonKey;
-(id)_keyAsString;
-(id)discoveryTimestamp;
-(void)_extractPropertiesFromDictionary:(id)arg1 ;
-(id)_valueFromCFType:(void*)arg1 ;
-(void)_makeValueReady;
-(void)_makePropertiesReady;
-(void)_updateLanguageInformationFromLocale:(id)arg1 ;
-(void)_updateLanguageInformationFromExtendedLanguageTag:(id)arg1 ;
-(id)unicodeLanguageIdentifier;
-(id)unicodeLanguageCode;
-(id)_initWithFigMetadataDictionary:(id)arg1 ;
-(id)_figMetadataDictionary;
-(id)intrinsicAttributesOfExtraAttributes:(id)arg1 ;
-(BOOL)_areExtraAttributesOf:(id)arg1 comparableToExtraAttributesOf:(id)arg2 ;
-(void*)_copyValueAsCFTypeWithFormatDescription:(opaqueCMFormatDescriptionRef)arg1 error:(id*)arg2 ;
-(id)_figMetadataDictionaryWithValue:(BOOL)arg1 diviningValueDataType:(BOOL)arg2 ;
-(id)_serializationDataType;
-(id)_conformingDataTypes;
-(id)_createJSONEncodedDataFromValue:(id)arg1 error:(id*)arg2 ;
-(id)_figMetadataFormat;
-(id)_initWithReader:(OpaqueFigMetadataReaderRef)arg1 itemIndex:(long long)arg2 ;
-(id)_figMetadataSpecificationReturningError:(id*)arg1 ;
-(NSString *)identifier;
-(id)startDate;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)loadValuesAsynchronouslyForKeys:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)description;
-(NSData *)dataValue;
-(BOOL)isEqual:(id)arg1 ;
-(id<NSObject><NSCopying>)value;
-(SCD_Struct_AV6)time;
-(id)keySpace;
-(SCD_Struct_AV6)duration;
-(NSDictionary *)extraAttributes;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
@end
