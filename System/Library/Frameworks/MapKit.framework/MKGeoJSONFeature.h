/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:10 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/MKGeoJSONObject.h>

@class NSString, NSData, NSArray;

@interface MKGeoJSONFeature : NSObject <MKGeoJSONObject> {

	NSString* _identifier;
	NSData* _properties;
	NSArray* _geometry;

}

@property (nonatomic,readonly) NSString * identifier;               //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) NSData * properties;                 //@synthesize properties=_properties - In the implementation block
@property (nonatomic,readonly) NSArray * geometry;                  //@synthesize geometry=_geometry - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)_initWithGeoJSONObject:(id)arg1 error:(id*)arg2 ;
-(id)_initWithProperties:(id)arg1 geometry:(id)arg2 identifier:(id)arg3 ;
-(NSString *)identifier;
-(NSData *)properties;
-(NSArray *)geometry;
@end

