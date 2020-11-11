/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:30 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSSet;

@interface PLAssetCollectionGenerationResult : NSObject {

	BOOL _frequentLocationsDidChange;
	NSSet* _insertedOrUpdatedMoments;

}

@property (nonatomic,readonly) NSSet * insertedOrUpdatedMoments;              //@synthesize insertedOrUpdatedMoments=_insertedOrUpdatedMoments - In the implementation block
@property (nonatomic,readonly) BOOL frequentLocationsDidChange;               //@synthesize frequentLocationsDidChange=_frequentLocationsDidChange - In the implementation block
-(BOOL)frequentLocationsDidChange;
-(NSSet *)insertedOrUpdatedMoments;
-(id)initWithInsertedOrUpdatedMoments:(id)arg1 frequentLocationsDidChange:(BOOL)arg2 ;
@end
