/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:38 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/GEOMapFeatureAccessRequest.h>

@class GEOMapFeatureTileFinder, NSString;

@interface _GEOMapFeatureTileFinderRequest : NSObject <GEOMapFeatureAccessRequest> {

	GEOMapFeatureTileFinder* _tileFinder;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithTileFinder:(id)arg1 ;
-(void)cancel;
@end

