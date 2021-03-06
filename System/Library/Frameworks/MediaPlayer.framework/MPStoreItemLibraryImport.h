/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:58 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSArray, MPModelObject;

@interface MPStoreItemLibraryImport : NSObject {

	BOOL _addToCloudLibrary;
	NSArray* _importElements;
	MPModelObject* _referralObject;

}

@property (nonatomic,readonly) NSArray * importElements;                    //@synthesize importElements=_importElements - In the implementation block
@property (nonatomic,readonly) BOOL addToCloudLibrary;                      //@synthesize addToCloudLibrary=_addToCloudLibrary - In the implementation block
@property (nonatomic,readonly) MPModelObject * referralObject;              //@synthesize referralObject=_referralObject - In the implementation block
-(NSArray *)importElements;
-(MPModelObject *)referralObject;
-(id)initWithImportElements:(id)arg1 usingCloudLibraryDestination:(BOOL)arg2 ;
-(id)initWithImportElements:(id)arg1 referralObject:(id)arg2 usingCloudLibraryDestination:(BOOL)arg3 ;
-(BOOL)addToCloudLibrary;
@end

