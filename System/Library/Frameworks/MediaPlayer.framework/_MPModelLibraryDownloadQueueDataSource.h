/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:59 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <libobjc.A.dylib/MPLazySectionedCollectionDataSource.h>

@class MPModelLibraryDownloadQueueRequest, MPMediaLibraryEntityTranslator, MPMediaLibraryEntityTranslationContext, NSString;

@interface _MPModelLibraryDownloadQueueDataSource : NSObject <MPLazySectionedCollectionDataSource> {

	MPModelLibraryDownloadQueueRequest* _request;
	MPMediaLibraryEntityTranslator* _entityTranslator;
	MPMediaLibraryEntityTranslationContext* _entityTranslationContext;
	shared_ptr<mlcore::EntityQueryResult>* _entityQueryResult;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned long long)numberOfItemsInSection:(unsigned long long)arg1 ;
-(unsigned long long)numberOfSections;
-(id)identifiersForItemAtIndexPath:(id)arg1 ;
-(id)sectionAtIndex:(unsigned long long)arg1 ;
-(id)initWithRequest:(id)arg1 ;
-(id)itemAtIndexPath:(id)arg1 ;
@end
